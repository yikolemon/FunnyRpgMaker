/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140042794 */

longlong FUN_140042794(longlong param_1,uint param_2)

{
  param_1 = param_1 + -0xa8;
  FUN_1400423ae(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_14018e090(param_1,0x108);
  }
  return param_1;
}

