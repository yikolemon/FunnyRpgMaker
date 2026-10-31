/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1012ec2c */

void FUN_1012ec2c(int param_1,int param_2,float param_3,int param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float local_28 [4];
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  uint local_8;
  
  local_8 = DAT_10388d00 ^ (uint)local_28;
  iVar3 = *(int *)(param_1 + 0x3a8);
  local_18 = *(float *)(iVar3 + 0x50);
  fStack_14 = *(float *)(iVar3 + 0x54);
  fStack_10 = (float)*(undefined8 *)(iVar3 + 0x58) + *(float *)(iVar3 + 0x50);
  fStack_c = (float)((ulonglong)*(undefined8 *)(iVar3 + 0x58) >> 0x20) + *(float *)(iVar3 + 0x54);
  iVar3 = *(int *)(param_1 + 0x3c);
  local_28[0] = *(float *)(iVar3 + 8);
  local_28[1] = *(float *)(iVar3 + 0xc);
  local_28[2] = (float)*(undefined8 *)(iVar3 + 0x10) + *(float *)(iVar3 + 8);
  local_28[3] = (float)((ulonglong)*(undefined8 *)(iVar3 + 0x10) >> 0x20) + *(float *)(iVar3 + 0xc);
  fVar1 = local_28[param_4 + 4];
  if (((fVar1 == local_28[param_4]) && (fVar2 = *(float *)(param_2 + param_4 * 4), fVar1 < fVar2))
     && (fVar2 - param_3 <= fVar1)) {
    *(float *)(param_2 + param_4 * 4) = fVar1;
  }
  fVar1 = local_28[param_4 + 6];
  if (((fVar1 == local_28[param_4 + 2]) &&
      (fVar2 = *(float *)(param_2 + 8 + param_4 * 4), fVar2 < fVar1)) && (fVar1 <= param_3 + fVar2))
  {
    *(float *)(param_2 + 8 + param_4 * 4) = fVar1;
  }
  if (DAT_10388d00 != (local_8 ^ (uint)local_28)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return;
}

