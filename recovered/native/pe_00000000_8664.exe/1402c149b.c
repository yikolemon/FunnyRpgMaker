/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402c149b */

longlong FUN_1402c149b(longlong param_1,longlong param_2,longlong param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x78) {
    FUN_1402c16ee(param_3,param_1);
    param_3 = param_3 + 0x78;
  }
  return param_3;
}

