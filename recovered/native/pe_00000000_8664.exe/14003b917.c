/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14003b917 */

void Unwind_14003b917(undefined8 param_1,longlong param_2)

{
  *(byte *)(param_2 + 0x235) = *(byte *)(param_2 + 0x239) & 1;
  *(byte *)(param_2 + 0x234) = *(byte *)(param_2 + 0x238) & 1;
  *(undefined1 *)(param_2 + 0x233) = *(undefined1 *)(param_2 + 0x236);
  *(byte *)(param_2 + 0x232) = *(byte *)(param_2 + 0x237) & 1;
  return;
}

