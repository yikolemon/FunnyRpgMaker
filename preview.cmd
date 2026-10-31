@echo off
setlocal
cd /d "%~dp0"
where node >nul 2>&1
if errorlevel 1 (
  echo Node.js 22 or newer is required.
  pause
  exit /b 1
)
if not exist "node_modules\playwright-core\package.json" (
  call npm ci
  if errorlevel 1 goto failed
)
python scripts\prepare_mv_fixture.py
if errorlevel 1 goto failed
call npm run preview
if errorlevel 1 goto failed
exit /b 0
:failed
echo Preview failed. Read the error above. Chrome, Python and Git may be required.
pause
exit /b 1
