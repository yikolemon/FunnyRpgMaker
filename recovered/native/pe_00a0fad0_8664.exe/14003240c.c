/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14003240c */

longlong FUN_14003240c(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  
  FUN_140032522(param_1 + 0x128,param_2);
  plVar1 = (longlong *)param_2[7];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_2);
  }
  return param_1;
}

