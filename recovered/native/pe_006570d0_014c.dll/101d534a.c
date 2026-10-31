/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101d534a */

float10 FUN_101d534a(int param_1)

{
  double dVar1;
  
  dVar1 = DAT_10303ac0;
  if (*(char *)(param_1 + 0x24) == '\0') {
    dVar1 = DAT_103084c8;
  }
  return (float10)dVar1;
}

