/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404aec50 */

void FUN_1404aec50(uint param_1)

{
  if (((param_1 & 0x7f800000) == 0x7f800000) && ((param_1 & 0x7fffff) == 0)) {
    FUN_1404ad8f0("not available",0x12,0xffc00000,1,8,0x21,param_1,0,1);
    return;
  }
  return;
}

