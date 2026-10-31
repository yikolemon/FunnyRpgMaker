/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10149d70 */

void FUN_10149d70(float *param_1,uint param_2)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  int local_38;
  float local_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  uint local_24;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  uint local_14;
  
  iVar2 = DAT_1039d74c;
  local_14 = DAT_10388d00 ^ (uint)&local_38;
  local_38 = *(int *)(DAT_1039d74c + 0x14cc);
  *(undefined1 *)(DAT_1039d74c + 0x23c0) = 0;
  fVar1 = *(float *)(iVar2 + 0xe8);
  fVar8 = param_1[1];
  if ((param_1[1] <= fVar1) && (fVar8 = param_1[3], fVar1 <= param_1[3])) {
    fVar8 = fVar1;
  }
  fVar1 = *(float *)(iVar2 + 0xe4);
  fVar9 = *param_1;
  if ((*param_1 <= fVar1) && (fVar9 = param_1[2], fVar1 <= param_1[2])) {
    fVar9 = fVar1;
  }
  *(ulonglong *)(iVar2 + 0x23ac) =
       CONCAT44(fVar8 - (float)((ulonglong)*(undefined8 *)(local_38 + 0x154) >> 0x20),
                fVar9 - (float)*(undefined8 *)(local_38 + 0x154));
  uVar4 = -(uint)(*param_1 <= *(float *)(iVar2 + 0x2404));
  uVar5 = -(uint)(param_1[1] <= *(float *)(iVar2 + 0x2408));
  uVar6 = -(uint)(*(float *)(iVar2 + 0x240c) < param_1[2]);
  uVar7 = -(uint)(*(float *)(iVar2 + 0x2410) < param_1[3]);
  local_24 = ~uVar4 & (uint)*param_1 | (uint)*(float *)(iVar2 + 0x2404) & uVar4;
  uStack_20 = ~uVar5 & (uint)param_1[1] | (uint)*(float *)(iVar2 + 0x2408) & uVar5;
  uStack_1c = ~uVar6 & (uint)param_1[2] | (uint)*(float *)(iVar2 + 0x240c) & uVar6;
  uStack_18 = ~uVar7 & (uint)param_1[3] | (uint)*(float *)(iVar2 + 0x2410) & uVar7;
  FUN_1010cb94(local_38);
  uVar3 = FUN_100fcb39(0x1d,0x3e99999a);
  FUN_1018b85a(&local_24,&uStack_1c,uVar3,0,0);
  uVar3 = FUN_100fcb39(0x3b,0x3f800000);
  FUN_1018b762(&local_24,&uStack_1c,uVar3,0,0x3f800000,0);
  if ((param_2 & 0x900) == 0x800) {
    fStack_28 = *(float *)(iVar2 + 0x1228);
    local_34 = *param_1 + fStack_28;
    fStack_30 = param_1[1] + fStack_28;
    fStack_2c = param_1[2] - fStack_28;
    fStack_28 = param_1[3] - fStack_28;
    if ((((*(float *)(iVar2 + 0xe4) < local_34) || (*(float *)(iVar2 + 0xe8) < fStack_30)) ||
        (fStack_2c <= *(float *)(iVar2 + 0xe4))) || (fStack_28 <= *(float *)(iVar2 + 0xe8))) {
      FUN_10149f33(&local_34);
    }
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_38)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

