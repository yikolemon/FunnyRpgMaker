/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400736d8 */

void Unwind_1400736d8(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x58) != 0) {
    *(undefined8 *)(*(longlong *)(param_2 + 0x58) + 8) = *(undefined8 *)(param_2 + 0x88);
  }
  return;
}

