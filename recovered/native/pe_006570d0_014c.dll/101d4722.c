/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101d4722 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_101d4722(int param_1)

{
  double dVar1;
  uint uVar2;
  float10 fVar3;
  
  uVar2 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  dVar1 = DAT_10308410;
  if (*(char *)(param_1 + 0x24) == '\0') {
    fVar3 = (float10)FUN_101d47b2(*(undefined8 *)(param_1 + 0x28));
    dVar1 = (double)fVar3;
  }
  if (DAT_10388d00 != (uVar2 ^ (uint)&stack0xfffffffc)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return (float10)dVar1;
}

