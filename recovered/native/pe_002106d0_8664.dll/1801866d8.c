/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801866d8 */

longlong FUN_1801866d8(longlong param_1,longlong param_2,longlong param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x28) {
    FUN_18018677c(param_3,param_1);
    param_3 = param_3 + 0x28;
  }
  return param_3;
}

