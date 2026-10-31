/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180018c5c */

void FUN_180018c5c(longlong *param_1,ulonglong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  plVar1 = (longlong *)*param_1;
  uVar3 = ((ulonglong)param_1[2] >> 1) + param_1[2];
  if (uVar3 < param_2) {
    uVar3 = param_2;
  }
  lVar2 = FUN_180018ccc((longlong)param_1 + 0x11a,uVar3);
  FUN_1802a82f0(lVar2,plVar1,param_1[1]);
  *param_1 = lVar2;
  param_1[2] = uVar3;
  if (plVar1 != param_1 + 4) {
    thunk_FUN_180290e40(plVar1);
    return;
  }
  return;
}

