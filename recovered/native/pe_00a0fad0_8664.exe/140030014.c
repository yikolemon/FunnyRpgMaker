/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140030014 */

bool FUN_140030014(byte param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if (((param_1 != 0x3a) && (param_1 != 0x3d)) && (param_1 != 0x7b)) {
    bVar1 = param_1 == 9 || 0x20 < param_1;
  }
  return bVar1;
}

