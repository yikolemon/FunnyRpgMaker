/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1009235b */

int thunk_FUN_10233400(int param_1,int param_2,int param_3,int param_4,wchar_t **param_5)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_2 - param_1 >> 1;
  iVar4 = param_4 - param_3 >> 1;
  if (param_5 == (wchar_t **)0x0) {
    param_5 = ____lc_locale_name_func();
  }
  if (param_5[1] == (wchar_t *)0x0) {
    iVar1 = iVar4;
    if (iVar3 < iVar4) {
      iVar1 = iVar3;
    }
    iVar1 = FUN_102332e0(param_1,param_3,iVar1);
    if ((iVar1 == 0) && (iVar3 != iVar4)) {
      return (uint)(iVar4 <= iVar3) * 2 + -1;
    }
  }
  else {
    iVar1 = FUN_10257fe0(param_5[1],0x1000,param_1,iVar3,param_3,iVar4);
    if (iVar1 == 0) {
      puVar2 = (undefined4 *)FUN_10268ffd();
      *puVar2 = 0x16;
      return 0x7fffffff;
    }
    iVar1 = iVar1 + -2;
  }
  return iVar1;
}

