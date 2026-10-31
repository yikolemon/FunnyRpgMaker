/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400a64f3 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_1400a64f3(float param_1,float param_2)

{
  byte bVar1;
  
  bVar1 = 0.0 < param_1;
  if ((float)((uint)param_1 & _DAT_1401ced40) <= (float)(_DAT_1401ced40 & (uint)param_2)) {
    bVar1 = 0.0 < param_2 | 2;
  }
  return bVar1;
}

