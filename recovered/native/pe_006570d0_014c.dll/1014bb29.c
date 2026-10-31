/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1014bb29 */

int FUN_1014bb29(int param_1,undefined4 param_2,code *param_3,undefined4 param_4,int param_5,
                int param_6,int param_7,float param_8,float param_9,undefined4 *param_10)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  unkbyte10 Var8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  float fVar18;
  int local_110;
  float local_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  int local_fc;
  float local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  int local_e8;
  int local_e4;
  float local_e0;
  float fStack_dc;
  undefined2 uStack_d8;
  undefined2 uStack_d6;
  float fStack_d4;
  undefined4 local_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined8 local_58;
  char local_4d;
  undefined4 local_4c;
  float local_48;
  undefined8 local_44;
  undefined4 local_3c;
  float fStack_38;
  undefined8 uStack_34;
  float local_2c;
  float fStack_28;
  float local_24;
  float local_20;
  undefined8 local_1c;
  uint local_14;
  
  iVar6 = DAT_1039d74c;
  local_14 = DAT_10388d00 ^ (uint)&local_110;
  *(undefined1 *)(*(int *)(DAT_1039d74c + 0x14cc) + 0xfb) = 1;
  iVar3 = *(int *)(iVar6 + 0x14cc);
  if (*(char *)(iVar3 + 0xfe) == '\0') {
    local_fc = iVar6;
    local_10c = (float)FUN_101021d4(param_2,0);
    local_d0 = FUN_100fd57d(param_2,0);
    iVar6 = local_fc;
    FUN_100fdb2e(&local_24,param_2,local_d0,0,0xbf800000);
    local_f8 = *(float *)(iVar6 + 0xd10) + *(float *)(iVar6 + 0xd10) + local_20;
    fVar7 = (float10)FUN_10115533();
    FUN_1010c427(&local_2c,*param_10,param_10[1],(float)fVar7,local_f8);
    local_4c = *(undefined4 *)(iVar3 + 0x144);
    local_48 = *(float *)(iVar3 + 0x148);
    local_b8 = *(float *)(iVar3 + 0x144);
    fStack_b4 = *(float *)(iVar3 + 0x148);
    local_c8 = local_2c + local_b8;
    fStack_c4 = fStack_28 + fStack_b4;
    uStack_34 = CONCAT44(fStack_c4,local_c8);
    fVar10 = 0.0;
    if (0.0 < local_24) {
      fVar10 = local_24 + *(float *)(iVar6 + 0xd24);
    }
    local_e0 = *(float *)(iVar6 + 0xd0c);
    fStack_dc = *(float *)(iVar6 + 0xd10);
    uStack_d8 = 0;
    uStack_d6 = 0;
    fStack_d4 = 0.0;
    fStack_c0 = 0.0;
    fStack_bc = 0.0;
    local_44 = CONCAT44(fStack_c4 + 0.0,fVar10 + local_c8);
    fStack_b0 = 0.0;
    fStack_ac = 0.0;
    local_1c = CONCAT44((fStack_c4 + 0.0) - fStack_b4,(fVar10 + local_c8) - local_b8);
    local_e8 = iVar3;
    local_3c = local_4c;
    fStack_38 = local_48;
    FUN_1010c810(&local_1c,*(undefined4 *)(iVar6 + 0xd10));
    fVar10 = local_10c;
    cVar1 = FUN_1010c9d8();
    if (cVar1 != '\0') {
      FUN_1012d77e(&local_3c,fVar10,&local_4d,0,0);
      if ((param_8 != DAT_102b89b4) || (NAN(param_8) || NAN(DAT_102b89b4))) {
        if ((param_9 == DAT_102b89b4) && (!NAN(param_9) && !NAN(DAT_102b89b4))) goto LAB_1014bd47;
        local_10c = param_9;
        local_a8 = param_8;
      }
      else {
LAB_1014bd47:
        local_f8 = DAT_102b89b0;
        if (param_5 < 1) {
          local_10c = DAT_102b89b4;
        }
        else {
          iVar3 = 0;
          uVar2 = 0;
          uVar4 = 0;
          uVar15 = 0;
          local_10c = DAT_102b89b4;
          uStack_108 = 0;
          uStack_104 = 0;
          uStack_100 = 0;
          do {
            uStack_f4 = uVar2;
            uStack_f0 = uVar4;
            uStack_ec = uVar15;
            fVar7 = (float10)(*param_3)(param_4,iVar3);
            fStack_7c = (float)fVar7;
            uVar2 = uStack_f4;
            uVar4 = uStack_f0;
            uVar15 = uStack_ec;
            if (!NAN(fStack_7c)) {
              local_a8 = fStack_7c;
              fVar7 = (float10)FUN_100ea38a(local_10c);
              local_10c = (float)fVar7;
              uStack_108 = 0;
              uStack_104 = 0;
              uStack_100 = 0;
              fStack_80 = local_10c;
              fVar7 = (float10)FUN_100fdbca();
              local_f8 = (float)fVar7;
              uVar2 = 0;
              uVar4 = 0;
              uVar15 = 0;
              fStack_84 = local_f8;
            }
            iVar3 = iVar3 + 1;
          } while (param_5 != iVar3);
        }
        local_a8 = (float)(~-(uint)(param_8 == DAT_102b89b4) & (uint)param_8 |
                          (uint)local_10c & -(uint)(param_8 == DAT_102b89b4));
        local_10c = (float)(~-(uint)(DAT_102b89b4 == param_9) & (uint)param_9 |
                           (uint)local_f8 & -(uint)(DAT_102b89b4 == param_9));
      }
      uStack_9c = 0;
      uStack_a0 = 0;
      uStack_a4 = 0;
      uStack_100 = 0;
      uStack_104 = 0;
      uStack_108 = 0;
      local_b8 = local_b8 + local_e0;
      fStack_b4 = fStack_b4 + fStack_dc;
      fStack_b0 = fStack_b0 + (float)CONCAT22(uStack_d6,uStack_d8);
      fStack_ac = fStack_ac + fStack_d4;
      local_f8 = *(float *)(iVar6 + 0xd14);
      uVar2 = FUN_100fcb39(7,0x3f800000);
      FUN_100fdee9(local_3c,fStack_38,(int)uStack_34,uStack_34._4_4_,uVar2,1,local_f8);
      if (param_5 < (int)((param_1 == 0) + 1)) {
        iVar5 = -1;
      }
      else {
        local_e4 = param_6;
        local_c8 = local_c8 - local_e0;
        fStack_c4 = fStack_c4 - fStack_dc;
        fStack_c0 = fStack_c0 - (float)CONCAT22(uStack_d6,uStack_d8);
        fStack_bc = fStack_bc - fStack_d4;
        iVar3 = FUN_100fa683((int)local_2c,param_5);
        local_f8 = (float)(param_5 - (uint)(param_1 == 0));
        local_110 = -1;
        if ((((local_4d == '\x01') && (fVar10 = *(float *)(iVar6 + 0xe4), local_b8 <= fVar10)) &&
            (fStack_b4 <= *(float *)(iVar6 + 0xe8))) &&
           ((fVar10 < local_c8 && (*(float *)(iVar6 + 0xe8) < fStack_c4)))) {
          fVar7 = (float10)FUN_10112cc4((fVar10 - local_b8) / (local_c8 - local_b8),0,0x3f7ff972);
          local_88 = (float)fVar7;
          iVar6 = (int)((float)(int)local_f8 * local_88);
          Var8 = (*param_3)(param_4,(param_6 + iVar6) % param_5);
          local_e0 = (float)Var8;
          fStack_dc = (float)((unkuint10)Var8 >> 0x20);
          uStack_d8 = (undefined2)((unkuint10)Var8 >> 0x40);
          fVar7 = (float10)(*param_3)(param_4,(param_6 + iVar6 + 1) % param_5);
          fStack_8c = (float)(float10)CONCAT28(uStack_d8,CONCAT44(fStack_dc,local_e0));
          fStack_90 = (float)fVar7;
          local_110 = iVar6;
          if (param_1 == 0) {
            FUN_10103022("%d: %8.4g\n%d: %8.4g",iVar6,(double)fStack_8c,iVar6 + 1,(double)fStack_90)
            ;
          }
          else if (param_1 == 1) {
            FUN_10103022();
          }
        }
        iVar3 = iVar3 - (uint)(param_1 == 0);
        local_e0 = (float)(~-(uint)(local_a8 == local_10c) &
                          (uint)(DAT_1028b430 / (local_10c - local_a8)));
        fStack_dc = 0.0;
        uStack_d8 = 0;
        uStack_d6 = 0;
        fStack_d4 = 0.0;
        fVar7 = (float10)(*param_3)(param_4,param_6 % param_5);
        fStack_94 = (float)fVar7;
        if (0.0 <= local_10c * local_a8) {
          local_10c = (float)(~-(uint)(local_a8 < 0.0) & (uint)DAT_1028b430);
          uStack_108 = 0;
          uStack_104 = 0;
          uStack_100 = 0;
        }
        else {
          local_10c = local_a8 * local_e0 + DAT_1028b430;
          uStack_108 = uStack_a4;
          uStack_104 = uStack_a0;
          uStack_100 = uStack_9c;
        }
        fStack_78 = fStack_94;
        uVar2 = FUN_100fcb39((param_1 != 0) * '\x02' + ',',0x3f800000);
        uVar4 = FUN_100fcb39((param_1 != 0) * '\x02' + '-',0x3f800000);
        iVar6 = local_fc;
        iVar5 = local_110;
        if (0 < iVar3) {
          fVar11 = local_e0 * (fStack_78 - local_a8);
          fVar10 = DAT_1028b430;
          if (fVar11 <= DAT_1028b430) {
            fVar10 = fVar11;
          }
          fVar10 = (float)(-(uint)(fVar11 < 0.0) & (uint)DAT_1028b430 |
                          ~-(uint)(fVar11 < 0.0) & (uint)(DAT_1028b430 - fVar10));
          uVar12 = 0;
          uVar13 = 0;
          uVar14 = 0;
          fStack_cc = (float)(int)local_f8;
          fStack_78 = DAT_1028b430 / (float)iVar3;
          uStack_74 = 0;
          uStack_70 = 0;
          uStack_6c = 0;
          local_e4 = local_e4 + 1;
          local_c8 = local_c8 - local_b8;
          fStack_c4 = fStack_c4 - fStack_b4;
          fStack_c0 = fStack_c0 - fStack_b0;
          fStack_bc = fStack_bc - fStack_ac;
          fStack_68 = fStack_c4 * local_10c + fStack_b4;
          fVar11 = 0.0;
          uVar15 = 0;
          uVar16 = 0;
          uVar17 = 0;
          fStack_64 = fStack_c4;
          fStack_60 = fStack_c4;
          fStack_5c = fStack_c4;
          do {
            iVar6 = (int)(fVar11 * fStack_cc + DAT_102b70e0);
            local_10c = fVar10;
            uStack_108 = uVar12;
            uStack_104 = uVar13;
            uStack_100 = uVar14;
            local_f8 = fVar11;
            uStack_f4 = uVar15;
            uStack_f0 = uVar16;
            uStack_ec = uVar17;
            fVar7 = (float10)(*param_3)(param_4,(local_e4 + iVar6) % param_5);
            fStack_98 = (float)fVar7;
            fVar11 = (fStack_98 - local_a8) * local_e0;
            fVar10 = DAT_1028b430;
            if (fVar11 <= DAT_1028b430) {
              fVar10 = fVar11;
            }
            fVar10 = (float)(-(uint)(fVar11 < 0.0) & (uint)DAT_1028b430 |
                            ~-(uint)(fVar11 < 0.0) & (uint)(DAT_1028b430 - fVar10));
            fVar11 = fStack_78 + local_f8;
            fVar18 = local_f8 * local_c8 + local_b8;
            local_1c = CONCAT44(local_10c * fStack_c4 + fStack_b4,fVar18);
            if (param_1 == 0) {
              local_58 = CONCAT44(fVar10 * fStack_c4 + fStack_b4,fVar11 * local_c8 + local_b8);
              uStack_108 = 0;
              uStack_104 = 0;
              uStack_100 = 0;
              uStack_f4 = uStack_74;
              uStack_f0 = uStack_70;
              uStack_ec = uStack_6c;
              local_10c = fVar10;
              local_f8 = fVar11;
              FUN_1018b2de();
              fVar11 = local_f8;
              uVar15 = uStack_f4;
              uVar16 = uStack_f0;
              uVar17 = uStack_ec;
              fVar10 = local_10c;
              uVar12 = uStack_108;
              uVar13 = uStack_104;
              uVar14 = uStack_100;
            }
            else {
              fVar9 = local_c8 * fVar11 + local_b8;
              local_58 = CONCAT44(fStack_68,fVar9);
              uVar15 = uStack_74;
              uVar16 = uStack_70;
              uVar17 = uStack_6c;
              uVar12 = 0;
              uVar13 = 0;
              uVar14 = 0;
              if (param_1 == 1) {
                uStack_f4 = uStack_74;
                uStack_f0 = uStack_70;
                uStack_ec = uStack_6c;
                uStack_108 = 0;
                uStack_104 = 0;
                uStack_100 = 0;
                if (fVar18 + DAT_102b8ac0 <= fVar9) {
                  local_58 = CONCAT44(fStack_68,fVar9 + DAT_102b8a50);
                }
                uVar15 = uVar2;
                if (local_110 == iVar6) {
                  uVar15 = uVar4;
                }
                local_10c = fVar10;
                local_f8 = fVar11;
                FUN_1018b85a(&local_1c,&local_58,uVar15,0,0);
                fVar11 = local_f8;
                uVar15 = uStack_f4;
                uVar16 = uStack_f0;
                uVar17 = uStack_ec;
                fVar10 = local_10c;
                uVar12 = uStack_108;
                uVar13 = uStack_104;
                uVar14 = uStack_100;
              }
            }
            iVar3 = iVar3 + -1;
            iVar6 = local_fc;
            iVar5 = local_110;
          } while (iVar3 != 0);
        }
      }
      if (param_7 != 0) {
        local_1c = (ulonglong)(uint)DAT_102b70e0;
        local_58 = CONCAT44(fStack_38 + *(float *)(iVar6 + 0xd10),local_3c);
        FUN_100fdbf2(&local_58,&uStack_34,param_7,0,0,&local_1c,0);
      }
      if (0.0 < local_24) {
        FUN_100fd5ae((float)uStack_34 + *(float *)(iVar6 + 0xd24),fStack_b4,param_2,local_d0,0);
      }
      goto LAB_1014bd23;
    }
  }
  iVar5 = -1;
LAB_1014bd23:
  if (DAT_10388d00 == (local_14 ^ (uint)&local_110)) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

