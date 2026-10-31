/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14000f27a */

longlong FUN_14000f27a(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_14000f558();
  FUN_14000f5c6();
  **(undefined8 **)(param_1 + 8) = param_3;
  *(undefined8 *)(*(longlong *)(param_1 + 8) + 8) = param_3;
  *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x10) = param_3;
  *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x18) = 0;
  *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x19) = 0;
  return param_1;
}

