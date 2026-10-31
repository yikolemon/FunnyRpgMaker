/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402c0f63 */

longlong FUN_1402c0f63(longlong param_1,longlong param_2,longlong param_3)

{
  bool bVar1;
  
  while (bVar1 = param_2 != 0, param_2 = param_2 + -1, bVar1) {
    FUN_1402146e6(param_3,param_1);
    param_3 = param_3 + 0x20;
    param_1 = param_1 + 0x20;
  }
  return param_3;
}

