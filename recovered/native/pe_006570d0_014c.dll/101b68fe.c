/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101b68fe */

void FUN_101b68fe(void)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  undefined1 uVar4;
  byte bVar5;
  uint uVar6;
  char *pcVar7;
  undefined4 uVar8;
  undefined4 extraout_ECX;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  float10 fVar12;
  int local_54;
  uint local_50;
  uint local_4c;
  float local_48;
  int local_44;
  uint local_40;
  float10 local_3c;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;
  float local_20;
  undefined8 local_1c;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_54;
  local_1c._0_4_ = 0.0;
  local_1c._4_4_ = 0.0;
  cVar3 = FUN_1015f834("split",3,0,&local_1c,0);
  if (cVar3 != '\0') {
    FUN_10164e8b(&DAT_10356101,8,0,0);
    FUN_10164e8b(&DAT_10356101,0x10,0,0);
    FUN_10164e8b(&DAT_10356101,8,0,0);
    FUN_10165364(0,0);
    local_44 = local_54 + 0x18;
    uVar9 = CONCAT31((int3)((uint)extraout_ECX >> 8),1);
    local_48 = 0.0;
    local_50 = 0xffffffff;
    uVar6 = 0;
    do {
      bVar5 = (byte)uVar9;
      local_4c = uVar6;
      FUN_10165606((~bVar5 & 1) * '\x02');
      iVar10 = local_54;
      pcVar7 = "Basket";
      if (bVar5 != 0) {
        pcVar7 = "Available";
      }
      FUN_1012d08c("%s (%d)",pcVar7,*(undefined4 *)(local_54 + uVar6 * 0xc));
      fVar12 = (float10)FUN_101155d9();
      local_28 = (float)fVar12;
      local_1c = (ulonglong)(uint)((float)*(int *)(iVar10 + uVar6 * 0xc) * local_28) << 0x20;
      FUN_10111df6(&local_1c);
      local_40 = uVar9;
      if (bVar5 == 0) {
        local_1c._0_4_ = -1.1754944e-38;
        local_1c._4_4_ = local_48;
        cVar3 = FUN_1010c081(&DAT_1033e8fa,&local_1c,0x80,0);
        if (cVar3 == '\0') {
          FUN_1010c644();
          break;
        }
LAB_101b6aec:
        puVar11 = (undefined4 *)(local_4c * 0x20 + local_44);
        piVar1 = (int *)(iVar10 + uVar6 * 0xc);
        uVar8 = FUN_1014a0eb(0x40,*puVar11,*piVar1);
        puVar11[2] = piVar1[2];
        puVar11[3] = &LAB_101b74dc;
        local_3c = (float10)CONCAT64(local_3c._4_6_,puVar11);
        FUN_1014b266(uVar8);
        if (0 < *piVar1) {
          iVar10 = 0;
          do {
            iVar2 = *(int *)(piVar1[2] + iVar10 * 4);
            uVar4 = FUN_1014b156(iVar2);
            FUN_1014ae21(iVar10,0);
            local_1c._0_4_ = 0.0;
            local_1c._4_4_ = 0.0;
            FUN_10133727((&PTR_s_Artichoke_1030217c)[iVar2],uVar4,4,&local_1c);
            cVar3 = FUN_10102c44();
            if (cVar3 != '\0') {
              cVar3 = FUN_10113d4b(0x20d,1);
              if ((cVar3 != '\0') || (cVar3 = FUN_10113d4b(0x273,1), cVar3 != '\0')) {
                local_50 = local_4c;
              }
              cVar3 = FUN_10113f85(0);
              if (cVar3 != '\0') {
                local_50 = local_4c;
              }
            }
            iVar10 = iVar10 + 1;
          } while (iVar10 < *piVar1);
        }
        uVar8 = FUN_1014a9f9();
        *(int *)(local_3c._0_4_ + 8) = piVar1[2];
        *(undefined1 **)(local_3c._0_4_ + 0xc) = &LAB_101b74dc;
        FUN_1014b266(uVar8);
      }
      else {
        local_1c = DAT_102b8950;
        fVar12 = (float10)FUN_1011561d();
        local_2c = (float)fVar12;
        local_20 = local_2c * DAT_102b8cb0;
        local_24 = 0;
        FUN_10111da2(&local_24,&local_1c,0,0);
        fVar12 = (float10)FUN_10111f20();
        local_30 = (float)fVar12;
        local_1c._4_4_ = local_30 * DAT_102b7110;
        local_1c._0_4_ = -1.1754944e-38;
        cVar3 = FUN_1010c081(&DAT_1033ec41,&local_1c,0x88,0);
        FUN_10111ca1(&local_1c);
        local_48 = local_1c._4_4_;
        if (cVar3 != '\0') goto LAB_101b6aec;
      }
      FUN_1010c644();
      uVar6 = 1;
      uVar9 = 0;
    } while ((local_40 & 1) != 0);
    FUN_10165606(1);
    FUN_10131e26();
    local_3c = (float10)FUN_101155f9();
    fVar12 = (float10)FUN_101155f9();
    local_1c._0_4_ = (float)local_3c;
    local_1c._4_4_ = (float)fVar12;
    bVar5 = FUN_1012e1b7(">>",&local_1c);
    cVar3 = FUN_1012e1b7(&DAT_1033cff8,&local_1c);
    uVar6 = 0;
    if (cVar3 == '\0') {
      uVar6 = local_50;
    }
    cVar3 = FUN_1012e1b7(&DAT_1033d432,&local_1c);
    if (cVar3 != '\0') {
      uVar6 = 1;
    }
    cVar3 = FUN_1012e1b7(&DAT_1033d42d,&local_1c);
    if (bVar5 != 0 || cVar3 != '\0') {
      uVar9 = bVar5 - 1;
      if (cVar3 != '\0') {
        uVar9 = 1;
      }
      FUN_101b7234(uVar9,uVar9 ^ 1);
    }
    if (uVar6 != 0xffffffff) {
      FUN_101b7378(uVar6,uVar6 ^ 1);
    }
    FUN_1016304e();
  }
  if (DAT_10388d00 != (local_14 ^ (uint)&local_54)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return;
}

