/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c71d7 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_101c71d7(undefined8 param_1)

{
  int iVar1;
  float10 fVar2;
  
  fVar2 = (float10)FUN_1026fab0(CONCAT44(_UNK_1028b424 & (uint)((ulonglong)param_1 >> 0x20),
                                         _DAT_1028b420 & (uint)param_1),0xae147ae1,0x3fdae147);
  iVar1 = FUN_101c9054(param_1);
  return (float10)(((double)iVar1 * DAT_10303820 * (double)fVar2) / ((double)fVar2 + DAT_10303828));
}

