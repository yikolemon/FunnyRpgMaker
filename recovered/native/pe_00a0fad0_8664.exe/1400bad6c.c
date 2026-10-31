/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400bad6c */

uint FUN_1400bad6c(LPCWSTR param_1)

{
  uint uVar1;
  HANDLE hFindFile;
  undefined1 auStack_278 [32];
  _WIN32_FIND_DATAW local_258;
  ulonglong local_8;
  
  local_8 = DAT_1401c9640 ^ (ulonglong)auStack_278;
  hFindFile = FindFirstFileW(param_1,&local_258);
  if (hFindFile == (HANDLE)0xffffffffffffffff) {
    uVar1 = 0xffffffff;
  }
  else {
    FindClose(hFindFile);
    uVar1 = local_258.dwFileAttributes >> 4 & 1;
  }
  if (DAT_1401c9640 == (local_8 ^ (ulonglong)auStack_278)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_8 ^ (ulonglong)auStack_278);
}

