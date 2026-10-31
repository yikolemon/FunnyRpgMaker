/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101d4646 */

float10 FUN_101d4646(int param_1)

{
  double dVar1;
  
  dVar1 = DAT_10308410;
  if (*(char *)(param_1 + 0x24) == '\0') {
    dVar1 = DAT_10308418;
  }
  return (float10)dVar1;
}

