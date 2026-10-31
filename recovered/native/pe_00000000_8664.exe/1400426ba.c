/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400426ba */

longlong FUN_1400426ba(longlong param_1,uint param_2)

{
  param_1 = param_1 + -0x10;
  FUN_140042732(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_14018e090(param_1,0x70);
  }
  return param_1;
}

