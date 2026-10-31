$ErrorActionPreference = 'Stop'
$root = Split-Path $PSScriptRoot -Parent
$jdk = Get-ChildItem "$root/tools" -Directory -Filter 'jdk-21*' | Select-Object -First 1
$ghidra = Get-Item "$root/tools/ghidra_12.1.4_PUBLIC"
if (!$jdk -or !$ghidra) { throw 'Run scripts/setup_tools.py first' }
$env:JAVA_HOME = $jdk.FullName
$env:PATH = "$env:JAVA_HOME/bin;$env:PATH"
$projects = "$root/work/ghidra"
New-Item -ItemType Directory -Force $projects | Out-Null
New-Item -ItemType Directory -Force "$root/recovered/native" | Out-Null
foreach ($image in Get-ChildItem "$root/work/artifacts" -File | Sort-Object Name) {
    & "$($ghidra.FullName)/support/analyzeHeadless.bat" $projects $image.BaseName -import $image.FullName -overwrite -analysisTimeoutPerFile 1800 -max-cpu 4 -scriptPath $PSScriptRoot -postScript ExportDecompiled.java "$root/recovered/native" -log "$projects/$($image.BaseName).log"
    if ($LASTEXITCODE -ne 0) { throw "Ghidra failed for $($image.Name)" }
}
