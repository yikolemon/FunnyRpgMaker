/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800a34f8 */

longlong FUN_1800a34f8(longlong param_1,longlong param_2)

{
  bool bVar1;
  
  while (bVar1 = param_2 != 0, param_2 = param_2 + -1, bVar1) {
    FUN_1800a358c(param_1);
    param_1 = param_1 + 0x58;
  }
  return param_1;
}

