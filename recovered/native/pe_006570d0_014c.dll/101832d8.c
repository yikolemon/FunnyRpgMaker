/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101832d8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_101832d8(float *param_1,float param_2)

{
  float fVar1;
  float10 fVar2;
  
  fVar2 = (float10)FUN_1026d3b0((double)((float)((double)((ulonglong)(uint)param_1[2] |
                                                         (ulonglong)DAT_1028f6c0) - DAT_1028f6b0) /
                                        *param_1));
  fVar1 = (float)((int)((float)fVar2 - DAT_1028f6d0) & (int)fVar2 >> 0x1f | (int)fVar2);
  if ((uint)fVar1 < (uint)param_2) {
    fVar1 = param_2;
  }
  if ((uint)param_1[7] < (uint)fVar1) {
    FUN_10183352(fVar1);
  }
  return;
}

