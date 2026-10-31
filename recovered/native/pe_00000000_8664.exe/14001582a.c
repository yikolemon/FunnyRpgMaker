/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14001582a */

longlong FUN_14001582a(longlong param_1,uint param_2)

{
  param_1 = param_1 + -0xb0;
  FUN_140012d70(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_14018e090(param_1,0x110);
  }
  return param_1;
}

