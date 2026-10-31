/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026ae96 */

void FUN_1026ae96(DWORD param_1,DWORD param_2)

{
  BOOL BVar1;
  undefined4 local_2c;
  _SYSTEMTIME local_28;
  _SYSTEMTIME local_18;
  uint local_8;
  
  local_8 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  if ((((param_1 != 0) || (param_2 != 0)) &&
      (BVar1 = FileTimeToSystemTime((FILETIME *)&param_1,&local_28), BVar1 != 0)) &&
     (BVar1 = SystemTimeToTzSpecificLocalTime((TIME_ZONE_INFORMATION *)0x0,&local_28,&local_18),
     BVar1 != 0)) {
    local_2c = 0xffffffff;
    loctotime<>(&local_18,&local_18.wMonth,&local_18.wDay,&local_18.wHour,&local_18.wMinute,
                &local_18.wSecond,&local_2c);
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

