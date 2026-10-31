/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140045188 */

longlong FUN_140045188(longlong param_1,longlong param_2,longlong param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x20) {
    FUN_140003aa0(param_3,param_1);
    param_3 = param_3 + 0x20;
  }
  return param_3;
}

