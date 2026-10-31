/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14010ddc4 */

void Unwind_14010ddc4(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x38) = 0;
  FUN_1400abaf8(*(undefined8 *)(param_2 + 0x28));
  *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(*(longlong *)(param_2 + 0x30) + 0x18);
  return;
}

