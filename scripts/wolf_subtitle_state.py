"""Owning boundary for legacy captured text and latest-only subtitle scheduling."""
from dataclasses import dataclass
import threading
import time
import unicodedata


@dataclass(frozen=True)
class Caption:
    text: str
    format_blocks: int
    removed_controls: int


def plain_display_text(text):
    """Do not pass engine/C0/C1 controls to a GUI glyph renderer."""
    return ''.join(char for char in text if char in '\r\n\t' or unicodedata.category(char) != 'Cc')


def decode_wolf_caption(raw):
    """Decode this profile's 01/length-prefixed drawing controls before CP932 text.

    Only produces an external plain-text view; it does not rewrite engine data or
    reproduce colors/positions. Truncated blocks fail instead of leaking parameters.
    """
    visible = bytearray()
    blocks = 0
    controls = 0
    offset = 0
    while offset < len(raw):
        byte = raw[offset]
        if byte == 1:
            if offset + 1 >= len(raw):
                raise ValueError('Truncated Wolf drawing-control header')
            length = raw[offset + 1]
            if not length or offset + length + 1 > len(raw):
                raise ValueError('Invalid/truncated Wolf drawing-control span')
            offset += length + 1
            blocks += 1
            continue
        if byte < 32 and byte not in (9, 10, 13) or byte == 127:
            controls += 1
        else:
            visible.append(byte)
        offset += 1
    decoded = visible.decode('cp932', errors='strict')
    text = plain_display_text(decoded).replace('\r\n', '\n').strip()
    return Caption(text, blocks, controls)


class LatestCaption:
    """One current value, never a history queue. Each replacement has a generation."""
    def __init__(self):
        self.condition = threading.Condition()
        self.generation = 0
        self.text = None
        self.changed_at = 0.0

    def publish(self, text):
        with self.condition:
            if text == self.text:
                return self.generation
            self.generation += 1
            self.text = text
            self.changed_at = time.monotonic()
            self.condition.notify_all()
            return self.generation

    def is_current(self, generation):
        with self.condition:
            return generation == self.generation

    def next_stable(self, after, stop, settle=0.16, maximum_wait=0.5):
        with self.condition:
            while self.generation <= after and not stop.is_set():
                self.condition.wait(0.1)
            if stop.is_set():
                return None
            deadline = time.monotonic() + maximum_wait
            while not stop.is_set():
                now = time.monotonic()
                delay = min(self.changed_at + settle, deadline) - now
                if delay <= 0:
                    return self.generation, self.text
                self.condition.wait(min(delay, 0.1))
            return None


class VisibleTextGate:
    """Ignore continuously re-observed text; allow re-entry after it disappeared."""
    def __init__(self, gap=0.75, capacity=2048):
        self.gap = gap
        self.capacity = capacity
        self.last_seen = {}

    def observe(self, text, now):
        previous = self.last_seen.get(text)
        if previous is None and len(self.last_seen) >= self.capacity:
            self.last_seen = {key: seen for key, seen in self.last_seen.items() if now - seen < self.gap}
            if len(self.last_seen) >= self.capacity:
                return False
        self.last_seen[text] = now
        return previous is None or now - previous >= self.gap
