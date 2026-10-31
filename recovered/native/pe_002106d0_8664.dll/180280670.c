/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180280670 */

void FUN_180280670(FILETIME param_1)

{
  BOOL BVar1;
  undefined1 auStack_78 [32];
  uint local_58;
  uint local_50;
  undefined4 local_48;
  FILETIME local_38;
  _SYSTEMTIME local_30;
  _SYSTEMTIME local_20;
  ulonglong local_10;
  
  local_10 = DAT_180402640 ^ (ulonglong)auStack_78;
  local_38 = param_1;
  if ((param_1.dwLowDateTime != 0) || (param_1.dwHighDateTime != 0)) {
    local_20.wYear = 0;
    local_20.wMonth = 0;
    local_20.wDayOfWeek = 0;
    local_20.wDay = 0;
    local_20.wHour = 0;
    local_20.wMinute = 0;
    local_20.wSecond = 0;
    local_20.wMilliseconds = 0;
    local_30.wYear = 0;
    local_30.wMonth = 0;
    local_30.wDayOfWeek = 0;
    local_30.wDay = 0;
    local_30.wHour = 0;
    local_30.wMinute = 0;
    local_30.wSecond = 0;
    local_30.wMilliseconds = 0;
    BVar1 = FileTimeToSystemTime(&local_38,&local_20);
    if ((BVar1 != 0) &&
       (BVar1 = SystemTimeToTzSpecificLocalTime((TIME_ZONE_INFORMATION *)0x0,&local_20,&local_30),
       BVar1 != 0)) {
      local_48 = 0xffffffff;
      local_50 = (uint)local_30.wSecond;
      local_58 = (uint)local_30.wMinute;
      thunk_FUN_180298cb0(local_30._0_8_ & 0xffff,local_30.wMonth,local_30.wDay,
                          local_30._8_8_ & 0xffff);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_10 ^ (ulonglong)auStack_78);
}

