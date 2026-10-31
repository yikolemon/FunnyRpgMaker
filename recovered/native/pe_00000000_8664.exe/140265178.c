/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140265178 */

longlong FUN_140265178(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_14026540a();
  FUN_140265478();
  **(undefined8 **)(param_1 + 8) = param_3;
  *(undefined8 *)(*(longlong *)(param_1 + 8) + 8) = param_3;
  *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x10) = param_3;
  *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x18) = 0;
  *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x19) = 0;
  return param_1;
}

