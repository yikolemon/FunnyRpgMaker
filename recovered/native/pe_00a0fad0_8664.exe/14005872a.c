/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14005872a */

void FUN_14005872a(longlong *param_1,longlong param_2,longlong *param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    FUN_1400587c0();
    lVar1 = *param_1;
    lVar2 = *param_4;
    lVar3 = *param_3;
    thunk_FUN_1400498e2(lVar3,lVar2,lVar1);
    param_1[1] = lVar1 + (lVar2 - lVar3);
  }
  return;
}

