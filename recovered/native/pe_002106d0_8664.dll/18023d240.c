/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18023d240 */

int * FUN_18023d240(int *param_1,int param_2)

{
  *param_1 = param_2;
  if (param_2 == 0) {
    FUN_18027f8d0();
    return param_1;
  }
  if (param_2 < 8) {
    EnterCriticalSection((LPCRITICAL_SECTION)(&DAT_180417f20 + (longlong)param_2 * 0x28));
  }
  return param_1;
}

