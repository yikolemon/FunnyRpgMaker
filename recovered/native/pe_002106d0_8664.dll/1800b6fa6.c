/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800b6fa6 */

longlong FUN_1800b6fa6(longlong param_1,longlong param_2,longlong param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x30) {
    FUN_1800b704a(param_3,param_1);
    param_3 = param_3 + 0x30;
  }
  return param_3;
}

