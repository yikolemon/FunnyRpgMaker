/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180024a82 */

void Unwind_180024a82(undefined8 param_1,longlong param_2)

{
  if ((*(byte *)(param_2 + 0x2c) & 1) != 0) {
    thunk_FUN_1802464a0(*(undefined8 *)(param_2 + 0x30),0x158);
  }
  return;
}

