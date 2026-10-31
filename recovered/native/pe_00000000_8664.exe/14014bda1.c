/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14014bda1 */

void FUN_14014bda1(undefined8 param_1,longlong param_2)

{
  FUN_140128b39(param_1,*(undefined8 *)(param_2 + 0x30));
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined4 *)(param_2 + 0x38) = 0;
  FUN_140128b39(param_1,*(undefined8 *)(param_2 + 0x20));
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined4 *)(param_2 + 0x28) = 0;
  FUN_140128b39(param_1,param_2);
  return;
}

