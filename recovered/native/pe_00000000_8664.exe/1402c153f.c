/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402c153f */

longlong FUN_1402c153f(longlong param_1,longlong param_2,longlong param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x78) {
    FUN_1402c1f91(param_3,param_1);
    param_3 = param_3 + 0x78;
  }
  return param_3;
}

