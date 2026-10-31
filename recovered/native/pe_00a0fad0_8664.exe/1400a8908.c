/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400a8908 */

longlong FUN_1400a8908(longlong param_1,longlong param_2)

{
  bool bVar1;
  
  while (bVar1 = param_2 != 0, param_2 = param_2 + -1, bVar1) {
    FUN_1400a899c(param_1);
    param_1 = param_1 + 0x58;
  }
  return param_1;
}

