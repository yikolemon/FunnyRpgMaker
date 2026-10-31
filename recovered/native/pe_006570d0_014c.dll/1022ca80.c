/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1022ca80 */

uint FUN_1022ca80(int param_1,int param_2,int param_3,int param_4,UINT *param_5)

{
  wchar_t **ppwVar1;
  UINT UVar2;
  uint uVar3;
  wchar_t *pwVar4;
  uint uVar5;
  uint uVar6;
  
  uVar5 = param_4 - param_3;
  uVar6 = param_2 - param_1;
  if (param_5 == (UINT *)0x0) {
    ppwVar1 = ____lc_locale_name_func();
    pwVar4 = ppwVar1[1];
    UVar2 = ____lc_collate_cp_func();
  }
  else {
    pwVar4 = (wchar_t *)param_5[1];
    UVar2 = *param_5;
  }
  if ((pwVar4 == (wchar_t *)0x0) && (UVar2 == 0)) {
    if (uVar5 <= uVar6) {
      FUN_1025b2d0(param_1,param_3,uVar5);
    }
    return uVar5;
  }
  uVar3 = FUN_10235020(pwVar4,0x400,param_3,uVar5,0,0,UVar2,1);
  if (uVar3 != 0) {
    if ((int)uVar3 <= (int)uVar6) {
      FUN_10235020(pwVar4,0x400,param_3,uVar5,param_1,uVar6,UVar2,1);
    }
    return uVar3;
  }
  return 0xffffffff;
}

