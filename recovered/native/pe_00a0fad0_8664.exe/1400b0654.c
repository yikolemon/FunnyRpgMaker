/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400b0654 */

/* WARNING: Type propagation algorithm not settling */

int FUN_1400b0654(LPCWSTR param_1,longlong param_2)

{
  WCHAR *pWVar1;
  int iVar2;
  BOOL BVar3;
  HANDLE pvVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_6b8 [32];
  WCHAR local_698 [255];
  short sStack_49a;
  undefined1 local_498 [512];
  _WIN32_FIND_DATAW local_298;
  ulonglong local_48;
  
  local_48 = DAT_1401c9640 ^ (ulonglong)auStack_6b8;
  if (*param_1 == L'\0') {
LAB_1400b0723:
    FUN_14011cf10(local_498,&DAT_140174404);
    FUN_14011cf10(local_698,L"*");
  }
  else {
    pvVar4 = FindFirstFileW(param_1,&local_298);
    iVar6 = -1;
    if ((pvVar4 == (HANDLE)0xffffffffffffffff) || (((byte)local_298.dwFileAttributes & 0x10) == 0))
    goto LAB_1400b07f3;
    FindClose(pvVar4);
    if (*param_1 == L'\0') goto LAB_1400b0723;
    FUN_14011cf10(local_498,param_1);
    lVar5 = FUN_14011cf50(local_498);
    if ((&sStack_49a)[lVar5] != 0x5c) {
      FUN_14011cea0(local_498,L"\\");
    }
    FUN_14011cf10(local_698,local_498);
    FUN_14011cea0(local_698,L"*");
  }
  pvVar4 = FindFirstFileW(local_698,&local_298);
  if (pvVar4 == (HANDLE)0xffffffffffffffff) {
    iVar6 = 0;
  }
  else {
    iVar6 = 0;
    pWVar1 = local_298.cFileName;
    do {
      iVar2 = FUN_14011ced0(pWVar1,L".");
      if (iVar2 != 0) {
        iVar2 = FUN_14011ced0(pWVar1,L"..");
        if (iVar2 != 0) {
          if (param_2 == 0) {
            param_2 = 0;
          }
          else {
            FUN_14011cf10(param_2,local_498);
            FUN_14011cea0(param_2,pWVar1);
            param_2 = param_2 + 0x200;
          }
          iVar6 = iVar6 + 1;
        }
      }
      BVar3 = FindNextFileW(pvVar4,&local_298);
    } while (BVar3 != 0);
    FindClose(pvVar4);
  }
LAB_1400b07f3:
  if (DAT_1401c9640 == (local_48 ^ (ulonglong)auStack_6b8)) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_48 ^ (ulonglong)auStack_6b8);
}

