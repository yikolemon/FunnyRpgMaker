/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18004140c */

void Unwind_18004140c(undefined8 param_1,longlong param_2)

{
  if ((*(byte *)(param_2 + 0x2c) & 1) != 0) {
    thunk_FUN_1802464a0(*(undefined8 *)(param_2 + 0x30),0x38);
  }
  return;
}

