/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14012449e */

longlong FUN_14012449e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined4 param_5,undefined1 param_6)

{
  FUN_1401245d8(param_1,param_2);
  FUN_1401245d8(param_1 + 0x1a8,param_3);
  *(undefined8 *)(param_1 + 0x350) = param_4;
  *(undefined4 *)(param_1 + 0x358) = param_5;
  *(undefined1 *)(param_1 + 0x35c) = param_6;
  FUN_14010c2d4(param_2);
  FUN_14010c2d4(param_3);
  return param_1;
}

