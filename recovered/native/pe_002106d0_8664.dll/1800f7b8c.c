/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800f7b8c */

void Unwind_1800f7b8c(undefined8 param_1,longlong param_2)

{
  if ((*(byte *)(param_2 + 0x2c) & 1) != 0) {
    thunk_FUN_1802464a0(*(undefined8 *)(param_2 + 0x30),0x58);
  }
  return;
}

