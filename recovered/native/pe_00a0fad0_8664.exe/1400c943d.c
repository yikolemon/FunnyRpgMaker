/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400c943d */

longlong FUN_1400c943d(longlong param_1,longlong param_2,longlong param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x80) {
    FUN_1400c9136(param_3,param_1);
    param_3 = param_3 + 0x80;
  }
  return param_3;
}

