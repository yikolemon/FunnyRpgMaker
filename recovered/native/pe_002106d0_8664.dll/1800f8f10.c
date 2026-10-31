/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800f8f10 */

longlong FUN_1800f8f10(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18006d52a();
  FUN_180003216(*(longlong *)(param_1 + 8) + 0x20,param_4);
  **(undefined8 **)(param_1 + 8) = param_3;
  *(undefined8 *)(*(longlong *)(param_1 + 8) + 8) = param_3;
  *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x10) = param_3;
  *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x18) = 0;
  *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x19) = 0;
  return param_1;
}

