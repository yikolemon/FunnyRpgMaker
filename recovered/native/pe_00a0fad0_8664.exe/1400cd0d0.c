/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400cd0d0 */

longlong FUN_1400cd0d0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  FUN_1400cd1ce();
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x1c) = *param_4;
  **(undefined8 **)(param_1 + 8) = param_3;
  *(undefined8 *)(*(longlong *)(param_1 + 8) + 8) = param_3;
  *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x10) = param_3;
  *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x18) = 0;
  *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x19) = 0;
  return param_1;
}

