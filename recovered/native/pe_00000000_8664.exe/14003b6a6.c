/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14003b6a6 */

void Unwind_14003b6a6(undefined8 param_1,longlong param_2)

{
  *(undefined1 *)(param_2 + 0x242) = *(undefined1 *)(param_2 + 0x24b);
  *(byte *)(param_2 + 0x241) = *(byte *)(param_2 + 0x246) & 1;
  *(byte *)(param_2 + 0x240) = *(byte *)(param_2 + 0x245) & 1;
  *(undefined1 *)(param_2 + 0x23f) = *(undefined1 *)(param_2 + 0x243);
  *(byte *)(param_2 + 0x23e) = *(byte *)(param_2 + 0x244) & 1;
  return;
}

