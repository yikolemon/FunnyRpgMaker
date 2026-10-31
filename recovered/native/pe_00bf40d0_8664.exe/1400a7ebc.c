/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400a7ebc */

uint FUN_1400a7ebc(WCHAR *param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  uint local_res8 [2];
  
  local_res8[0] = 0;
  if (((param_1 == (WCHAR *)0x0) || (*param_1 == L'\0')) ||
     (iVar1 = FUN_14009cef0((ushort *)param_1,(ushort *)&DAT_14011f488), iVar1 == 0)) {
    uVar2 = 0x20001004;
  }
  else {
    iVar1 = FUN_140096a70(param_1,L"utf8");
    if (iVar1 == 0) {
      return 0xfde9;
    }
    iVar1 = FUN_140096a70(param_1,L"utf-8");
    if (iVar1 == 0) {
      return 0xfde9;
    }
    puVar3 = &DAT_14011f480;
    iVar1 = FUN_14009cef0((ushort *)param_1,(ushort *)&DAT_14011f480);
    if (iVar1 != 0) {
      uVar2 = FUN_1400aef44((longlong)param_1,puVar3,param_3,param_4);
      return uVar2;
    }
    uVar2 = 0x2000000b;
  }
  iVar1 = FUN_1400a1e0c((ushort *)(param_2 + 600),uVar2,(LPWSTR)local_res8,2);
  if (iVar1 == 0) {
    return 0;
  }
  if ((int)local_res8[0] < 3) {
    return 0xfde9;
  }
  return local_res8[0];
}

