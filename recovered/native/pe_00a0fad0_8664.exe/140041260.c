/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140041260 */

longlong FUN_140041260(longlong param_1,longlong param_2,longlong param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x20) {
    FUN_14000892c(param_3,param_1);
    param_3 = param_3 + 0x20;
  }
  return param_3;
}

