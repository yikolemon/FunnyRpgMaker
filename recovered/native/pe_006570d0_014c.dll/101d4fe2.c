/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101d4fe2 */

float10 FUN_101d4fe2(int param_1)

{
  double dVar1;
  
  dVar1 = DAT_103084c8;
  if (*(char *)(param_1 + 0x24) == '\0') {
    dVar1 = DAT_10303ac0;
  }
  return (float10)dVar1;
}

