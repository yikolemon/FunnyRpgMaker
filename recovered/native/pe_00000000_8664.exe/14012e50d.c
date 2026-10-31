/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14012e50d */

ulonglong FUN_14012e50d(int param_1,int param_2)

{
  return ((longlong)param_2 * (longlong)param_1 >> 0x3f) + (longlong)param_2 * (longlong)param_1 +
         0x8000U >> 0x10;
}

