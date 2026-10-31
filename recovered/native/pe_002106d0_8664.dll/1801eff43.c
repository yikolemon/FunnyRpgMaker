/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801eff43 */

void FUN_1801eff43(longlong param_1,uint *param_2)

{
  if (-1 < (int)*param_2) {
    *(uint *)(param_1 + 0x1d4) = *param_2 & 0xffff;
  }
  return;
}

