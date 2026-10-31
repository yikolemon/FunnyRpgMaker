/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180081ee0 */

longlong FUN_180081ee0(longlong param_1,uint param_2)

{
  param_1 = param_1 + -0xb0;
  FUN_1800818a2(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1802464a0(param_1,0x110);
  }
  return param_1;
}

