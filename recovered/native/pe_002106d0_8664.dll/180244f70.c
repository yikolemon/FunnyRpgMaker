/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180244f70 */

longlong FUN_180244f70(LPCWSTR param_1,longlong param_2,LPWORD param_3)

{
  GetStringTypeW(1,param_1,(int)(param_2 - (longlong)param_1 >> 1),param_3);
  return param_2;
}

