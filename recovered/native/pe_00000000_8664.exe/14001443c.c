/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14001443c */

longlong FUN_14001443c(longlong param_1,uint param_2)

{
  param_1 = param_1 + -0x18;
  FUN_1400144b4(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_14018e090(param_1,0x78);
  }
  return param_1;
}

