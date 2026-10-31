/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10129d4e */

void __fastcall FUN_10129d4e(int param_1,int param_2,float param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  float10 fVar7;
  undefined4 in_XMM0_Da;
  undefined4 in_XMM1_Da;
  undefined4 in_XMM2_Da;
  float fVar8;
  float local_74;
  float local_70;
  float local_6c;
  int local_68;
  uint local_64;
  int local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34 [7];
  float fStack_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_74;
  fStack_18 = param_3;
  if ((param_2 == 0) || (param_2 == param_1)) {
    *(undefined4 *)(param_1 + 0x34) = in_XMM0_Da;
    *(undefined4 *)(param_1 + 0x38) = in_XMM1_Da;
    *(ulonglong *)(param_1 + 0x3c) = CONCAT44(param_3,in_XMM2_Da);
  }
  iVar2 = *(int *)(param_1 + 0x1c);
  fVar8 = local_74;
  if (iVar2 == 0) goto LAB_1012a145;
  local_6c = DAT_1039d74c;
  iVar3 = *(int *)(param_1 + 0x20);
  local_34[3] = param_3;
  local_34[1] = param_3;
  if (param_2 == 0) {
    bVar6 = false;
    uVar5 = 0;
  }
  else {
    uVar5 = CONCAT31((int3)((uint)param_3 >> 8),1);
    bVar6 = true;
    iVar4 = param_2;
    if (param_2 != iVar2) {
      do {
        iVar4 = *(int *)(iVar4 + 0x18);
        bVar6 = iVar4 != 0;
        if (iVar4 == iVar2) break;
      } while (iVar4 != 0);
    }
    iVar4 = param_2;
    if (param_2 != iVar3) {
      do {
        iVar4 = *(int *)(iVar4 + 0x18);
        uVar5 = CONCAT31((int3)(uVar5 >> 8),iVar4 != 0);
        if (iVar4 == iVar3) break;
      } while (iVar4 != 0);
    }
  }
  if (((*(byte *)(iVar2 + 0xac) & 1) != 0 || bVar6) &&
     ((*(byte *)(iVar3 + 0xac) & 1) != 0 || (char)uVar5 != '\0')) {
    local_54 = *(float *)((int)DAT_1039d74c + 0xdec);
    iVar4 = *(int *)(param_1 + 0x4c);
    local_74 = local_34[iVar4 + 6] - local_54;
    local_70 = 0.0;
    local_64 = uVar5;
    local_58 = param_2;
    fVar7 = (float10)FUN_100fdbca();
    local_74 = (float)fVar7;
    local_70 = *(float *)((int)local_6c + 0xce8 + iVar4 * 4);
    local_70 = local_70 + local_70;
    local_6c = local_74;
    local_68 = iVar4;
    local_38 = local_74;
    fVar7 = (float10)FUN_100ea38a();
    param_2 = local_58;
    iVar4 = local_68;
    local_3c = (float)fVar7;
    bVar1 = *(byte *)(iVar3 + 0xac);
    if ((char)*(byte *)(iVar2 + 0xac) < '\0') {
      if ((char)bVar1 < '\0') {
        fVar8 = (float)(int)((local_34[local_68 + 2] / (local_34[local_68] + local_34[local_68 + 2])
                             ) * local_6c);
        *(float *)(iVar2 + 0x44 + local_68 * 4) = fVar8;
        local_34[local_68 + 2] = fVar8;
        *(float *)(iVar3 + 0x44 + local_68 * 4) = local_6c - fVar8;
        local_34[local_68] = local_6c - fVar8;
      }
      else {
        local_70 = *(float *)(iVar2 + 0x3c + local_68 * 4);
        local_74 = DAT_102b8a50 + local_6c;
        fVar7 = (float10)FUN_100ea38a();
        fVar8 = (float)fVar7;
        *(float *)(iVar2 + 0x44 + iVar4 * 4) = fVar8;
        local_34[iVar4 + 2] = fVar8;
        *(float *)(iVar3 + 0x44 + iVar4 * 4) = local_6c - fVar8;
        local_34[iVar4] = local_6c - fVar8;
        param_2 = local_58;
        local_50 = fVar8;
      }
    }
    else if ((char)bVar1 < '\0') {
      local_70 = *(float *)(iVar3 + 0x3c + local_68 * 4);
      local_74 = DAT_102b8a50 + local_6c;
      fVar7 = (float10)FUN_100ea38a();
      local_4c = (float)fVar7;
      *(float *)(iVar3 + 0x44 + iVar4 * 4) = local_4c;
      local_34[iVar4] = local_4c;
      fVar8 = local_6c - local_4c;
      *(float *)(iVar2 + 0x44 + iVar4 * 4) = fVar8;
      local_34[iVar4 + 2] = fVar8;
      param_2 = local_58;
    }
    else {
      local_74 = (float)(int)(local_3c * DAT_102b70e0);
      fVar8 = *(float *)(iVar2 + 0x44 + local_68 * 4);
      if (((bVar1 & 0x20) == 0) || ((fVar8 == 0.0 && (!NAN(fVar8))))) {
        local_70 = *(float *)(iVar3 + 0x44 + local_68 * 4);
        if (((*(byte *)(iVar2 + 0xac) & 0x20) == 0) || ((local_70 == 0.0 && (!NAN(local_70))))) {
          local_70 = (float)(int)((fVar8 / (local_70 + fVar8)) * local_6c + DAT_102b70e0);
          fVar7 = (float10)FUN_100fdbca();
          fVar8 = (float)fVar7;
          local_34[local_68 + 2] = fVar8;
          local_34[local_68] = local_6c - fVar8;
          iVar4 = local_68;
          local_48 = fVar8;
        }
        else {
          local_74 = local_6c - local_74;
          fVar7 = (float10)FUN_100ea38a();
          local_44 = (float)fVar7;
          local_34[local_68] = local_44;
          fVar8 = local_6c - local_44;
          local_34[local_68 + 2] = fVar8;
          iVar4 = local_68;
        }
      }
      else {
        local_74 = local_6c - local_74;
        local_70 = fVar8;
        fVar7 = (float10)FUN_100ea38a();
        fVar8 = (float)fVar7;
        local_34[local_68 + 2] = fVar8;
        local_34[local_68] = local_6c - fVar8;
        iVar4 = local_68;
        param_2 = local_58;
        local_40 = fVar8;
      }
    }
    local_34[iVar4 + 4] = local_54 + fVar8 + local_34[iVar4 + 4];
    uVar5 = local_64;
  }
  fVar8 = local_74;
  local_74 = local_34[1];
  if (param_2 == 0) {
    *(byte *)(iVar3 + 0xac) = *(byte *)(iVar3 + 0xac) & 0x7f;
    bVar1 = *(byte *)(iVar2 + 0xac);
    *(byte *)(iVar2 + 0xac) = bVar1 & 0x7f;
    uVar5 = (uint)*(byte *)(iVar3 + 0xac);
    if ((bVar1 & 1) != 0) goto LAB_1012a0d5;
  }
  else if (bVar6) {
LAB_1012a0d5:
    local_74 = local_34[3];
    FUN_10129d4e();
    fVar8 = local_74;
    local_74 = local_34[1];
  }
  local_34[1] = local_74;
  if ((uVar5 & 1) != 0) {
    FUN_10129d4e();
    fVar8 = local_74;
  }
LAB_1012a145:
  local_74 = fVar8;
  if (DAT_10388d00 != (local_14 ^ (uint)&local_74)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return;
}

