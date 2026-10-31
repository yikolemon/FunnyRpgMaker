/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402b437d */

longlong FUN_1402b437d(longlong param_1,longlong param_2,longlong param_3)

{
  bool bVar1;
  
  while (bVar1 = param_2 != 0, param_2 = param_2 + -1, bVar1) {
    FUN_140214a5a(param_3,param_1);
    param_3 = param_3 + 0x20;
    param_1 = param_1 + 0x20;
  }
  return param_3;
}

