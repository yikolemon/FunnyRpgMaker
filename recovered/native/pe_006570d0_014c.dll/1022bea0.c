/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1022bea0 */

int * __thiscall FUN_1022bea0(int *param_1,int param_2)

{
  *param_1 = param_2;
  if (param_2 == 0) {
    FUN_1026a05e();
    return param_1;
  }
  if (param_2 < 8) {
    FUN_10234cb0(&DAT_1039cd30 + param_2 * 0x18);
  }
  return param_1;
}

