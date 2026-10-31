/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180082878 */

void FUN_180082878(longlong *param_1)

{
  longlong *plVar1;
  
  FUN_180082b8a(param_1 + 9);
  plVar1 = (longlong *)param_1[7];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1);
    param_1[7] = 0;
  }
  return;
}

