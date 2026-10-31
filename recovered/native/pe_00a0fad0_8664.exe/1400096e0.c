/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400096e0 */

undefined8 FUN_1400096e0(undefined8 param_1)

{
  longlong local_60 [7];
  longlong *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  FUN_140009768(local_60);
  FUN_140009292(local_60,param_1);
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x20))(local_28,local_28 != local_60);
  }
  return param_1;
}

