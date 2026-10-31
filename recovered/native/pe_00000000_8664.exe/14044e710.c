/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14044e710 */

int * FUN_14044e710(int *param_1,int param_2)

{
  *param_1 = param_2;
  if (param_2 == 0) {
    FUN_140490da0();
    return param_1;
  }
  if (param_2 < 8) {
    FUN_140457ec0(&DAT_1406293f0 + (longlong)param_2 * 0x28);
  }
  return param_1;
}

