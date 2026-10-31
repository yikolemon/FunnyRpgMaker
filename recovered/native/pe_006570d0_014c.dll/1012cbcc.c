/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1012cbcc */

void FUN_1012cbcc(char *param_1,char *param_2,uint param_3)

{
  int iVar1;
  char cVar2;
  size_t sVar3;
  char *pcVar4;
  int iVar5;
  float10 fVar6;
  float fVar7;
  float fVar8;
  undefined4 in_XMM3_Db;
  undefined4 uVar9;
  undefined4 in_XMM3_Dc;
  undefined4 uVar10;
  undefined4 in_XMM3_Dd;
  undefined4 uVar11;
  float local_84;
  float local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  float local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  float local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34 [2];
  float local_2c;
  float local_28;
  undefined8 local_24;
  undefined8 local_1c;
  uint local_14;
  
  iVar1 = DAT_1039d74c;
  local_14 = DAT_10388d00 ^ (uint)&local_84;
  *(undefined1 *)(*(int *)(DAT_1039d74c + 0x14cc) + 0xfb) = 1;
  iVar5 = *(int *)(iVar1 + 0x14cc);
  if (*(char *)(iVar5 + 0xfe) == '\0') {
    if (param_1 == param_2) {
      param_1 = "";
      param_2 = "";
    }
    if (param_2 == (char *)0x0) {
      sVar3 = _strlen(param_1);
      param_2 = param_1 + sVar3;
    }
    local_44 = *(float *)(iVar5 + 0x144);
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    local_64 = *(float *)(iVar5 + 0x148) + *(float *)(iVar5 + 0x17c);
    fVar8 = *(float *)(iVar5 + 0x220);
    uStack_60 = 0;
    uStack_5c = 0;
    uStack_58 = 0;
    if (((int)param_2 - (int)param_1 < 0x7d1) || (0.0 <= fVar8)) {
      local_80 = 0.0;
      if (0.0 <= fVar8) {
        fVar6 = (float10)FUN_101031f1(iVar5 + 0x144,fVar8);
        local_80 = (float)fVar6;
        local_70 = local_80;
      }
      FUN_100fdb2e(&local_1c,param_1,param_2,0,local_80);
      local_2c = local_44;
      local_28 = local_64;
      local_24 = CONCAT44(local_64 + (float)((ulonglong)local_1c >> 0x20),local_44 + (float)local_1c
                         );
      FUN_1010c810(&local_1c,0);
      cVar2 = FUN_1010c9d8(&local_2c,0,0,0);
      if (cVar2 != '\0') {
        FUN_100fd857(local_2c,local_28,param_1,param_2,local_80);
      }
    }
    else {
      local_54 = 0.0;
      uStack_50 = 0;
      uStack_4c = 0;
      uStack_48 = 0;
      fVar6 = (float10)FUN_10111f20();
      local_84 = (float)fVar6;
      local_1c = 0;
      fVar8 = local_64;
      uVar9 = uStack_60;
      uVar10 = uStack_5c;
      uVar11 = uStack_58;
      local_68 = local_84;
      if ((*(char *)(iVar1 + 0x2748) == '\0') &&
         (local_80 = (float)(int)((*(float *)(iVar5 + 0x290) - local_64) / local_84),
         0 < (int)local_80)) {
        local_54 = 0.0;
        uStack_50 = 0;
        uStack_4c = 0;
        uStack_48 = 0;
        if (param_1 < param_2) {
          iVar5 = 0;
          local_54 = 0.0;
          uStack_50 = 0;
          uStack_4c = 0;
          uStack_48 = 0;
          do {
            pcVar4 = _memchr(param_1,10,(int)param_2 - (int)param_1);
            if (pcVar4 == (char *)0x0) {
              pcVar4 = param_2;
            }
            if ((param_3 & 1) == 0) {
              FUN_100fdb2e(&local_2c,param_1,pcVar4,0,0xbf800000);
              fVar6 = (float10)FUN_100fdbca((float)local_1c,local_2c);
              local_6c = (float)fVar6;
              uStack_50 = 0;
              uStack_4c = 0;
              uStack_48 = 0;
              local_1c = CONCAT44(local_1c._4_4_,local_6c);
              local_54 = local_6c;
            }
            param_1 = pcVar4 + 1;
            iVar5 = iVar5 + 1;
          } while ((param_1 < param_2) && (iVar5 < (int)local_80));
          fVar8 = (float)iVar5;
        }
        else {
          fVar8 = 0.0;
          in_XMM3_Db = 0;
          in_XMM3_Dc = 0;
          in_XMM3_Dd = 0;
        }
        fVar8 = fVar8 * local_84 + local_64;
        uVar9 = in_XMM3_Db;
        uVar10 = in_XMM3_Dc;
        uVar11 = in_XMM3_Dd;
      }
      fVar7 = local_54;
      if (param_1 < param_2) {
        local_24._4_4_ = local_84 + fVar8;
        local_24._0_4_ = DAT_102b89b4 + local_44;
        local_2c = local_44;
        uStack_7c = uVar9;
        uStack_78 = uVar10;
        uStack_74 = uVar11;
        local_28 = fVar8;
        do {
          local_80 = fVar8;
          cVar2 = FUN_10103133(&local_2c,0);
          fVar8 = local_80;
          if (cVar2 != '\0') break;
          pcVar4 = _memchr(param_1,10,(int)param_2 - (int)param_1);
          if (pcVar4 == (char *)0x0) {
            pcVar4 = param_2;
          }
          FUN_100fdb2e(local_34,param_1,pcVar4,0,0xbf800000);
          fVar6 = (float10)FUN_100fdbca((float)local_1c,local_34[0]);
          local_1c = CONCAT44(local_1c._4_4_,(float)fVar6);
          FUN_100fd5ae(local_44,local_80,param_1,pcVar4,0);
          param_1 = pcVar4 + 1;
          local_28 = local_28 + local_84;
          local_24._4_4_ = local_24._4_4_ + local_84;
          fVar8 = local_80 + local_84;
        } while (param_1 < param_2);
        fVar7 = 0.0;
        if (param_1 < param_2) {
          iVar5 = 0;
          local_80 = fVar8;
          do {
            pcVar4 = _memchr(param_1,10,(int)param_2 - (int)param_1);
            if (pcVar4 == (char *)0x0) {
              pcVar4 = param_2;
            }
            if ((param_3 & 1) == 0) {
              FUN_100fdb2e(local_34,param_1,pcVar4,0,0xbf800000);
              fVar6 = (float10)FUN_100fdbca((float)local_1c,local_34[0]);
              local_1c = CONCAT44(local_1c._4_4_,(float)fVar6);
            }
            param_1 = pcVar4 + 1;
            iVar5 = iVar5 + 1;
          } while (param_1 < param_2);
          fVar7 = (float)iVar5;
          fVar8 = local_80;
        }
        fVar8 = fVar8 + fVar7 * local_84;
        fVar7 = (float)local_1c;
      }
      local_1c = CONCAT44(fVar8 - local_64,(float)local_1c);
      local_2c = local_44;
      local_24 = CONCAT44((fVar8 - local_64) + local_64,fVar7 + local_44);
      local_28 = local_64;
      FUN_1010c810(&local_1c,0);
      FUN_1010c9d8(&local_2c,0,0,0);
    }
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_84)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

