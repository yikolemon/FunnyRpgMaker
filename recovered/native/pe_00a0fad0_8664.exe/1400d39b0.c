/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400d39b0 */

int * FUN_1400d39b0(int *param_1,int param_2)

{
  *param_1 = param_2;
  if (param_2 == 0) {
    FUN_1401152e4();
    return param_1;
  }
  if (param_2 < 8) {
    EnterCriticalSection((LPCRITICAL_SECTION)(&DAT_1401cc2d0 + (longlong)param_2 * 0x28));
  }
  return param_1;
}

