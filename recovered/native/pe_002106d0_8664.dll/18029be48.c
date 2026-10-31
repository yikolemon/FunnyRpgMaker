/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18029be48 */

UINT FUN_18029be48(short *param_1,longlong param_2)

{
  int iVar1;
  UINT UVar2;
  UINT local_res8 [2];
  
  local_res8[0] = 0;
  if (((param_1 == (short *)0x0) || (*param_1 == 0)) ||
     (iVar1 = FUN_1802a6b70(param_1,&DAT_18038a688), iVar1 == 0)) {
    iVar1 = GetLocaleInfoW(*(LCID *)(param_2 + 8),0x20001004,(LPWSTR)local_res8,2);
    if (iVar1 != 0) {
      if (local_res8[0] != 0) {
        return local_res8[0];
      }
      UVar2 = GetACP();
      return UVar2;
    }
  }
  else {
    iVar1 = FUN_1802a6b70(param_1,&DAT_18038a680);
    if (iVar1 != 0) {
      UVar2 = FUN_1802a2334(param_1);
      return UVar2;
    }
    iVar1 = GetLocaleInfoW(*(LCID *)(param_2 + 8),0x2000000b,(LPWSTR)local_res8,2);
    if (iVar1 != 0) {
      return local_res8[0];
    }
  }
  return 0;
}

