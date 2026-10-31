/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14006c912 */

longlong FUN_14006c912(undefined8 param_1,undefined8 param_2)

{
  longlong local_40 [2];
  undefined1 local_30 [16];
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  FUN_140057552(local_30,0);
  FUN_14006c98c(param_1,local_40,param_2,local_30);
  FUN_1400578a6(local_30);
  return local_40[0] + 0x20;
}

