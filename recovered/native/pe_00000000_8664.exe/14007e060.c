/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14007e060 */

void Unwind_14007e060(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x30) = 0;
  FUN_14007e32c(*(undefined8 *)(param_2 + 0x20));
  *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(*(longlong *)(param_2 + 0x28) + 8);
  return;
}

