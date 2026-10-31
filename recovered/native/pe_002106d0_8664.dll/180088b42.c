/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180088b42 */

longlong FUN_180088b42(undefined8 param_1,undefined8 param_2)

{
  longlong local_40 [2];
  undefined1 local_30 [16];
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  FUN_180081664(local_30,0);
  FUN_180088bbc(param_1,local_40,param_2,local_30);
  FUN_18007ff6e(local_30);
  return local_40[0] + 0x20;
}

