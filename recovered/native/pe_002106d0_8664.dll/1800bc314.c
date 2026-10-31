/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800bc314 */

void Unwind_1800bc314(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x58) != 0) {
    *(undefined8 *)(*(longlong *)(param_2 + 0x58) + 8) = *(undefined8 *)(param_2 + 0x88);
  }
  return;
}

