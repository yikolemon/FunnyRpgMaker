/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180068060 */

void FUN_180068060(longlong *param_1)

{
  if ((char)param_1[2] == '\x01') {
    FUN_1800603f0(param_1,param_1,*(undefined8 *)(*param_1 + 8));
    thunk_FUN_1802464a0(*param_1,0x30);
    return;
  }
  return;
}

