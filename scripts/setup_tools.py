"""Install isolated official Ghidra/JDK archives without modifying system Java."""
import hashlib
import json
from pathlib import Path
import urllib.request
import zipfile

ROOT = Path(__file__).resolve().parents[1]
TOOLS = ROOT / 'tools'
TOOLS.mkdir(exist_ok=True)


def fetch(url):
    request = urllib.request.Request(url, headers={'User-Agent': 'FunnyRpgMaker-analysis'})
    return urllib.request.urlopen(request, timeout=120)


def install(url, digest=None):
    path = TOOLS / url.rsplit('/', 1)[1]
    if not path.exists():
        print('Downloading', url, flush=True)
        temporary = path.with_suffix('.download')
        with fetch(url) as response, temporary.open('wb') as output:
            while block := response.read(1024 * 1024):
                output.write(block)
        temporary.replace(path)
    actual = hashlib.file_digest(path.open('rb'), 'sha256').hexdigest()
    if digest and actual.lower() != digest.lower():
        raise RuntimeError(f'Checksum mismatch: {path}')
    print(path.name, actual, flush=True)
    with zipfile.ZipFile(path) as archive:
        archive.extractall(TOOLS)
    return actual


ghidra_sha = install('https://github.com/NationalSecurityAgency/ghidra/releases/download/Ghidra_12.1.4_build/ghidra_12.1.4_PUBLIC_20260921.zip', 'ddac49f903da9d5bac833e5cc79395098b9c33cfd3279be5f31bd00387d2d4db')
url = 'https://github.com/adoptium/temurin21-binaries/releases/download/jdk-21.0.13%2B9/OpenJDK21U-jdk_x64_windows_hotspot_21.0.13_9.zip'
with fetch(url + '.sha256.txt') as response:
    digest = response.read().decode().split()[0]
jdk_sha = install(url, digest)
print('Tools ready', flush=True)
