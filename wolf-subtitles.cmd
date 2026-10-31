@echo off
setlocal
cd /d "%~dp0"
set "WOLF_GAME=%~1"
if not defined WOLF_GAME set "WOLF_GAME=tests\testgame\JPN HENTAI RABBIT HOOD"
if not exist "%WOLF_GAME%\Game.exe" (
  echo Supply the supported game directory as the first argument.
  pause
  exit /b 1
)
powershell -NoProfile -ExecutionPolicy Bypass -File scripts\build-wolf-capture.ps1
if errorlevel 1 goto failed
python scripts\wolf-subtitles.py "%WOLF_GAME%"
if errorlevel 1 goto failed
exit /b 0
:failed
echo Experimental Wolf subtitle launcher failed. Read the error above.
pause
exit /b 1
