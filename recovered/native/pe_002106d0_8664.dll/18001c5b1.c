/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18001c5b1 */

int thunk_FUN_18023dc10(void *param_1,int param_2,void *param_3,int param_4,UINT *param_5)

{
  UINT UVar1;
  int iVar2;
  wchar_t **ppwVar3;
  undefined4 *puVar4;
  wchar_t *pwVar5;
  
  param_4 = param_4 - (int)param_3;
  param_2 = param_2 - (int)param_1;
  if (param_5 == (UINT *)0x0) {
    ppwVar3 = ___lc_locale_name_func();
    pwVar5 = ppwVar3[1];
    UVar1 = ___lc_collate_cp_func();
  }
  else {
    pwVar5 = *(wchar_t **)(param_5 + 2);
    UVar1 = *param_5;
  }
  if (pwVar5 == (wchar_t *)0x0) {
    iVar2 = param_4;
    if (param_2 < param_4) {
      iVar2 = param_2;
    }
    iVar2 = memcmp(param_1,param_3,(longlong)iVar2);
    if ((iVar2 == 0) && (param_2 != param_4)) {
      iVar2 = 1;
      if (param_2 < param_4) {
        iVar2 = -1;
      }
      return iVar2;
    }
  }
  else {
    iVar2 = FUN_180246a50(pwVar5,0x1000,param_1,param_2,param_3,param_4,UVar1);
    if (iVar2 == 0) {
      puVar4 = (undefined4 *)FUN_18027e66c();
      *puVar4 = 0x16;
      return 0x7fffffff;
    }
    iVar2 = iVar2 + -2;
  }
  return iVar2;
}

