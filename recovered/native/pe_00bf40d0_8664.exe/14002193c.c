/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14002193c */

ulonglong FUN_14002193c(int param_1,int param_2)

{
  return ((longlong)param_2 * (longlong)param_1 >> 0x3f) + (longlong)param_2 * (longlong)param_1 +
         0x8000U >> 0x10;
}

