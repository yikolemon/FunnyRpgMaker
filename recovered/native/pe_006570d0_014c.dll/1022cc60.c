/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1022cc60 */

UINT * FUN_1022cc60(UINT *param_1)

{
  wchar_t *pwVar1;
  UINT UVar2;
  ushort *puVar3;
  wchar_t **ppwVar4;
  int iVar5;
  undefined4 *puVar6;
  
  UVar2 = ____lc_codepage_func();
  *param_1 = UVar2;
  UVar2 = FUN_1026d360(0x100,2);
  param_1[1] = UVar2;
  if (UVar2 == 0) {
    puVar3 = ___pctype_func();
    param_1[1] = (UINT)puVar3;
    param_1[2] = 0;
  }
  else {
    puVar3 = ___pctype_func();
    param_1[2] = 1;
    puVar6 = (undefined4 *)param_1[1];
    for (iVar5 = 0x80; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar6 = *(undefined4 *)puVar3;
      puVar3 = puVar3 + 2;
      puVar6 = puVar6 + 1;
    }
  }
  ppwVar4 = ____lc_locale_name_func();
  pwVar1 = ppwVar4[1];
  param_1[3] = (UINT)pwVar1;
  if (pwVar1 != (wchar_t *)0x0) {
    UVar2 = FUN_1026b130(pwVar1);
    param_1[3] = UVar2;
  }
  return param_1;
}

