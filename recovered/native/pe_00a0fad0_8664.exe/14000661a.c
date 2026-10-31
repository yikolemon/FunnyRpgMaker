/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14000661a */

longlong FUN_14000661a(longlong param_1,undefined8 param_2)

{
  undefined1 local_58 [32];
  longlong local_38;
  longlong local_30;
  undefined8 local_28;
  longlong local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_28 = param_2;
  local_20 = param_1;
  FUN_140006874(local_58,param_2);
  FUN_1400068cc(local_20,local_58);
  FUN_1400017de(local_58);
  local_38 = local_20 + 0x40;
  FUN_1400069a2(local_38,local_58);
  local_30 = local_20 + 0x80;
  *(undefined8 *)(local_20 + 0x80) = 0;
  *(undefined8 *)(local_20 + 0x88) = 0;
  *(undefined8 *)(local_20 + 0x90) = 0;
  *(undefined8 *)(local_20 + 0x98) = 0xf;
  *(undefined4 *)(local_20 + 0xa0) = 0xffffffff;
  *(undefined2 *)(local_20 + 0xa4) = 1;
  FUN_1400017de(local_28);
  return local_20;
}

