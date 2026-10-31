/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18007b826 */

void Unwind_18007b826(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x50) != 0) {
    *(undefined8 *)(*(longlong *)(param_2 + 0x50) + 8) = *(undefined8 *)(param_2 + 0x78);
  }
  return;
}

