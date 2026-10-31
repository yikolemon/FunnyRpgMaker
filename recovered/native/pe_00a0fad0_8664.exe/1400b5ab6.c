/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400b5ab6 */

int FUN_1400b5ab6(LPCWSTR param_1,longlong param_2)

{
  WCHAR *pWVar1;
  int iVar2;
  BOOL BVar3;
  HANDLE pvVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  WCHAR local_6c8 [256];
  _WIN32_FIND_DATAW local_4c8;
  undefined1 local_278 [520];
  undefined1 local_70 [32];
  longlong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_50 = param_2;
  if (*param_1 != L'\0') {
    pvVar4 = FindFirstFileW(param_1,&local_4c8);
    if (pvVar4 == (HANDLE)0xffffffffffffffff) {
      return -1;
    }
    if (((byte)local_4c8.dwFileAttributes & 0x10) == 0) {
      return -1;
    }
    FindClose(pvVar4);
    if (*param_1 != L'\0') {
      FUN_14011cf10(local_278,param_1);
      lVar5 = FUN_14011cf50(local_278);
      if (local_4c8.cAlternateFileName[lVar5 + 0xd] != L'\\') {
        FUN_14011cea0(local_278,L"\\");
      }
      FUN_14011cf10(local_6c8,local_278);
      FUN_14011cea0(local_6c8,L"*");
      goto LAB_1400b5bac;
    }
  }
  FUN_14011cf10(local_278,&DAT_140174404);
  FUN_14011cf10(local_6c8,L"*");
LAB_1400b5bac:
  pvVar4 = FindFirstFileW(local_6c8,&local_4c8);
  if (pvVar4 == (HANDLE)0xffffffffffffffff) {
    iVar7 = 0;
  }
  else {
    iVar7 = 0;
    pWVar1 = local_4c8.cFileName;
    do {
      iVar2 = FUN_14011ced0(pWVar1,L".");
      if ((iVar2 != 0) && (iVar2 = FUN_14011ced0(pWVar1,L".."), iVar2 != 0)) {
        if (local_50 != 0) {
          FUN_14000f628(local_70,local_278);
          uVar6 = FUN_14011cf50(pWVar1);
          FUN_140008bae(local_70,pWVar1,uVar6);
          FUN_140043d28(local_50,local_70);
          FUN_140005242(local_70);
        }
        iVar7 = iVar7 + 1;
      }
      BVar3 = FindNextFileW(pvVar4,&local_4c8);
    } while (BVar3 != 0);
    FindClose(pvVar4);
  }
  return iVar7;
}

