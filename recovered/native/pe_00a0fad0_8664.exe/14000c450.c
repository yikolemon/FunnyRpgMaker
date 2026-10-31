/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14000c450 */

undefined8 FUN_14000c450(undefined8 param_1,uint param_2)

{
  FUN_14000a610(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400ddcd0(param_1,0x78);
  }
  return param_1;
}

