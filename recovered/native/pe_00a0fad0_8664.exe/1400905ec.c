/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400905ec */

longlong FUN_1400905ec(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = 0x7fffffffffffffff;
  if (param_2 < 0x7ffffffffffb6d) {
    lVar1 = param_2 * 0x100 + 300000;
  }
  return lVar1;
}

