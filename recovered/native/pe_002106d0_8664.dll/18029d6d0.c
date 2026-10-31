/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18029d6d0 */

void FUN_18029d6d0(uint param_1)

{
  if (((param_1 & 0x7f800000) == 0x7f800000) && ((param_1 & 0x7fffff) == 0)) {
    FUN_18029c420(&DAT_1803874e8,0x1e,0xffc00000,1,8,0x21,param_1,0,1);
    return;
  }
  return;
}

