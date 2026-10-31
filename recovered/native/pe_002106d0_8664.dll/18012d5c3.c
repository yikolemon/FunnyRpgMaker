/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18012d5c3 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_18012d5c3(float param_1,float param_2)

{
  byte bVar1;
  
  bVar1 = 0.0 < param_1;
  if ((float)((uint)param_1 & _DAT_1802ac550) <= (float)(_DAT_1802ac550 & (uint)param_2)) {
    bVar1 = 0.0 < param_2 | 2;
  }
  return bVar1;
}

