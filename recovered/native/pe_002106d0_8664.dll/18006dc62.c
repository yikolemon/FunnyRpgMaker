/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18006dc62 */

longlong FUN_18006dc62(longlong param_1,longlong param_2,longlong param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x20) {
    FUN_18000358a(param_3,param_1);
    param_3 = param_3 + 0x20;
  }
  return param_3;
}

