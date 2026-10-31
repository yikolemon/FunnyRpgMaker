/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101d5a24 */

float10 FUN_101d5a24(int param_1)

{
  double dVar1;
  
  dVar1 = DAT_10303ab0;
  if (*(char *)(param_1 + 0x24) == '\0') {
    dVar1 = DAT_103037f0;
  }
  return (float10)dVar1;
}

