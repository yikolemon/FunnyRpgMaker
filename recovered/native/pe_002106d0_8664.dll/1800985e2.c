/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800985e2 */

longlong FUN_1800985e2(longlong param_1,longlong param_2)

{
  bool bVar1;
  
  while (bVar1 = param_2 != 0, param_2 = param_2 + -1, bVar1) {
    FUN_1800986be(param_1);
    param_1 = param_1 + 0xde0;
  }
  return param_1;
}

