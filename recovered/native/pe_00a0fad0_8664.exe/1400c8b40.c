/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400c8b40 */

longlong FUN_1400c8b40(longlong param_1,longlong param_2,longlong param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x20) {
    FUN_14009de80(param_3,param_1);
    param_3 = param_3 + 0x20;
  }
  return param_3;
}

