/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402bdace */

longlong FUN_1402bdace(longlong param_1,longlong param_2,longlong param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 200) {
    FUN_1402b8814(param_3,param_1);
    param_3 = param_3 + 200;
  }
  return param_3;
}

