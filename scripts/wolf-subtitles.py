"""Experimental local Wolf 2.24 capture + dictionary subtitle window.

Only launches a newly copied, hash-verified game. No attach-to-PID or writeback API.
"""
import argparse
import ctypes
import hashlib
import json
from pathlib import Path
import queue
import shutil
import struct
import subprocess
import sys
import threading
import time
import uuid
from wolf_subtitle_state import LatestCaption, VisibleTextGate, decode_wolf_caption, plain_display_text

ROOT = Path(__file__).resolve().parents[1]
SUPPORTED_SHA256 = 'e0716a35323007c79e6033bc19c610a38e1d4ccc0dce47c6f79cf706853e5b76'


def digest(file):
    with file.open('rb') as stream:
        return hashlib.file_digest(stream, 'sha256').hexdigest()


def snapshot(directory):
    return {str(file.relative_to(directory)): (file.stat().st_size, file.stat().st_mtime_ns, digest(file))
            for file in directory.rglob('*') if file.is_file()}


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('game', type=Path)
    parser.add_argument('--dictionary', type=Path)
    parser.add_argument('--smoke-seconds', type=float, default=0)
    parser.add_argument('--headless', action='store_true', help='Capture test without a subtitle window')
    parser.add_argument('--validation-report', type=Path, help='Optional text-free verification summary (must be outside game directory)')
    parser.add_argument('--screenshot', action='store_true', help='Save a screenshot of the owned subtitle window to this run directory (requires Pillow)')
    args = parser.parse_args()
    if sys.version_info < (3, 12):
        parser.error('Python 3.12 or newer is required')
    if sys.platform != 'win32':
        parser.error('This verified capture profile currently supports Windows only')
    if args.smoke_seconds < 0 or (args.headless and not args.smoke_seconds):
        parser.error('Headless runs require a positive --smoke-seconds')
    if args.screenshot:
        if args.headless:
            parser.error('--screenshot requires a visible subtitle window')
        try:
            import PIL.ImageGrab
        except ImportError:
            parser.error('--screenshot requires Pillow; no game process was started')
    launcher = ROOT / 'build/wolf/wolf_launch.exe'
    capture_dll = ROOT / 'build/wolf/wolf_capture.dll'
    if not launcher.is_file() or not capture_dll.is_file():
        parser.error('Build the native capture adapter with scripts/build-wolf-capture.ps1 first')

    game = args.game.resolve()
    if args.validation_report and args.validation_report.resolve().is_relative_to(game):
        parser.error('Verification output must not be inside the original game directory')
    executable = game / 'Game.exe'
    if digest(executable) != SUPPORTED_SHA256:
        parser.error('Executable does not match the verified x86 Wolf 2.24 profile; no process was started')
    dictionary = (args.dictionary or game / '翻译文件.json').resolve()
    if not dictionary.is_file() or dictionary.stat().st_size > 32 * 1024 * 1024:
        parser.error('A local dictionary within 32 MiB is required')
    # Refuse links rather than accidentally using original external assets/saves in the copy.
    for file in game.rglob('*'):
        if file.is_symlink() or file.is_junction():
            parser.error('Game copy refuses symlinks and junctions')
    run = ROOT / 'work/wolf-runs' / (time.strftime('%Y%m%d-%H%M%S-') + uuid.uuid4().hex[:8])
    run.mkdir(parents=True)
    source_before = snapshot(game)
    copied = run / 'game'
    print('Creating isolated game copy:', copied, flush=True)
    shutil.copytree(game, copied)
    if digest(copied / 'Game.exe') != SUPPORTED_SHA256:
        raise RuntimeError('Copied executable digest mismatch')
    shutil.copy(capture_dll, run / 'wolf_capture.dll')

    messages = LatestCaption()
    ui = queue.Queue(maxsize=1)
    replies = queue.Queue()
    stop = threading.Event()
    counters = {'captured': 0, 'matched': 0, 'decodeErrors': 0, 'dropped': 0, 'workerErrors': 0,
                'captureErrors': 0, 'captureLimitReached': False, 'uiMatchedShown': 0,
                'coalesced': 0, 'staleSuppressed': 0, 'formatBlocksRemoved': 0,
                'controlsRemoved': 0, 'uiUpdates': 0, 'screenshotSaved': False}
    worker = None
    game_process = None
    pid = None
    handle = None
    window = None
    agent_stats = None
    threads = []
    kernel = ctypes.WinDLL('kernel32', use_last_error=True)
    kernel.OpenProcess.argtypes = [ctypes.c_uint32, ctypes.c_int, ctypes.c_uint32]
    kernel.OpenProcess.restype = ctypes.c_void_p
    kernel.WaitForSingleObject.argtypes = [ctypes.c_void_p, ctypes.c_uint32]
    kernel.TerminateProcess.argtypes = [ctypes.c_void_p, ctypes.c_uint32]
    kernel.CloseHandle.argtypes = [ctypes.c_void_p]

    def offer(target, value):
        # A subtitle is current state, not a playback queue.
        while True:
            try:
                target.put_nowait(value)
                return
            except queue.Full:
                try:
                    target.get_nowait()
                    counters['coalesced'] += 1
                except queue.Empty:
                    pass

    def start_thread(function):
        thread = threading.Thread(target=function, daemon=True)
        threads.append(thread)
        thread.start()

    def capture_loop():
        buffer = b''
        visible = VisibleTextGate()
        try:
            with (run / 'wolf-capture.bin').open('rb') as source:
                while not stop.is_set():
                    data = source.read(8192)
                    if not data:
                        stop.wait(0.05)
                        continue
                    buffer += data
                    while len(buffer) >= 8:
                        length, slot = struct.unpack_from('<II', buffer)
                        if length == 0 and slot == 2:
                            counters['captureLimitReached'] = True
                            offer(ui, {'error': '捕获日志达到 20 MiB 上限，字幕捕获已停止；游戏仍可继续。'})
                            return
                        if not 0 < length <= 8192 or slot > 1:
                            raise RuntimeError('Invalid native capture frame')
                        if len(buffer) < 8 + length:
                            break
                        raw = buffer[8:8 + length]
                        buffer = buffer[8 + length:]
                        try:
                            caption = decode_wolf_caption(raw)
                        except (UnicodeDecodeError, ValueError):
                            counters['decodeErrors'] += 1
                            continue
                        text = caption.text
                        counters['formatBlocksRemoved'] += caption.format_blocks
                        counters['controlsRemoved'] += caption.removed_controls
                        if text:
                            counters['captured'] += 1
                            if visible.observe(text, time.monotonic()):
                                messages.publish(text)
        except Exception as error:
            counters['captureErrors'] += 1
            offer(ui, {'error': str(error)})
            stop.set()

    def read_replies():
        try:
            for line in worker.stdout:
                replies.put(json.loads(line))
        except Exception as error:
            replies.put({'error': str(error)})
        finally:
            replies.put({'error': 'Translation worker closed'})

    def translate_loop():
        request_id = 0
        processed_generation = 0
        while not stop.is_set():
            pending = messages.next_stable(processed_generation, stop)
            if pending is None:
                return
            generation, text = pending
            processed_generation = generation
            request_id += 1
            try:
                worker.stdin.write(json.dumps({'id': request_id, 'text': text}, ensure_ascii=False) + '\n')
                worker.stdin.flush()
                reply = replies.get(timeout=3)
                if reply.get('id') != request_id or 'error' in reply:
                    raise RuntimeError(reply.get('error', 'Translation response correlation failed'))
                if reply['matched']:
                    counters['matched'] += 1
                reply['translation'] = plain_display_text(reply['translation'])
                current = messages.is_current(generation)
                if current:
                    offer(ui, {'original': text, 'generation': generation, **reply})
                else:
                    counters['staleSuppressed'] += 1
                with (run / 'captured-local.jsonl').open('a', encoding='utf-8') as stream:
                    stream.write(json.dumps({'original': text, 'generation': generation, 'current': current, **reply}, ensure_ascii=False) + '\n')
            except Exception as error:
                counters['workerErrors'] += 1
                offer(ui, {'error': str(error)})
                stop.set()

    try:
        with (run / 'worker-stderr.log').open('w', encoding='utf-8') as stderr:
            worker = subprocess.Popen(['node', '--max-old-space-size=256', str(ROOT / 'scripts/wolf-translation-worker.mjs'), str(dictionary)],
                                      cwd=ROOT, stdin=subprocess.PIPE, stdout=subprocess.PIPE, stderr=stderr,
                                      text=True, encoding='utf-8', bufsize=1)
            start_thread(read_replies)
            ready = replies.get(timeout=35)
            if not ready.get('ready'):
                raise RuntimeError(ready.get('error', 'Translation worker did not become ready'))
            game_process = subprocess.Popen([str(launcher), str(copied / 'Game.exe'), str(run / 'wolf_capture.dll')],
                                            cwd=run, stdout=subprocess.PIPE, stderr=stderr, text=True, encoding='utf-8')
            # Hold the helper process; its kill-on-close Job Object owns the game child.
            pid = game_process.pid
            # A durable Windows process handle keeps cleanup bound to this process, not a reused PID.
            handle = kernel.OpenProcess(0x00100001, False, pid)
            if not handle:
                game_process.terminate()
                raise ctypes.WinError(ctypes.get_last_error())
            line = game_process.stdout.readline()
            if not line:
                raise RuntimeError('Native capture initialization failed; inspect worker-stderr.log')
            installed = json.loads(line)
            if not installed.get('installed'):
                raise RuntimeError('Native capture did not install')
            print(json.dumps({'dictionaryEntries': ready['entryCount'], **installed}), flush=True)
            start_thread(capture_loop)
            start_thread(translate_loop)
            started = time.monotonic()
            if args.headless:
                while not stop.wait(0.1) and time.monotonic() - started < args.smoke_seconds:
                    if kernel.WaitForSingleObject(handle, 0) != 258:
                        break
            else:
                import tkinter as tk
                import tkinter.font as tkfont
                window = tk.Tk()
                window.title('Wolf 实时字幕（实验版，不是游戏内替换）')
                window.geometry('920x260+40+620')
                window.attributes('-topmost', True)
                window.configure(bg='#172131')
                families = set(tkfont.families(window))
                family = next((name for name in ('Microsoft YaHei UI', 'Microsoft YaHei', '微软雅黑', 'SimSun', '宋体') if name in families), 'TkDefaultFont')
                status = tk.Label(window, text='本地词典已加载；仅显示最新稳定文本。关闭此窗口会结束本次游戏副本。', bg='#172131', fg='#b9d0ef', wraplength=890, font=(family, 10))
                status.pack(padx=12, pady=8)
                translated = tk.Label(window, text='等待捕获文本…', bg='#172131', fg='white', wraplength=890, font=(family, 18), justify='left')
                translated.pack(fill='both', expand=True, padx=12)
                original = tk.Label(window, text='', bg='#172131', fg='#a7b4c7', wraplength=890, justify='left', font=(family, 11))
                original.pack(fill='x', padx=12, pady=8)
                if args.screenshot:
                    tk.Label(window, text='字体自检：中文显示正常；字幕不应出现方框或历史回放。', font=(family, 11), bg='#172131', fg='#b9d0ef').pack()
                shown = [None]
                counters['fontFamily'] = family

                def screenshot():
                    if counters['screenshotSaved']:
                        return
                    from PIL import ImageGrab
                    window.update_idletasks()
                    x, y = window.winfo_rootx(), window.winfo_rooty()
                    ImageGrab.grab(bbox=(x, y, x + window.winfo_width(), y + window.winfo_height()), all_screens=True).save(run / 'subtitle-window.png')
                    counters['screenshotSaved'] = True

                if args.screenshot:
                    window.after(5000, screenshot)

                def update():
                    if stop.is_set() or kernel.WaitForSingleObject(handle, 0) != 258 or (args.smoke_seconds and time.monotonic() - started >= args.smoke_seconds):
                        window.destroy()
                        return
                    while True:
                        try:
                            event = ui.get_nowait()
                        except queue.Empty:
                            break
                        if 'error' in event:
                            status.config(text=event['error'])
                        elif messages.is_current(event['generation']) and shown[0] != (event['original'], event['translation']):
                            shown[0] = event['original'], event['translation']
                            status.config(text='本地词典命中' if event['matched'] else '词典未命中：保留原文（不联网）')
                            translated.config(text=event['translation'] or '（空译文）')
                            original.config(text=event['original'])
                            counters['uiUpdates'] += 1
                            with (run / 'ui-transitions.jsonl').open('a', encoding='utf-8') as stream:
                                stream.write(json.dumps({'seconds': time.monotonic() - started, 'generation': event['generation'], 'original': event['original'], 'translation': event['translation']}, ensure_ascii=False) + '\n')
                            if event['matched']:
                                counters['uiMatchedShown'] += 1
                    if counters['captureLimitReached']:
                        status.config(text='捕获日志达到 20 MiB 上限，字幕捕获已停止；游戏仍可继续。')
                    window.after(100, update)

                window.after(100, update)
                window.mainloop()
            agent_stats = {'installed': True, 'captureRecords': counters['captured'], 'adapter': 'native-x86-capture-only'}
    finally:
        stop.set()
        if handle:
            if kernel.WaitForSingleObject(handle, 0) == 258:
                if not kernel.TerminateProcess(handle, 0) and kernel.WaitForSingleObject(handle, 1000) != 0:
                    print('WARNING: owned game cleanup failed', file=sys.stderr)
            kernel.CloseHandle(handle)
        if game_process:
            game_process.wait(timeout=10)
        for thread in threads[1:]:
            thread.join(timeout=4)
        if worker:
            if worker.stdin:
                try:
                    worker.stdin.close()
                except OSError:
                    pass
            try:
                worker.wait(timeout=5)
            except subprocess.TimeoutExpired:
                worker.terminate()
                worker.wait(timeout=5)
        for thread in threads:
            thread.join(timeout=1)
        result = {'mode': 'experimental-capture-and-subtitles-not-in-place-translation', 'run': str(run),
                  'executableSha256': SUPPORTED_SHA256, 'agent': agent_stats, 'counts': counters,
                  'dictionarySha256': digest(dictionary), 'originalExecutableUnchanged': digest(executable) == SUPPORTED_SHA256,
                  'originalSourceFilesVerified': len(source_before), 'originalSourceUnchanged': snapshot(game) == source_before}
        (run / 'summary.json').write_text(json.dumps(result, indent=2), encoding='utf-8')
        passed = bool(agent_stats and counters['matched'] and not counters['workerErrors'] and not counters['decodeErrors'] and not counters['dropped']
                      and not counters['captureErrors'] and not counters['captureLimitReached']
                      and (not args.screenshot or counters['screenshotSaved'])
                      and result['originalSourceUnchanged'] and (args.headless or counters['uiMatchedShown']))
        if args.validation_report:
            summary = {key: value for key, value in result.items() if key != 'run'}
            summary.update({'status': 'passed' if passed else 'incomplete', 'smokeSeconds': args.smoke_seconds,
                            'windowOpened': window is not None,
                            'limitations': ['Exact executable digest only; no other Wolf versions verified',
                                            'External subtitle labels, not replacement of original game rendering',
                                            'Only local dictionary matches; no online/machine translation',
                                            'Menu/startup smoke test; full gameplay and save/load not verified']})
            args.validation_report.parent.mkdir(parents=True, exist_ok=True)
            args.validation_report.write_text(json.dumps(summary, indent=2), encoding='utf-8')
        print(json.dumps(result, indent=2), flush=True)
    if args.smoke_seconds and not passed:
        raise RuntimeError('Smoke run did not establish successful dictionary capture/display without errors')


if __name__ == '__main__':
    main()
