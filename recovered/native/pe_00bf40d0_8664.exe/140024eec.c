/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140024eec */

uint FUN_140024eec(int param_1,uint param_2,byte param_3)

{
  return (uint)param_3 | (param_2 & 0xff) << 8 | param_1 << 0x10 | 0xff000000;
}

