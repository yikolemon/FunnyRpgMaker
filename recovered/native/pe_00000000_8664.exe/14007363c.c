/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14007363c */

void Unwind_14007363c(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x68) != 0) {
    *(undefined8 *)(*(longlong *)(param_2 + 0x68) + 8) = *(undefined8 *)(param_2 + 0x88);
  }
  return;
}

