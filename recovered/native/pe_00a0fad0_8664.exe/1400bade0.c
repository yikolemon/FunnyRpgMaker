/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400bade0 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_1400bade0(LPCWSTR param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  HANDLE hFindFile;
  undefined1 auStack_12a8 [46];
  undefined2 local_127a;
  undefined1 local_1278 [4096];
  _WIN32_FIND_DATAW local_278;
  ulonglong local_28;
  
  local_28 = DAT_1401c9640 ^ (ulonglong)auStack_12a8;
  FUN_1400baaa8(param_1,local_1278,0);
  FUN_1400baf6e(local_1278,0x5c);
  lVar3 = FUN_140107fc0(local_1278,0x5c);
  *(undefined2 *)(lVar3 + 2) = 0;
  iVar1 = FUN_14011cf50(local_1278);
  local_127a = 0;
  hFindFile = FindFirstFileW(param_1,&local_278);
  if (hFindFile == (HANDLE)0xffffffffffffffff) {
    iVar1 = -1;
  }
  else {
    FindClose(hFindFile);
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    param_2[8] = 0;
    param_2[9] = 0;
    *(DWORD *)(param_2 + 6) = local_278.ftCreationTime.dwLowDateTime;
    *(DWORD *)((longlong)param_2 + 0x34) = local_278.ftCreationTime.dwHighDateTime;
    *(DWORD *)(param_2 + 7) = local_278.ftLastAccessTime.dwLowDateTime;
    *(DWORD *)((longlong)param_2 + 0x3c) = local_278.ftLastAccessTime.dwHighDateTime;
    *(FILETIME *)(param_2 + 8) = local_278.ftLastWriteTime;
    param_2[4] = (ulonglong)local_278.nFileSizeLow;
    *(DWORD *)(param_2 + 9) = local_278.dwFileAttributes;
    *(DWORD *)(param_2 + 5) = local_278.dwFileAttributes >> 4 & 1;
    iVar2 = FUN_14011cf50(local_278.cFileName);
    lVar3 = _malloc_base((longlong)(((ulonglong)(uint)(iVar1 + iVar2) << 0x20) + 0x300000000) >>
                         0x1f);
    *param_2 = lVar3;
    if (lVar3 != 0) {
      param_2[2] = lVar3 + (longlong)iVar2 * 2 + 2;
      param_2[3] = lVar3 + 4 + (longlong)iVar2 * 2;
      FUN_14011cf10(lVar3,local_278.cFileName);
      FUN_14011cf10(param_2[2],&local_127a);
      FUN_14011cf10(param_2[3],local_1278);
    }
    iVar1 = -(uint)(lVar3 == 0);
  }
  if (DAT_1401c9640 == (local_28 ^ (ulonglong)auStack_12a8)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_28 ^ (ulonglong)auStack_12a8);
}

