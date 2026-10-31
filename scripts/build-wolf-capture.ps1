$ErrorActionPreference = 'Stop'
$root = Split-Path $PSScriptRoot -Parent
$vswhere = Join-Path ${env:ProgramFiles(x86)} 'Microsoft Visual Studio/Installer/vswhere.exe'
$vs = & $vswhere -latest -products '*' -requires Microsoft.VisualStudio.Component.VC.Tools.x86.x64 -property installationPath
if (!$vs) { throw 'Install MSVC x86 C++ build tools first' }
$out = Join-Path $root 'build/wolf'
New-Item -ItemType Directory -Force $out | Out-Null
$minhook = Join-Path $root 'tools/minhook'
if (!(Test-Path $minhook)) {
    git clone https://github.com/TsudaKageyu/minhook.git $minhook
    if ($LASTEXITCODE -ne 0) { throw 'MinHook download failed' }
    git -C $minhook checkout --detach 8af6b4acae5a9388fd742b56fa79ece89d96f823
    if ($LASTEXITCODE -ne 0) { throw 'Pinned MinHook revision unavailable' }
}
$revision = git -C $minhook rev-parse HEAD
if ($revision -ne '8af6b4acae5a9388fd742b56fa79ece89d96f823' -or (git -C $minhook status --porcelain)) { throw 'MinHook source differs from the verified revision' }
$commands = @(
    '@echo off',
    "call `"$vs/Common7/Tools/VsDevCmd.bat`" -arch=x86 -host_arch=x64",
    'if errorlevel 1 exit /b 1',
    "cd /d `"$out`"",
    "cl /nologo /c /O2 /MT /TC /I`"$minhook/include`" `"$minhook/src/buffer.c`" `"$minhook/src/hook.c`" `"$minhook/src/trampoline.c`" `"$minhook/src/hde/hde32.c`"",
    'if errorlevel 1 exit /b 1',
    "cl /nologo /LD /O2 /MT /EHsc /std:c++17 /utf-8 /I`"$minhook/include`" `"$root/native/wolf/capture.cpp`" buffer.obj hook.obj trampoline.obj hde32.obj /Fe:wolf_capture.dll",
    'if errorlevel 1 exit /b 1',
    "cl /nologo /O2 /MT /EHsc /std:c++17 /utf-8 `"$root/native/wolf/launch.cpp`" user32.lib /Fe:wolf_launch.exe",
    'exit /b %errorlevel%'
)
$batch = Join-Path $out 'compile.cmd'
[IO.File]::WriteAllText($batch, ($commands -join "`r`n"), [Text.Encoding]::ASCII)
& $batch
if ($LASTEXITCODE -ne 0) { throw 'Native Wolf capture build failed' }
Copy-Item "$minhook/LICENSE.txt" "$out/MinHook-LICENSE.txt" -Force
