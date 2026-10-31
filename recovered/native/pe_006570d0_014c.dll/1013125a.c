/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1013125a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013125a(float param_1,undefined4 *param_2,undefined1 *param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  float10 fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 local_c0;
  char *pcStack_b8;
  undefined8 uStack_b4;
  float *local_ac;
  float *local_a8;
  float *local_a4;
  float local_a0;
  float fStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 *local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  float local_80;
  float local_7c;
  float fStack_78;
  float local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  float local_64;
  float local_60;
  undefined8 local_5c;
  float local_54 [2];
  float local_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  undefined1 local_3c [8];
  undefined1 local_34 [32];
  uint local_14;
  
  iVar2 = DAT_1039d74c;
  local_14 = DAT_10388d00 ^ (uint)&local_c0;
  *(undefined1 *)(*(int *)(DAT_1039d74c + 0x14cc) + 0xfb) = 1;
  iVar1 = *(int *)(iVar2 + 0x14cc);
  if (*(char *)(iVar1 + 0xfe) == '\0') {
    local_90 = (undefined1 *)
               (*(float *)(iVar2 + 0xd10) + *(float *)(iVar2 + 0xd10) + *(float *)(iVar2 + 0x1228));
    local_a0 = *(float *)(iVar1 + 0x144);
    fStack_9c = *(float *)(iVar1 + 0x148);
    uStack_98 = 0;
    uStack_94 = 0;
    fVar5 = (float10)FUN_10115533();
    pcStack_b8 = (char *)param_2[1];
    uStack_b4._0_4_ = (float)fVar5;
    uStack_b4._4_4_ = (float)local_90;
    local_c0 = (double)CONCAT44(*param_2,local_3c);
    FUN_1010c427();
    fStack_44 = local_3c._0_4_ + local_a0;
    fStack_40 = local_3c._4_4_ + fStack_9c;
    local_4c = local_a0;
    fStack_48 = fStack_9c;
    local_c0 = (double)CONCAT44(*(undefined4 *)(iVar2 + 0xd10),local_3c);
    FUN_1010c810();
    uStack_b4 = (double)((ulonglong)(uint)uStack_b4._4_4_ << 0x20);
    pcStack_b8 = (undefined1 *)0x0;
    local_c0 = (double)ZEXT48(&local_4c);
    cVar3 = FUN_1010c9d8();
    if (cVar3 != '\0') {
      if (param_1 < 0.0) {
        local_c0 = (double)(float)(_DAT_1028f620 ^ (uint)param_1);
        uStack_b4 = (double)CONCAT44(uStack_b4._4_4_,0x3ff00000);
        pcStack_b8 = (undefined1 *)0x0;
        fVar5 = (float10)FUN_1026dec0();
        fStack_78 = (float)fVar5;
        fVar6 = fStack_78 * DAT_102b8e98 + _DAT_102b90e8;
        fVar7 = DAT_102b8c70 + fVar6;
        fVar8 = DAT_1028b430;
        if (fVar7 <= DAT_1028b430) {
          fVar8 = fVar7;
        }
        local_90 = (undefined1 *)(~-(uint)(fVar7 < 0.0) & (uint)fVar8);
        local_a0 = DAT_1028b430;
        if (fVar6 <= DAT_1028b430) {
          local_a0 = fVar6;
        }
        local_a0 = (float)(~-(uint)(fVar6 < 0.0) & (uint)local_a0);
        local_74 = param_1;
      }
      else {
        local_74 = DAT_1028b430;
        if (param_1 <= DAT_1028b430) {
          local_74 = param_1;
        }
        local_90 = (undefined1 *)(-(uint)!NAN(local_74) & (uint)local_74);
        local_a0 = 0.0;
      }
      uStack_68 = 0;
      uStack_6c = 0;
      uStack_70 = 0;
      uStack_84 = 0;
      uStack_88 = 0;
      uStack_8c = 0;
      local_a4 = *(float **)(iVar2 + 0xd14);
      local_c0 = 0.007812500000000012;
      uVar4 = FUN_100fcb39();
      local_a8 = local_a4;
      local_c0 = (double)CONCAT44(fStack_48,local_4c);
      pcStack_b8 = (char *)fStack_44;
      uStack_b4 = (double)CONCAT44(uVar4,fStack_40);
      local_ac = (float *)0x1;
      FUN_100fdee9();
      fVar8 = *(float *)(iVar2 + 0xd18);
      local_4c = local_4c + fVar8;
      fStack_48 = fStack_48 + fVar8;
      fStack_44 = fStack_44 - fVar8;
      fStack_40 = fStack_40 - fVar8;
      pcStack_b8 = (char *)local_a0;
      local_c0 = (double)CONCAT44(fStack_44,local_4c);
      fVar5 = (float10)FUN_100ea365();
      local_a0 = (float)fVar5;
      pcStack_b8 = local_90;
      local_c0 = (double)CONCAT44(fStack_44,local_4c);
      local_7c = local_a0;
      fVar5 = (float10)FUN_100ea365();
      local_90 = (undefined1 *)(float)fVar5;
      local_80 = (float)local_90;
      if (local_a0 < (float)local_90) {
        local_a4 = *(float **)(iVar2 + 0xd14);
        local_c0 = 0.00781250000000008;
        pcStack_b8 = (char *)FUN_100fcb39();
        local_ac = local_a4;
        uStack_b4 = (double)CONCAT44(local_90,local_a0);
        local_c0 = (double)CONCAT44(&local_4c,*(undefined4 *)(iVar1 + 0x2e8));
        FUN_1019416e();
      }
      if (0.0 <= param_1 || param_3 != (undefined1 *)0x0) {
        if (param_3 == (undefined1 *)0x0) {
          uStack_b4 = (double)(local_74 * DAT_102b8c10 + DAT_102b94f4);
          param_3 = local_34;
          pcStack_b8 = "%.0f%%";
          local_c0 = (double)CONCAT44(0x20,param_3);
          FUN_100fa4b1();
        }
        pcStack_b8 = (undefined1 *)0x0;
        local_c0 = (double)CONCAT44(param_3,local_54);
        uStack_b4 = -0.0078125;
        FUN_100fdb2e();
        if (0.0 < local_54[0]) {
          if (param_1 < 0.0) {
            fVar8 = ((local_4c + fStack_44) - local_54[0]) * DAT_102b70e0;
          }
          else {
            fVar8 = (float)local_90 + *(float *)(iVar2 + 0xd1c);
          }
          local_5c = DAT_102b9500;
          local_a0 = fStack_48;
          pcStack_b8 = (char *)((fStack_44 - local_54[0]) - *(float *)(iVar2 + 0xd24));
          local_c0 = (double)CONCAT44(local_4c,fVar8);
          fVar5 = (float10)FUN_10112cc4();
          local_64 = (float)fVar5;
          local_60 = local_a0;
          local_ac = (float *)&local_5c;
          local_c0 = (double)CONCAT44(&fStack_44,&local_64);
          uStack_b4 = (double)(ZEXT48(local_54) << 0x20);
          pcStack_b8 = param_3;
          local_a8 = &local_4c;
          FUN_100fdbf2();
        }
      }
    }
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_c0)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

