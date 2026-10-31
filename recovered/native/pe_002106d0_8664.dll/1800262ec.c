/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800262ec */

longlong FUN_1800262ec(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (*param_1 == 0) {
    plVar1 = (longlong *)FUN_18023d070(1);
  }
  else {
    plVar1 = *(longlong **)(*param_1 + 8);
    (**(code **)(*plVar1 + 8))(plVar1);
  }
  *(longlong **)(param_2 + 8) = plVar1;
  return param_2;
}

