/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800bf250 */

longlong FUN_1800bf250(longlong param_1,longlong param_2,longlong param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x28) {
    FUN_1800bf2f4(param_3,param_1);
    param_3 = param_3 + 0x28;
  }
  return param_3;
}

