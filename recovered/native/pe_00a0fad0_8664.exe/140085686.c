/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140085686 */

void Unwind_140085686(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x50) != 0) {
    *(undefined8 *)(*(longlong *)(param_2 + 0x50) + 8) = *(undefined8 *)(param_2 + 0x78);
  }
  return;
}

