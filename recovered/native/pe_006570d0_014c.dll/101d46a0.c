/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101d46a0 */

float10 FUN_101d46a0(int param_1)

{
  double dVar1;
  
  dVar1 = DAT_10308420;
  if (*(char *)(param_1 + 0x24) == '\0') {
    dVar1 = DAT_10308428;
  }
  return (float10)dVar1;
}

