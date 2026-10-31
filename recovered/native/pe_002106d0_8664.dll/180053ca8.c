/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180053ca8 */

longlong FUN_180053ca8(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_180053f3a();
  FUN_180053fa8();
  **(undefined8 **)(param_1 + 8) = param_3;
  *(undefined8 *)(*(longlong *)(param_1 + 8) + 8) = param_3;
  *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x10) = param_3;
  *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x18) = 0;
  *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x19) = 0;
  return param_1;
}

