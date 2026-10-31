/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14006b4f6 */

longlong FUN_14006b4f6(longlong param_1,longlong param_2,longlong param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x30) {
    FUN_14006b5de(param_3,param_1);
    param_3 = param_3 + 0x30;
  }
  return param_3;
}

