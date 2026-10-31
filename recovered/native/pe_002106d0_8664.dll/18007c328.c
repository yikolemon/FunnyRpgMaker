/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18007c328 */

void Unwind_18007c328(undefined8 param_1,longlong param_2)

{
  if ((*(byte *)(param_2 + 0x2c) & 1) != 0) {
    thunk_FUN_1802464a0(*(undefined8 *)(param_2 + 0x20),0x78);
  }
  return;
}

