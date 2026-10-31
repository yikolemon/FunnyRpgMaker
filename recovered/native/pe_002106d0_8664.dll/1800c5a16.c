/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800c5a16 */

void FUN_1800c5a16(longlong *param_1)

{
  if (((char)param_1[2] == '\x01') && (*param_1 != 0)) {
    thunk_FUN_1802464a0(*param_1);
    return;
  }
  return;
}

