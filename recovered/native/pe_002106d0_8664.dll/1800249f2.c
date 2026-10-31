/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800249f2 */

longlong FUN_1800249f2(longlong param_1,uint param_2)

{
  if (*(longlong *)(param_1 + 0x20) != param_1 + 0x40) {
    thunk_FUN_180290e40();
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1802464a0(param_1,0x158);
  }
  return param_1;
}

