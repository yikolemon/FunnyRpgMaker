/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800eee0a */

longlong * FUN_1800eee0a(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  
  if (param_1 != param_2) {
    plVar1 = (longlong *)param_1[7];
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1);
      param_1[7] = 0;
    }
    FUN_18004e014(param_1,param_2);
  }
  return param_1;
}

