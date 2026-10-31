/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10190228 */

int __thiscall FUN_10190228(int *param_1,float param_2,float param_3)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  iVar1 = *param_1;
  fVar3 = (float)(int)(param_2 + DAT_102b70e0);
  fVar4 = (float)(~-(uint)(param_3 < 0.0) & (uint)param_3 | param_1[3] & -(uint)(param_3 < 0.0));
  if (iVar1 != 0) {
    if ((*(float *)(iVar1 + 0x10) == fVar3) && (!NAN(*(float *)(iVar1 + 0x10)) && !NAN(fVar3))) {
      if ((*(float *)(iVar1 + 0x14) == fVar4) && (!NAN(*(float *)(iVar1 + 0x14)) && !NAN(fVar4))) {
        return iVar1;
      }
    }
  }
  iVar1 = *(int *)(param_1[1] + 0x290);
  iVar2 = FUN_101930d5(param_1[1],param_1,fVar3,fVar4);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    *(undefined4 *)(iVar2 + 0x40) = *(undefined4 *)(iVar1 + 0x94);
    *param_1 = iVar2;
  }
  return iVar2;
}

