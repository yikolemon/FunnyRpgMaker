/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400af19c */

longlong FUN_1400af19c(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1400ac190();
  FUN_1400af2c2(*(longlong *)(param_1 + 8) + 0x20,param_4);
  **(undefined8 **)(param_1 + 8) = param_3;
  *(undefined8 *)(*(longlong *)(param_1 + 8) + 8) = param_3;
  *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x10) = param_3;
  *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x18) = 0;
  *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x19) = 0;
  return param_1;
}

