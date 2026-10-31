/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140038d56 */

longlong FUN_140038d56(longlong param_1,longlong param_2,longlong param_3)

{
  bool bVar1;
  
  while (bVar1 = param_2 != 0, param_2 = param_2 + -1, bVar1) {
    FUN_140038ec3(param_3,param_1);
    param_3 = param_3 + 0x180;
    param_1 = param_1 + 0x180;
  }
  return param_3;
}

