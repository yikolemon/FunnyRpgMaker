/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402bb33e */

longlong FUN_1402bb33e(longlong param_1,longlong param_2,longlong param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x20) {
    FUN_1402adb2c(param_3,param_1);
    param_3 = param_3 + 0x20;
  }
  return param_3;
}

