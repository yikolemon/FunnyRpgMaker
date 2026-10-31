/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14018d700 */

longlong FUN_14018d700(LPCWSTR param_1,longlong param_2,LPWORD param_3)

{
  GetStringTypeW(1,param_1,(int)(param_2 - (longlong)param_1 >> 1),param_3);
  return param_2;
}

