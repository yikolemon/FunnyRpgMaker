/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14013f62f */

void FUN_14013f62f(longlong param_1,uint *param_2)

{
  if (-1 < (int)*param_2) {
    *(uint *)(param_1 + 0x1d4) = *param_2 & 0xffff;
  }
  return;
}

