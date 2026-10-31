/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400e21ee */

void Unwind_1400e21ee(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x30) = 0;
  FUN_14007e32c(*(undefined8 *)(param_2 + 0x20));
  *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x28);
  return;
}

