/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400a888c */

UINT FUN_1400a888c(ushort *param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  UINT UVar3;
  undefined *puVar4;
  UINT local_res8 [2];
  
  local_res8[0] = 0;
  if (((param_1 == (ushort *)0x0) || (*param_1 == 0)) ||
     (iVar1 = FUN_14009cef0(param_1,(ushort *)&DAT_14011f488), iVar1 == 0)) {
    iVar1 = GetLocaleInfoW(*(LCID *)(param_2 + 8),0x20001004,(LPWSTR)local_res8,2);
    if (iVar1 != 0) {
      if (local_res8[0] != 0) {
        return local_res8[0];
      }
      UVar3 = GetACP();
      return UVar3;
    }
  }
  else {
    puVar4 = &DAT_14011f480;
    iVar1 = FUN_14009cef0(param_1,(ushort *)&DAT_14011f480);
    if (iVar1 != 0) {
      uVar2 = FUN_1400aef44((longlong)param_1,puVar4,param_3,param_4);
      return uVar2;
    }
    iVar1 = GetLocaleInfoW(*(LCID *)(param_2 + 8),0x2000000b,(LPWSTR)local_res8,2);
    if (iVar1 != 0) {
      return local_res8[0];
    }
  }
  return 0;
}

