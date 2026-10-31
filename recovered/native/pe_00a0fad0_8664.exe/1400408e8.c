/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400408e8 */

undefined8 FUN_1400408e8(undefined8 param_1,undefined8 param_2)

{
  undefined1 local_40 [32];
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_20 = param_2;
  FUN_140006fbc(local_40,"INI was not able to parse ",param_2);
  FUN_140040f36(param_1,local_40);
  FUN_1400017de(local_20);
  return param_1;
}

