/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800cb82e */

longlong FUN_1800cb82e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5)

{
  FUN_1800cb958();
  FUN_1800cb9c6(*(longlong *)(param_1 + 8) + 0x20,param_4,param_5);
  **(undefined8 **)(param_1 + 8) = param_3;
  *(undefined8 *)(*(longlong *)(param_1 + 8) + 8) = param_3;
  *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x10) = param_3;
  *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x18) = 0;
  *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x19) = 0;
  return param_1;
}

