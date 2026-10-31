/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400cb6c4 */

longlong FUN_1400cb6c4(longlong param_1,longlong param_2,longlong param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 200) {
    FUN_1400cb94c(param_3,param_1);
    param_3 = param_3 + 200;
  }
  return param_3;
}

