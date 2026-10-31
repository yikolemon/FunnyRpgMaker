/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800448ea */

void FUN_1800448ea(longlong *param_1,longlong param_2,longlong *param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    FUN_1800161d6();
    lVar1 = *param_1;
    lVar2 = *param_4;
    lVar3 = *param_3;
    thunk_FUN_18000a68c(lVar3,lVar2,lVar1);
    param_1[1] = lVar1 + (lVar2 - lVar3);
  }
  return;
}

