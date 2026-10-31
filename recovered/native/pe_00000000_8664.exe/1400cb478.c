/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400cb478 */

void Unwind_1400cb478(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x38) = 0;
  FUN_14007e32c(*(undefined8 *)(param_2 + 0x28));
  *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(*(longlong *)(param_2 + 0x30) + 0x10);
  return;
}

