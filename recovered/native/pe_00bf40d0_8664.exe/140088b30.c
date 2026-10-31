/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140088b30 */

longlong FUN_140088b30(LPCWSTR param_1,longlong param_2,LPWORD param_3)

{
  GetStringTypeW(1,param_1,(int)(param_2 - (longlong)param_1 >> 1),param_3);
  return param_2;
}

