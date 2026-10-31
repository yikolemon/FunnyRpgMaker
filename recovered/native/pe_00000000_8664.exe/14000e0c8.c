/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14000e0c8 */

longlong FUN_14000e0c8(longlong param_1,longlong param_2,longlong param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x10) {
    FUN_14000d704(param_3,param_1);
    param_3 = param_3 + 0x10;
  }
  return param_3;
}

