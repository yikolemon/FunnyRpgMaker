/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00484e40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00484e40(void)

{
  DWORD DVar1;
  LARGE_INTEGER local_18;
  _FILETIME local_10;
  uint local_8;
  
  if ((DAT_0050e8c0 != 0xbb40e64e) && ((DAT_0050e8c0 & 0xffff0000) != 0)) {
    _DAT_0050e900 = ~DAT_0050e8c0;
    return;
  }
  local_10.dwLowDateTime = 0;
  local_10.dwHighDateTime = 0;
  GetSystemTimeAsFileTime(&local_10);
  local_8 = local_10.dwHighDateTime ^ local_10.dwLowDateTime;
  DVar1 = GetCurrentThreadId();
  local_8 = local_8 ^ DVar1;
  DVar1 = GetCurrentProcessId();
  local_8 = local_8 ^ DVar1;
  QueryPerformanceCounter(&local_18);
  DAT_0050e8c0 = local_18.s.HighPart ^ local_18.s.LowPart ^ local_8 ^ (uint)&local_8;
  if (DAT_0050e8c0 == 0xbb40e64e) {
    DAT_0050e8c0 = 0xbb40e64f;
    _DAT_0050e900 = 0x44bf19b0;
    return;
  }
  if ((DAT_0050e8c0 & 0xffff0000) == 0) {
    DAT_0050e8c0 = DAT_0050e8c0 | (DAT_0050e8c0 | 0x4711) << 0x10;
  }
  _DAT_0050e900 = ~DAT_0050e8c0;
  return;
}

