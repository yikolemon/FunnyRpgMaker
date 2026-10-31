/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800f7aa6 */

longlong FUN_1800f7aa6(longlong param_1,uint param_2)

{
  FUN_1800f6b14(param_1 + 0x40);
  FUN_180001ef2(param_1 + 0x20);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1802464a0(param_1,0x58);
  }
  return param_1;
}

