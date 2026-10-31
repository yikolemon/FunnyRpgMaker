/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408deda0 */

void FUN_1408deda0(void)

{
  *(double *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) - 8) =
       ROUND(*(double *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) + 8));
  return;
}

