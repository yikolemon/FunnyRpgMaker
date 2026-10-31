/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14008c630 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14008c630(void)

{
  DWORD DVar1;
  _FILETIME local_res8;
  LARGE_INTEGER local_res10 [3];
  _FILETIME local_18 [2];
  
  if (DAT_14012ea80 != 0x2b992ddfa232) {
    _DAT_14012eac0 = ~DAT_14012ea80;
    return;
  }
  local_res8.dwLowDateTime = 0;
  local_res8.dwHighDateTime = 0;
  GetSystemTimeAsFileTime(&local_res8);
  local_18[0] = local_res8;
  DVar1 = GetCurrentThreadId();
  local_18[0] = (_FILETIME)((ulonglong)local_18[0] ^ (ulonglong)DVar1);
  DVar1 = GetCurrentProcessId();
  local_18[0] = (_FILETIME)((ulonglong)local_18[0] ^ (ulonglong)DVar1);
  QueryPerformanceCounter(local_res10);
  DAT_14012ea80 =
       (local_res10[0].QuadPart << 0x20 ^ local_res10[0].QuadPart ^ (ulonglong)local_18[0] ^
       (ulonglong)local_18) & 0xffffffffffff;
  if (DAT_14012ea80 == 0x2b992ddfa232) {
    DAT_14012ea80 = 0x2b992ddfa233;
  }
  _DAT_14012eac0 = ~DAT_14012ea80;
  return;
}

