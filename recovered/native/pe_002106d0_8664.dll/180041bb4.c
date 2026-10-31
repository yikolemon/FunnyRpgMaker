/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180041bb4 */

void Unwind_180041bb4(undefined8 param_1,longlong param_2)

{
  if ((*(byte *)(param_2 + 0x24) & 1) != 0) {
    thunk_FUN_1802464a0(*(undefined8 *)(param_2 + 0x28),0x40);
  }
  return;
}

