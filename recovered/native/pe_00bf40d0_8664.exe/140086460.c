/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140086460 */

int * FUN_140086460(int *param_1,int param_2)

{
  *param_1 = param_2;
  if (param_2 == 0) {
    FUN_1400967b0();
    return param_1;
  }
  if (param_2 < 8) {
    EnterCriticalSection((LPCRITICAL_SECTION)(&DAT_14013c9d0 + (longlong)param_2 * 0x28));
  }
  return param_1;
}

