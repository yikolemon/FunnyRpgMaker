/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140070e70 */

longlong FUN_140070e70(longlong param_1,longlong param_2,longlong param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x10) {
    FUN_140070828(param_3,param_1);
    param_3 = param_3 + 0x10;
  }
  return param_3;
}

