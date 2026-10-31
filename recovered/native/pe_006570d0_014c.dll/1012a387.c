/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1012a387 */

void __fastcall FUN_1012a387(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  undefined4 *puVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  float *pfVar8;
  undefined4 *puVar9;
  int iVar10;
  float fVar11;
  int *unaff_FS_OFFSET;
  bool bVar12;
  float10 fVar13;
  char *local_b8;
  float *local_b4;
  uint local_b0;
  float *local_ac;
  float *local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  undefined4 local_98;
  int local_94;
  float local_90 [4];
  char *local_80;
  char *local_7c;
  undefined8 local_78;
  undefined8 local_70;
  float local_68 [2];
  int local_60;
  float local_5c [2];
  int local_54;
  float local_50;
  int local_4c;
  int local_48;
  float local_44;
  int local_40;
  float local_3c;
  int local_38;
  int local_34;
  char *local_30;
  uint local_2c;
  char *local_28;
  float *local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_b8;
  local_14 = 0xffffffff;
  local_18 = &LAB_1012ca10;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  iVar10 = param_1[7];
  if (iVar10 != 0) {
    iVar1 = param_1[8];
    local_34 = iVar10;
    bVar5 = *(byte *)(iVar10 + 0xac);
    local_38 = iVar1;
    if (((bVar5 & 1) != 0) && ((*(byte *)(iVar1 + 0xac) & 1) != 0)) {
      local_24 = (float *)param_1;
      uVar2 = param_1[0x13];
      local_78 = *(undefined8 *)(iVar10 + 0x34);
      local_70 = *(undefined8 *)(iVar1 + 0x34);
      local_48 = DAT_1039d74c;
      *(float *)((int)&local_78 + uVar2 * 4) =
           *(float *)(iVar10 + 0x3c + uVar2 * 4) + *(float *)((int)&local_78 + uVar2 * 4);
      uVar7 = uVar2 ^ 1;
      *(float *)((int)&local_70 + uVar7 * 4) =
           *(float *)(iVar1 + 0x3c + uVar7 * 4) + *(float *)((int)&local_70 + uVar7 * 4);
      uVar7 = *(uint *)(iVar1 + 0x10) | *(uint *)(iVar10 + 0x10);
      if (((uVar7 & 0x20) == 0) && ((uVar7 & (uint)(uVar2 != 0) * 0x10000 + 0x10000) == 0)) {
        local_b8 = (char *)*local_24;
        local_2c = uVar2;
        FUN_10113358();
        iVar10 = 0;
        do {
          local_28 = (char *)iVar10;
          *(undefined4 *)((int)local_68 + iVar10 + 4) = 0;
          *(undefined4 *)((int)local_68 + iVar10) = 0;
          *(undefined4 *)((int)local_5c + iVar10 + -4) = 0;
          iVar10 = (int)local_28 + 0xc;
        } while (iVar10 != 0x18);
        local_14 = 2;
        local_44 = *(float *)(local_48 + 0xce8 + local_2c * 4);
        local_28 = (char *)(*(float *)((int)local_24[7] + 0x34 + local_2c * 4) + local_44);
        local_30 = (char *)(*(float *)((int)local_24[8] + 0x34 + local_2c * 4) +
                           *(float *)((int)local_24[8] + 0x3c + local_2c * 4));
        local_b8 = "##Splitter";
        iVar10 = FUN_10113594();
        local_30 = (char *)((float)local_30 - local_44);
        if (*(int *)(local_48 + 0x1528) == iVar10) {
          local_b4 = local_68;
          local_b8 = (char *)0x1;
          FUN_1012b567();
          local_b4 = local_5c;
          local_b8 = (char *)0x0;
          FUN_1012b567();
          local_3c = local_68[0];
          local_4c = local_60;
          iVar10 = 0;
          while (iVar10 < (int)local_3c) {
            local_40 = iVar10;
            iVar10 = *(int *)(local_4c + iVar10 * 4);
            local_90[0] = *(float *)(iVar10 + 0x34);
            local_90[1] = *(float *)(iVar10 + 0x38);
            local_90[2] = (float)*(undefined8 *)(iVar10 + 0x3c) + *(float *)(iVar10 + 0x34);
            local_90[3] = (float)((ulonglong)*(undefined8 *)(iVar10 + 0x3c) >> 0x20) +
                          *(float *)(iVar10 + 0x38);
            local_b4 = (float *)(local_90[local_2c] + local_44);
            local_b8 = local_28;
            fVar13 = (float10)FUN_100fdbca();
            local_7c = (char *)(float)fVar13;
            local_28 = (char *)(float)fVar13;
            iVar10 = local_40 + 1;
          }
          local_3c = local_5c[0];
          local_4c = local_54;
          iVar10 = 0;
          while (iVar10 < (int)local_3c) {
            local_40 = iVar10;
            iVar10 = *(int *)(local_4c + iVar10 * 4);
            local_90[0] = *(float *)(iVar10 + 0x34);
            local_90[1] = *(float *)(iVar10 + 0x38);
            local_90[2] = (float)*(undefined8 *)(iVar10 + 0x3c) + *(float *)(iVar10 + 0x34);
            local_90[3] = (float)((ulonglong)*(undefined8 *)(iVar10 + 0x3c) >> 0x20) +
                          *(float *)(iVar10 + 0x38);
            local_b4 = (float *)(local_90[local_2c + 2] - local_44);
            local_b8 = local_30;
            fVar13 = (float10)FUN_100ea38a();
            local_80 = (char *)(float)fVar13;
            local_30 = (char *)(float)fVar13;
            iVar10 = local_40 + 1;
          }
        }
        local_90[0] = *(float *)(local_34 + 0x3c + local_2c * 4);
        local_50 = *(float *)(local_38 + 0x3c + local_2c * 4);
        local_28 = (char *)((float)local_28 - *(float *)(local_34 + 0x34 + local_2c * 4));
        local_44 = local_50 + *(float *)(local_38 + 0x34 + local_2c * 4);
        local_b4 = (float *)0x3f800000;
        local_b8 = (char *)0x2;
        local_40 = FUN_100fcb39();
        local_3c = *(float *)(local_48 + 0x14c4);
        local_14 = 2;
        local_b8 = "##Splitter";
        local_b4 = (float *)FUN_10113594();
        local_a0 = local_44 - (float)local_30;
        local_94 = local_40;
        local_9c = local_3c;
        local_a4 = (float)local_28;
        local_a8 = &local_50;
        local_ac = local_90;
        local_b0 = local_2c;
        local_b8 = (char *)&local_78;
        local_98 = 0x3d23d70a;
        cVar6 = FUN_10132698();
        if (((cVar6 != '\0') && (0 < (int)local_68[0])) && (0 < (int)local_5c[0])) {
          *(float *)(local_34 + 0x44 + local_2c * 4) = local_90[0];
          *(float *)(local_34 + 0x3c + local_2c * 4) = local_90[0];
          *(float *)(local_38 + 0x34 + local_2c * 4) =
               *(float *)(local_38 + 0x34 + local_2c * 4) -
               (local_50 - *(float *)(local_38 + 0x3c + local_2c * 4));
          *(float *)(local_38 + 0x44 + local_2c * 4) = local_50;
          *(float *)(local_38 + 0x3c + local_2c * 4) = local_50;
          iVar10 = 0;
          pfVar8 = local_68;
          local_30 = (char *)CONCAT31((int3)(local_2c >> 8),1);
          do {
            local_28 = (char *)*pfVar8;
            if (0 < (int)local_28) {
              fVar3 = pfVar8[2];
              fVar11 = 0.0;
              do {
                puVar4 = *(undefined4 **)((int)fVar3 + (int)fVar11 * 4);
                for (puVar9 = (undefined4 *)puVar4[6]; (float *)puVar9 != local_24;
                    puVar9 = (undefined4 *)puVar9[6]) {
                  if (puVar9[0x13] == local_2c) {
                    *(byte *)(puVar9[iVar10 + 7] + 0xac) =
                         *(byte *)(puVar9[iVar10 + 7] + 0xac) | 0x80;
                    puVar9 = (undefined4 *)puVar4[6];
                  }
                  puVar4 = puVar9;
                }
                fVar11 = (float)((int)fVar11 + 1);
              } while ((char *)fVar11 != local_28);
            }
            pfVar8 = local_5c;
            iVar10 = 1;
            bVar12 = (char)local_30 != '\0';
            local_30 = (char *)0x0;
          } while (bVar12);
          local_b8 = *(char **)(local_34 + 0x40);
          FUN_10129d4e();
          local_b8 = *(char **)(local_38 + 0x40);
          FUN_10129d4e();
          FUN_10118556();
          local_14 = 2;
        }
        FUN_10113568();
        local_24 = (float *)0xc;
        do {
          local_14 = 1;
          if (*(char **)((int)&local_60 + (int)local_24) != (char *)0x0) {
            local_b8 = *(char **)((int)&local_60 + (int)local_24);
            FUN_100fa2cb();
          }
          local_14 = 0xffffffff;
          local_24 = local_24 + -3;
        } while (local_24 != (float *)0xfffffff4);
      }
      else {
        local_24 = *(float **)(local_48 + 0xd14);
        local_b4 = (float *)0x3f800000;
        local_b8 = (char *)0x1c;
        local_b0 = FUN_100fcb39();
        local_ac = local_24;
        local_b8 = (char *)&local_78;
        local_a8 = (float *)0x0;
        local_b4 = (float *)&local_70;
        FUN_1018b85a();
      }
      bVar5 = *(byte *)(local_34 + 0xac);
    }
    if ((bVar5 & 1) != 0) {
      FUN_1012a387();
    }
    if ((*(byte *)(local_38 + 0xac) & 1) != 0) {
      FUN_1012a387();
    }
  }
  *unaff_FS_OFFSET = local_1c;
  return;
}

