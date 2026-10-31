/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400855ea */

void Unwind_1400855ea(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x60) != 0) {
    *(undefined8 *)(*(longlong *)(param_2 + 0x60) + 8) = *(undefined8 *)(param_2 + 0x78);
  }
  return;
}

