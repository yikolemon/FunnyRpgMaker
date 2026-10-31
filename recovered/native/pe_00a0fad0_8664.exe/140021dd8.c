/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140021dd8 */

undefined8
FUN_140021dd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_30 = param_3;
  local_28 = param_2;
  FUN_140006874(local_78,param_3);
  FUN_140006874(local_58,local_28);
  FUN_140021f1a(param_1,local_58,local_78,param_4);
  local_38 = param_1;
  FUN_1400017de(local_28);
  FUN_1400017de(local_30);
  return param_1;
}

