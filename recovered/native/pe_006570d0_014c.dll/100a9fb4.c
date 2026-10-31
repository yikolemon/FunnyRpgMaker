/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100a9fb4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_100a9fb4(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  
  fVar1 = param_1[7];
  fVar4 = (float10)FUN_1026d3b0((double)((float)((double)((ulonglong)((int)param_1[2] + 1) |
                                                         (ulonglong)DAT_1028f6c0) - DAT_1028f6b0) /
                                        *param_1));
  fVar3 = (float)((int)((float)fVar4 - DAT_1028f6d0) & (int)fVar4 >> 0x1f | (int)fVar4);
  fVar2 = 1.12104e-44;
  if (8 < (uint)fVar3) {
    fVar2 = fVar3;
  }
  fVar3 = fVar1;
  if ((uint)fVar1 < (uint)fVar2) {
    fVar3 = (float)((int)fVar1 * 8);
    if ((uint)fVar3 < (uint)fVar2 || (int)fVar3 - (int)fVar2 == 0) {
      fVar3 = fVar2;
    }
    if (0x1ff < (uint)fVar1) {
      fVar3 = fVar2;
    }
  }
  FUN_100aa1d2(fVar3);
  return;
}

