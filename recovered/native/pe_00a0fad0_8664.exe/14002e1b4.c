/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14002e1b4 */

undefined8 FUN_14002e1b4(undefined8 param_1,undefined8 param_2)

{
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_20 = param_2;
  FUN_1400193d2(local_48,param_2," is already added");
  FUN_140030ee8(param_1,local_48,0x66);
  local_28 = param_1;
  FUN_1400017de(local_20);
  return param_1;
}

