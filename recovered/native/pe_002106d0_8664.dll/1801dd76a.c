/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801dd76a */

longlong FUN_1801dd76a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined4 param_5,undefined1 param_6)

{
  FUN_1801dd8a4(param_1,param_2);
  FUN_1801dd8a4(param_1 + 0x1a8,param_3);
  *(undefined8 *)(param_1 + 0x350) = param_4;
  *(undefined4 *)(param_1 + 0x358) = param_5;
  *(undefined1 *)(param_1 + 0x35c) = param_6;
  FUN_18019f2e0(param_2);
  FUN_18019f2e0(param_3);
  return param_1;
}

