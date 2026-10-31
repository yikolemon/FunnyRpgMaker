/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140188dc0 */

int * FUN_140188dc0(int *param_1,int param_2)

{
  *param_1 = param_2;
  if (param_2 == 0) {
    FUN_14019fba4();
    return param_1;
  }
  if (param_2 < 8) {
    EnterCriticalSection((LPCRITICAL_SECTION)(&DAT_140f2aa00 + (longlong)param_2 * 0x28));
  }
  return param_1;
}

