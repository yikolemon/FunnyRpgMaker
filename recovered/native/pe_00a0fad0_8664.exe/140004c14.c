/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140004c14 */

undefined8 FUN_140004c14(undefined8 param_1,undefined8 param_2)

{
  undefined1 local_80 [64];
  undefined1 local_40 [32];
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_20 = param_2;
  FUN_140006874(local_40,param_2);
  FUN_140032492(local_80,local_40);
  FUN_14003240c(param_1,local_80);
  FUN_1400017de(local_40);
  FUN_1400017de(local_20);
  return param_1;
}

