/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400ddb80 */

longlong FUN_1400ddb80(LPCWSTR param_1,longlong param_2,LPWORD param_3)

{
  GetStringTypeW(1,param_1,(int)(param_2 - (longlong)param_1 >> 1),param_3);
  return param_2;
}

