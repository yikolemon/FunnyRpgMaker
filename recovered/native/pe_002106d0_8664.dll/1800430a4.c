/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800430a4 */

longlong FUN_1800430a4(longlong param_1,longlong param_2,longlong param_3)

{
  bool bVar1;
  
  while (bVar1 = param_2 != 0, param_2 = param_2 + -1, bVar1) {
    FUN_180043211(param_3,param_1);
    param_3 = param_3 + 0x180;
    param_1 = param_1 + 0x180;
  }
  return param_3;
}

