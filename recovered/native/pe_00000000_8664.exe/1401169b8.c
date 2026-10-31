/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401169b8 */

void Unwind_1401169b8(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x30) = 0;
  FUN_1400abaf8(*(undefined8 *)(param_2 + 0x20));
  *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x68);
  return;
}

