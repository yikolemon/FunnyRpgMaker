/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14001b94e */

longlong FUN_14001b94e(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (*param_1 == 0) {
    plVar1 = (longlong *)FUN_140189300(1);
  }
  else {
    plVar1 = *(longlong **)(*param_1 + 8);
    (**(code **)(*plVar1 + 8))(plVar1);
  }
  *(longlong **)(param_2 + 8) = plVar1;
  return param_2;
}

