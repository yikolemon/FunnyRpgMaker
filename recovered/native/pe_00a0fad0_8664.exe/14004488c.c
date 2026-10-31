/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14004488c */

undefined8 FUN_14004488c(undefined8 param_1)

{
  longlong local_60 [7];
  longlong *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  FUN_140044b6a(local_60);
  FUN_140009292(local_60,param_1);
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x20))(local_28,local_28 != local_60);
  }
  return param_1;
}

