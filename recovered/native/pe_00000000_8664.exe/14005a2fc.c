/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14005a2fc */

longlong FUN_14005a2fc(longlong param_1,uint param_2)

{
  param_1 = param_1 + -0x20;
  FUN_14005a374(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_14018e090(param_1,0x80);
  }
  return param_1;
}

