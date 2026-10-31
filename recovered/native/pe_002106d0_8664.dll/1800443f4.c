/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800443f4 */

void Unwind_1800443f4(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x30) != 0) {
    FUN_180044556(*(longlong *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x28),
                  *(undefined8 *)(param_2 + 0x38));
  }
  return;
}

