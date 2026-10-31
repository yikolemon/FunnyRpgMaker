/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400cb77a */

longlong FUN_1400cb77a(longlong param_1,longlong param_2,longlong param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 200) {
    FUN_1400c5d04(param_3,param_1);
    param_3 = param_3 + 200;
  }
  return param_3;
}

