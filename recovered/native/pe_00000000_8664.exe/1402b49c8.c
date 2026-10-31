/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402b49c8 */

longlong FUN_1402b49c8(longlong param_1,longlong param_2)

{
  bool bVar1;
  
  while (bVar1 = param_2 != 0, param_2 = param_2 + -1, bVar1) {
    FUN_1402b4a5c(param_1);
    param_1 = param_1 + 0x58;
  }
  return param_1;
}

