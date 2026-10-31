/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14003da16 */

undefined8 FUN_14003da16(undefined8 param_1,undefined8 param_2)

{
  undefined1 local_68 [32];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_20 = param_2;
  FUN_140006874(local_68,param_2);
  FUN_14000169c(local_48,"FileError");
  FUN_14003e32c(param_1,local_48,local_68,0x67);
  local_28 = param_1;
  FUN_1400017de(local_20);
  return param_1;
}

