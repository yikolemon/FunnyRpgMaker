import sys
from pathlib import Path
import threading
import unittest

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'scripts'))
from wolf_subtitle_state import LatestCaption, VisibleTextGate, decode_wolf_caption, plain_display_text


class CaptionDecodingTests(unittest.TestCase):
    def test_drawing_controls_are_removed_as_byte_spans_before_cp932_decode(self):
        raw = bytes([1, 6, 2, 14, 14, 19, 1]) + 'テスト'.encode('cp932')
        raw += bytes([1, 4, 18, 29, 51]) + b'300m'
        result = decode_wolf_caption(raw)
        self.assertEqual(result.text, 'テスト300m')
        self.assertEqual(result.format_blocks, 2)
        self.assertEqual(result.removed_controls, 0)

    def test_layout_parameter_ascii_is_not_leaked_into_visible_text(self):
        raw = bytes([1, 5, 25, 92, 23, 1]) + b'Visible text'
        self.assertEqual(decode_wolf_caption(raw).text, 'Visible text')

    def test_plain_japanese_and_line_breaks_are_preserved(self):
        result = decode_wolf_caption('こんにちは\r\n世界'.encode('cp932'))
        self.assertEqual(result.text, 'こんにちは\n世界')
        self.assertEqual(result.format_blocks, 0)

    def test_controls_never_reach_the_glyph_renderer(self):
        self.assertEqual(decode_wolf_caption(b'A\x02\x7fB').text, 'AB')
        self.assertEqual(plain_display_text('中文\x01\x06\x80\n正常'), '中文\n正常')

    def test_truncated_or_invalid_blocks_fail_instead_of_displaying_garbage(self):
        for raw in (b'\x01', b'\x01\x00', b'\x01\x08abc', b'\x81'):
            with self.subTest(raw=raw):
                with self.assertRaises((ValueError, UnicodeDecodeError)):
                    decode_wolf_caption(raw)


class SubtitleStateTests(unittest.TestCase):
    def test_stationary_text_never_replays_every_three_seconds(self):
        gate = VisibleTextGate()
        self.assertTrue(gate.observe('stationary HUD', 0))
        for i in range(1, 301):
            self.assertFalse(gate.observe('stationary HUD', i / 10))
        self.assertTrue(gate.observe('stationary HUD', 32))

    def test_multiple_continuously_visible_labels_do_not_replay_each_other(self):
        gate = VisibleTextGate()
        for frame in range(100):
            for text in ('menu A', 'menu B', 'dialogue'):
                self.assertEqual(gate.observe(text, frame / 30), frame == 0)

    def test_latest_only_state_has_no_history_queue(self):
        pending = LatestCaption()
        old = pending.publish('old text')
        pending.publish('intermediate text')
        newest = pending.publish('current text')
        self.assertEqual(pending.next_stable(0, threading.Event(), settle=0), (newest, 'current text'))
        self.assertFalse(pending.is_current(old))
        self.assertTrue(pending.is_current(newest))

    def test_identical_caption_does_not_create_a_new_generation(self):
        pending = LatestCaption()
        generation = pending.publish('same text')
        self.assertEqual(pending.publish('same text'), generation)

    def test_old_translation_result_is_rejected_after_new_input(self):
        pending = LatestCaption()
        translating = pending.publish('A')
        pending.publish('B')
        self.assertFalse(pending.is_current(translating))

    def test_stop_unblocks_a_waiting_consumer(self):
        pending = LatestCaption()
        stop = threading.Event()
        result = []
        thread = threading.Thread(target=lambda: result.append(pending.next_stable(0, stop)))
        thread.start()
        stop.set()
        thread.join(timeout=1)
        self.assertFalse(thread.is_alive())
        self.assertEqual(result, [None])

    def test_dedupe_memory_is_bounded_and_expired_entries_can_be_replaced(self):
        gate = VisibleTextGate(capacity=2)
        self.assertTrue(gate.observe('a', 0))
        self.assertTrue(gate.observe('b', 0))
        self.assertFalse(gate.observe('c', 0.1))
        self.assertLessEqual(len(gate.last_seen), 2)
        self.assertTrue(gate.observe('c', 2))


if __name__ == '__main__':
    unittest.main()
