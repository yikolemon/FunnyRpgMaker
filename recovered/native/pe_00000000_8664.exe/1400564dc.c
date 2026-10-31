/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400564dc */

undefined8 * FUN_1400564dc(undefined8 *param_1,HWND param_2)

{
  HMONITOR hMonitor;
  undefined1 auStack_68 [40];
  tagMONITORINFO local_40;
  ulonglong local_18;
  
  local_18 = DAT_140f17b40 ^ (ulonglong)auStack_68;
  hMonitor = MonitorFromWindow(param_2,2);
  local_40.rcWork.left = 0;
  local_40.rcWork.top = 0;
  local_40.rcWork.right = 0;
  local_40.rcWork.bottom = 0;
  local_40.rcMonitor.left = 0;
  local_40.rcMonitor.top = 0;
  local_40.rcMonitor.right = 0;
  local_40.rcMonitor.bottom = 0;
  local_40.dwFlags = 0;
  local_40.cbSize = 0x28;
  GetMonitorInfoW(hMonitor,&local_40);
  *param_1 = CONCAT44(local_40.rcMonitor.bottom - local_40.rcMonitor.top,
                      local_40.rcMonitor.right - local_40.rcMonitor.left);
  if (DAT_140f17b40 == (local_18 ^ (ulonglong)auStack_68)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_18 ^ (ulonglong)auStack_68);
}

