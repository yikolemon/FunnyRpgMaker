/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140119a8c */

uint FUN_140119a8c(int param_1,uint param_2,byte param_3)

{
  return (uint)param_3 | (param_2 & 0xff) << 8 | param_1 << 0x10 | 0xff000000;
}

