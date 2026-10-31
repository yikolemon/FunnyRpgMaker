/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140058d2e */

longlong FUN_140058d2e(longlong param_1,uint param_2)

{
  param_1 = param_1 + -0x98;
  FUN_14005613c(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_14018e090(param_1,0xf8);
  }
  return param_1;
}

