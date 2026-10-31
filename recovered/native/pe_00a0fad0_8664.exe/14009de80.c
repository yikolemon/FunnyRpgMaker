/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14009de80 */

undefined1 * FUN_14009de80(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  FUN_14009db1a(param_1 + 8,*(longlong *)(param_2 + 0x10) - *(longlong *)(param_2 + 8) >> 2,
                param_2 + 8,param_2 + 0x10);
  return param_1;
}

