/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14000fa6e */

longlong FUN_14000fa6e(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_14000fcfe();
  FUN_14000fd6c();
  **(undefined8 **)(param_1 + 8) = param_3;
  *(undefined8 *)(*(longlong *)(param_1 + 8) + 8) = param_3;
  *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x10) = param_3;
  *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x18) = 0;
  *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x19) = 0;
  return param_1;
}

