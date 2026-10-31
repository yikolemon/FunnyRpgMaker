/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800e9c28 */

longlong FUN_1800e9c28(longlong param_1,longlong param_2,longlong param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x50) {
    FUN_1800e9ccc(param_3,param_1);
    param_3 = param_3 + 0x10;
  }
  return param_3;
}

