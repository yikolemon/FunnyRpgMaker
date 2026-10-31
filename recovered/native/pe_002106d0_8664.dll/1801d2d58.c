/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801d2d58 */

uint FUN_1801d2d58(int param_1,uint param_2,byte param_3)

{
  return (uint)param_3 | (param_2 & 0xff) << 8 | param_1 << 0x10 | 0xff000000;
}

