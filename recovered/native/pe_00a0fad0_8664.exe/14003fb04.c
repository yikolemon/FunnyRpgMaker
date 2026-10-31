/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14003fb04 */

longlong FUN_14003fb04(longlong param_1,uint param_2)

{
  param_1 = param_1 + -0xb0;
  FUN_14003e690(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400ddcd0(param_1,0x110);
  }
  return param_1;
}

