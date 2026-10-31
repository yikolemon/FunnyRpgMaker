/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14003d577 */

void FUN_14003d577(longlong param_1,uint *param_2)

{
  if (-1 < (int)*param_2) {
    *(uint *)(param_1 + 0x1d4) = *param_2 & 0xffff;
  }
  return;
}

