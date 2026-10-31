/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14009946a */

longlong FUN_14009946a(longlong param_1,longlong param_2)

{
  bool bVar1;
  
  while (bVar1 = param_2 != 0, param_2 = param_2 + -1, bVar1) {
    FUN_140099546(param_1);
    param_1 = param_1 + 0xde0;
  }
  return param_1;
}

