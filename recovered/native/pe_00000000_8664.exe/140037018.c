/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140037018 */

longlong FUN_140037018(longlong param_1,uint param_2)

{
  FUN_14000109c(param_1 + 0x18);
  if ((param_2 & 1) != 0) {
    thunk_FUN_14018e090(param_1,0x38);
  }
  return param_1;
}

