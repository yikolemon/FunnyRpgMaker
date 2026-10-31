/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800d99cc */

void Unwind_1800d99cc(undefined8 param_1,longlong param_2)

{
  if ((*(byte *)(param_2 + 0x2c) & 1) != 0) {
    thunk_FUN_1802464a0(*(undefined8 *)(param_2 + 0x20),8);
  }
  return;
}

