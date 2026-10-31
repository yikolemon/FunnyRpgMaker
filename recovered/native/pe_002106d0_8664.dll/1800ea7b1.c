/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800ea7b1 */

longlong FUN_1800ea7b1(longlong param_1,longlong param_2,longlong param_3)

{
  bool bVar1;
  
  while (bVar1 = param_2 != 0, param_2 = param_2 + -1, bVar1) {
    FUN_1800b021e(param_3,param_1);
    param_3 = param_3 + 0x78;
    param_1 = param_1 + 0x78;
  }
  return param_3;
}

