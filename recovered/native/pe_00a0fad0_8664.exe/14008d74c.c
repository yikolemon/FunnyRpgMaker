/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14008d74c */

undefined8 * FUN_14008d74c(undefined8 *param_1,uint param_2)

{
  *param_1 = CommonEvents::vftable;
  FUN_14008d172(param_1 + 0xc);
  FUN_140086508(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400ddcd0(param_1,0x80);
  }
  return param_1;
}

