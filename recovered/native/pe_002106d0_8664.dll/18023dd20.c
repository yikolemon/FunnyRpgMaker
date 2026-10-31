/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18023dd20 */

ulonglong FUN_18023dd20(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                       UINT *param_5)

{
  UINT UVar1;
  int iVar2;
  wchar_t **ppwVar3;
  ulonglong uVar4;
  wchar_t *pwVar5;
  int iVar6;
  
  uVar4 = param_4 - param_3;
  if (param_5 == (UINT *)0x0) {
    ppwVar3 = ___lc_locale_name_func();
    pwVar5 = ppwVar3[1];
    UVar1 = ___lc_collate_cp_func();
  }
  else {
    pwVar5 = *(wchar_t **)(param_5 + 2);
    UVar1 = *param_5;
  }
  if ((pwVar5 == (wchar_t *)0x0) && (UVar1 == 0)) {
    if (uVar4 <= (ulonglong)(param_2 - param_1)) {
      FUN_1802a82f0(param_1,param_3,uVar4);
    }
    return uVar4;
  }
  iVar2 = FUN_180246dd0(pwVar5,0x400,param_3,uVar4 & 0xffffffff,0,0,UVar1,1);
  if (iVar2 != 0) {
    iVar6 = (int)(param_2 - param_1);
    if (iVar2 <= iVar6) {
      FUN_180246dd0(pwVar5,0x400,param_3,uVar4 & 0xffffffff,param_1,iVar6,UVar1,1);
    }
    return (longlong)iVar2;
  }
  return 0xffffffffffffffff;
}

