/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800b006f */

longlong FUN_1800b006f(longlong param_1,longlong param_2,longlong param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x78) {
    FUN_1800b0ac1(param_3,param_1);
    param_3 = param_3 + 0x78;
  }
  return param_3;
}

