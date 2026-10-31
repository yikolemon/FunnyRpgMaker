/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14007441c */

longlong FUN_14007441c(longlong param_1,undefined8 param_2,undefined2 *param_3,undefined8 *param_4,
                      undefined8 *param_5,undefined8 *param_6)

{
  undefined1 local_38 [8];
  longlong local_30;
  longlong local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_28 = param_1;
  FUN_140006874(param_1);
  *(undefined2 *)(local_28 + 0x20) = *param_3;
  *(undefined8 *)(local_28 + 0x28) = *param_4;
  *(undefined8 *)(local_28 + 0x30) = *param_5;
  local_30 = local_28 + 0x38;
  *(undefined8 *)(local_28 + 0x38) = 0;
  *(undefined8 *)(local_28 + 0x40) = 0;
  *(undefined8 *)(local_28 + 0x48) = 0;
  FUN_140078d87(local_38,*param_6,param_6[1],local_30);
  FUN_140016e5c(param_6);
  return local_28;
}

