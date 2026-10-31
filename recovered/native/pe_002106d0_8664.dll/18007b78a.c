/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18007b78a */

void Unwind_18007b78a(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x60) != 0) {
    *(undefined8 *)(*(longlong *)(param_2 + 0x60) + 8) = *(undefined8 *)(param_2 + 0x78);
  }
  return;
}

