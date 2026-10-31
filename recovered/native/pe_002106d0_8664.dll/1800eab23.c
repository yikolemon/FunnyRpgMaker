/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800eab23 */

longlong FUN_1800eab23(longlong param_1,longlong param_2,longlong param_3)

{
  bool bVar1;
  
  while (bVar1 = param_2 != 0, param_2 = param_2 + -1, bVar1) {
    FUN_1800b04fc(param_3,param_1);
    param_3 = param_3 + 0x50;
    param_1 = param_1 + 0x50;
  }
  return param_3;
}

