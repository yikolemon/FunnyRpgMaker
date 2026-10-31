/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18009c65c */

undefined1 * FUN_18009c65c(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  FUN_18009c334(param_1 + 8,*(longlong *)(param_2 + 0x10) - *(longlong *)(param_2 + 8) >> 2,
                param_2 + 8,param_2 + 0x10);
  return param_1;
}

