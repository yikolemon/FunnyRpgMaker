/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801fc6b5 */

void FUN_1801fc6b5(undefined8 param_1,longlong param_2)

{
  FUN_1801c9b65(param_1,*(undefined8 *)(param_2 + 0x30));
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined4 *)(param_2 + 0x38) = 0;
  FUN_1801c9b65(param_1,*(undefined8 *)(param_2 + 0x20));
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined4 *)(param_2 + 0x28) = 0;
  FUN_1801c9b65(param_1,param_2);
  return;
}

