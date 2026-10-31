/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180073f04 */

void Unwind_180073f04(undefined8 param_1,longlong param_2)

{
  if ((*(byte *)(param_2 + 0x2c) & 1) != 0) {
    thunk_FUN_1802464a0(*(undefined8 *)(param_2 + 0x20),0x48);
  }
  return;
}

