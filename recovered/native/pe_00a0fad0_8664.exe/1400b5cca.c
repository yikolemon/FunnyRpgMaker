/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400b5cca */

/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1400b5cca(longlong param_1,char param_2)

{
  DWORD DVar1;
  ulonglong uVar2;
  
  DVar1 = GetTickCount();
  if ((param_2 == '\0') && (DVar1 - *(int *)(param_1 + 8) < 0x10)) {
    return;
  }
  FUN_1400b7580();
  *(DWORD *)(param_1 + 8) = DVar1;
  param_1 = param_1 + 0xc;
  FUN_14011cf10(&DAT_1401d2d50,param_1);
  uVar2 = FUN_14011cf50(param_1);
  if (0x32 < uVar2) {
    FUN_14011d440(&DAT_1401d2d50,param_1,0x32);
    FUN_14011cf10(&DAT_1401d2db4,L"...");
  }
  wsprintfW((LPWSTR)&DAT_1401ced50,L" [%d/%d] %d%%%%  %s");
  DAT_1401ccd38 = FUN_14011cf50(&DAT_1401ced50);
  FUN_1400b765c(&DAT_1401ced50);
  return;
}

