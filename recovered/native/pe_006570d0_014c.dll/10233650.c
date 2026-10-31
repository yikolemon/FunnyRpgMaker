/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10233650 */

int FUN_10233650(LPCWSTR param_1,int param_2,LPWORD param_3)

{
  GetStringTypeW(1,param_1,param_2 - (int)param_1 >> 1,param_3);
  return param_2;
}

