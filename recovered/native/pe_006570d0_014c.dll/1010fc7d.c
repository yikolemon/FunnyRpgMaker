/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1010fc7d */

void __fastcall
FUN_1010fc7d(int param_1,undefined4 *param_2,byte param_3,char param_4,int param_5,float *param_6)

{
  float *pfVar1;
  byte *pbVar2;
  undefined8 uVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  float fVar9;
  int iVar10;
  byte bVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  bool bVar16;
  undefined4 *in_XMM0_Da;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  int local_ec;
  undefined4 *local_e8;
  int local_e4;
  undefined4 *local_e0;
  undefined4 *local_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float local_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  int local_bc;
  float local_b8;
  float fStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  undefined4 *local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  undefined4 *local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  byte local_36;
  byte local_35;
  undefined8 local_34;
  undefined8 uStack_2c;
  undefined8 local_24;
  undefined8 uStack_1c;
  uint local_14;
  
  iVar12 = DAT_1039d74c;
  local_14 = DAT_10388d00 ^ (uint)&local_ec;
  uVar4 = *(uint *)(param_1 + 0xc);
  *(undefined1 *)(param_1 + 0xfe) = 0;
  *(undefined4 *)(param_1 + 0x19c) = 1;
  local_e8 = *(undefined4 **)(param_1 + 0x88);
  local_a8 = *(float *)(param_1 + 0x8c);
  local_ec = param_1;
  if (*(char *)(param_1 + 0xfc) == '\x01') {
    fVar9 = *(float *)(iVar12 + 0xd18);
    *(float *)(iVar12 + 0xd18) = local_a8;
    iVar6 = 0xc;
    if (param_3 != 0) {
      iVar6 = 0xc - (uint)*(byte *)(iVar12 + 0x2040);
    }
    local_a8 = fVar9;
    uVar7 = FUN_100fcb39(iVar6,0x3f800000);
    FUN_100fdee9(*param_2,param_2[1],param_2[2],param_2[3],uVar7,1,local_e8);
    *(float *)(iVar12 + 0xd18) = local_a8;
    param_1 = local_ec;
    goto LAB_101105fc;
  }
  fStack_a4 = 0.0;
  fStack_a0 = 0.0;
  fStack_9c = 0.0;
  local_e0 = in_XMM0_Da;
  if (-1 < (char)uVar4) {
    if ((((*(char *)(iVar12 + 0x2250) == '\x01') &&
         (*(int *)(iVar12 + 4) - *(int *)(iVar12 + 0x22d4) < 2)) &&
        (*(char *)(iVar12 + 0x70) == '\x01')) && (*(int *)(iVar12 + 0x2270) != -1)) {
      iVar6 = _strcmp("_IMWINDOW",(char *)(iVar12 + 0x2274));
      if (iVar6 == 0) {
        bVar16 = **(int **)(iVar12 + 0x2260) == local_ec;
      }
      else {
        bVar16 = false;
      }
    }
    else {
      bVar16 = false;
    }
    uVar7 = FUN_10126899();
    uVar8 = FUN_100fcb39(uVar7,0x3f800000);
    if ((*(byte *)(iVar12 + 0x1ed0) & 0x40) == 0) {
      fVar9 = DAT_102b70e0;
      if (bVar16) goto LAB_1010fdfa;
    }
    else {
      fVar9 = *(float *)(iVar12 + 0x1f30);
      if (bVar16) {
        fVar9 = *(float *)(iVar12 + 0x1f30) * DAT_102b70e0;
      }
LAB_1010fdfa:
      fVar21 = DAT_1028b430;
      if (fVar9 <= DAT_1028b430) {
        fVar21 = fVar9;
      }
      uVar8 = uVar8 & 0xffffff |
              (int)(float)(-(uint)(fVar9 < 0.0) & (uint)DAT_102b70e0 |
                          ~-(uint)(fVar9 < 0.0) & (uint)(fVar21 * DAT_102b7090 + DAT_102b70e0)) <<
              0x18;
    }
    if ((*(byte *)(local_ec + 0x409) & 1) != 0) {
      *(uint *)(*(int *)(local_ec + 0x430) + 0x50) = uVar8;
    }
    uVar13 = 0;
    if ((uVar4 >> 0x17 & 1) == 0) {
      uVar13 = uVar8;
    }
    param_1 = local_ec;
    if (0xffffff < uVar13) {
      fVar9 = (float)*(undefined8 *)(local_ec + 0x50);
      fVar21 = (float)((ulonglong)*(undefined8 *)(local_ec + 0x50) >> 0x20);
      local_24 = CONCAT44(*(float *)(local_ec + 0x90) + fVar21,fVar9 + 0.0);
      uStack_1c = CONCAT44((float)((ulonglong)*(undefined8 *)(local_ec + 0x58) >> 0x20) + fVar21,
                           (float)*(undefined8 *)(local_ec + 0x58) + fVar9);
      bVar11 = *(byte *)(local_ec + 0x409);
      local_dc = param_2;
      if ((bVar11 & 1) == 0) {
        fVar9 = 3.36312e-43;
        if ((uVar4 & 1) == 0) {
          fVar9 = 2.69049e-43;
        }
      }
      else {
        iVar6 = *(int *)(*(int *)(local_ec + 0x430) + 0x78);
        local_34 = *(undefined8 *)(iVar6 + 0x50);
        uVar3 = *(undefined8 *)(iVar6 + 0x58);
        uStack_2c = CONCAT44((float)((ulonglong)uVar3 >> 0x20) +
                             (float)((ulonglong)local_34 >> 0x20),(float)uVar3 + (float)local_34);
        fVar9 = (float)FUN_10194f0c(&local_24,&local_34,0);
        bVar11 = *(byte *)(local_ec + 0x409);
      }
      param_1 = local_ec;
      if ((bVar11 & 1) == 0) {
        local_cc = *(float *)(local_ec + 0x2e8);
      }
      else {
        local_cc = *(float *)(*(int *)(*(int *)(local_ec + 0x430) + 0x78) + 0x2e8);
        local_b8 = fVar9;
        FUN_1018de6c(local_cc,0);
        fVar9 = local_b8;
      }
      fVar21 = local_cc;
      FUN_1018b85a(&local_24,&uStack_1c,uVar13,local_e8,fVar9);
      param_2 = local_dc;
      if ((*(byte *)(param_1 + 0x409) & 1) != 0) {
        FUN_1018de6c(fVar21,1);
        param_1 = local_ec;
        param_2 = local_dc;
      }
    }
  }
  if ((*(byte *)(param_1 + 0x409) & 1) != 0) {
    pbVar2 = (byte *)(*(int *)(param_1 + 0x430) + 0xac);
    *pbVar2 = *pbVar2 | 4;
  }
  if (((uVar4 & 1) == 0) && ((*(byte *)(param_1 + 0x409) & 1) == 0)) {
    uVar7 = FUN_100fcb39(param_3 | 10,0x3f800000);
    FUN_1018b85a(param_2,param_2 + 2,uVar7,local_e8,0x30);
    param_1 = local_ec;
  }
  if ((uVar4 >> 10 & 1) != 0) {
    fVar9 = (float)*(undefined8 *)(param_1 + 0x50);
    fVar21 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x50) >> 0x20);
    fVar19 = *(float *)(param_1 + 0x90) + fVar21;
    auVar25._0_4_ = *(float *)(param_1 + 0x60) + fVar9;
    auVar25._4_4_ = *(float *)(param_1 + 0x94) + fVar19;
    auVar25._8_8_ = 0;
    auVar26._0_4_ = (float)*(undefined8 *)(param_1 + 0x58) + fVar9;
    auVar26._4_4_ = (float)((ulonglong)*(undefined8 *)(param_1 + 0x58) >> 0x20) + fVar21;
    auVar26._8_8_ = 0;
    auVar25 = minps(auVar25,auVar26);
    local_24 = CONCAT44(~-(uint)(fVar21 <= fVar19) & (uint)fVar21 |
                        (uint)fVar19 & -(uint)(fVar21 <= fVar19),fVar9);
    uStack_1c = auVar25._0_8_;
    local_dc = (undefined4 *)0x0;
    if ((uVar4 & 1) != 0) {
      local_dc = local_e8;
    }
    uVar7 = FUN_100fcb39(0xd,0x3f800000);
    FUN_1018b85a(&local_24,&uStack_1c,uVar7,local_dc,0x30);
    param_1 = local_ec;
    if ((0.0 < (float)*(undefined4 **)(iVar12 + 0xd18)) &&
       (uStack_1c._4_4_ < *(float *)(local_ec + 0x54) + *(float *)(local_ec + 0x5c))) {
      local_dc = *(undefined4 **)(iVar12 + 0xd18);
      uVar7 = FUN_100fcb39(5,0x3f800000);
      FUN_1018b44e(DAT_102b70e0 * local_a8 + (float)local_24,
                   (float)uStack_1c - DAT_102b70e0 * local_a8,uStack_1c._4_4_,uVar7,local_dc);
      param_1 = local_ec;
    }
  }
  if (((*(byte *)(param_1 + 0x409) & 1) != 0) &&
     (iVar6 = *(int *)(param_1 + 0x430), (*(uint *)(iVar6 + 0x10) & 0x3000) == 0x2000)) {
    local_dc = (undefined4 *)(float)(int)(DAT_102b71d4 * *(float *)(iVar12 + 0x1228));
    fStack_d8 = 0.0;
    fStack_d4 = 0.0;
    fStack_d0 = 0.0;
    fVar9 = (float)(int)(*(float *)(iVar12 + 0x1228) * DAT_102b8d54);
    pfVar1 = (float *)(iVar6 + 0x34);
    local_b8 = *pfVar1;
    local_24 = *(undefined8 *)pfVar1;
    local_34 = *(undefined8 *)pfVar1;
    local_cc = *(float *)(iVar6 + 0x38);
    uStack_1c = CONCAT44(local_cc + fVar9,fVar9 + local_b8);
    uVar7 = FUN_101021d4("#UNHIDE",0);
    FUN_10103c09(uVar7);
    cVar5 = FUN_1012d77e(&local_24,uVar7,&local_35,&local_36,0x800);
    if (cVar5 == '\0') {
      if ((local_36 == 1) && (cVar5 = FUN_1010378f(0,0xbf800000), cVar5 != '\0')) {
        FUN_101036bb(local_ec,iVar6,1);
      }
    }
    else {
      *(byte *)(iVar6 + 0xad) = *(byte *)(iVar6 + 0xad) | 4;
    }
    cVar5 = '\x18';
    if ((local_36 & local_35) == 0) {
      cVar5 = '\x17';
      if ((local_35 & 1) == 0) {
        cVar5 = (*(byte *)(iVar6 + 0xac) & 2) + 0x16;
      }
    }
    uVar7 = FUN_100fcb39(cVar5,0x3f800000);
    param_1 = local_ec;
    local_3c = local_cc + (float)local_dc;
    local_40 = local_b8 + 0.0;
    local_44 = local_cc + 0.0;
    local_48 = local_b8 + (float)local_dc;
    FUN_1018be36(&local_34,&local_48,&local_40,uVar7);
  }
  if (*(char *)(param_1 + 0xf4) == '\x01') {
    FUN_1012ecef(0);
    param_1 = local_ec;
  }
  if (*(char *)(param_1 + 0xf5) == '\x01') {
    FUN_1012ecef(1);
    param_1 = local_ec;
  }
  if (param_5 != 0 && (param_4 == '\x01' && (char)((uVar4 & 2) >> 1) == '\0')) {
    local_88 = (undefined4 *)(float)(int)(local_a8 * DAT_102b70e0 + DAT_102b70e0);
    fStack_84 = (float)(int)fStack_a4;
    fStack_80 = (float)(int)fStack_a0;
    fStack_7c = (float)(int)fStack_9c;
    local_58 = (float)local_88 + (float)local_e8;
    param_5 = param_5 * 0x18;
    iVar12 = 0;
    local_bc = param_5;
    fStack_54 = local_58;
    fStack_50 = local_58;
    fStack_4c = local_58;
    do {
      fVar9 = *param_6;
      if (0xffffff < (uint)fVar9) {
        local_dc = local_88;
        fStack_d8 = fStack_84;
        fStack_d4 = fStack_80;
        fStack_d0 = fStack_7c;
        local_78 = local_e0;
        fStack_74 = 0.0;
        fStack_70 = 0.0;
        fStack_6c = 0.0;
        if (iVar12 != 0) {
          fStack_d8 = 0.0;
          fStack_d4 = 0.0;
          fStack_d0 = 0.0;
          local_dc = local_e0;
          local_78 = local_88;
          fStack_74 = fStack_84;
          fStack_70 = fStack_80;
          fStack_6c = fStack_7c;
        }
        iVar6 = *(int *)(param_1 + 0x2e8);
        fVar21 = *(float *)(param_1 + 0x50);
        fVar19 = *(float *)(param_1 + 0x54);
        fVar17 = 0.0;
        fVar18 = 0.0;
        fVar20 = *(float *)(param_1 + 0x58);
        fVar22 = *(float *)(param_1 + 0x5c);
        fVar23 = 0.0;
        fVar24 = 0.0;
        fVar27 = *(float *)((int)&DAT_102b85ac + iVar12);
        fVar28 = *(float *)((int)&DAT_102b85ac + iVar12 + 4);
        fVar29 = 0.0;
        fVar30 = 0.0;
        local_b8 = *(float *)((int)&DAT_102b85b4 + iVar12);
        fStack_b4 = *(float *)((int)&DAT_102b85b4 + iVar12 + 4);
        iVar15 = *(int *)(iVar6 + 0x38);
        uStack_b0 = 0;
        uStack_ac = 0;
        local_a8 = fVar9;
        if (iVar15 == *(int *)(iVar6 + 0x3c)) {
          fStack_c4 = 0.0;
          fStack_c0 = 0.0;
          fStack_90 = 0.0;
          fStack_8c = 0.0;
          fStack_60 = 0.0;
          fStack_5c = 0.0;
          if (iVar15 == 0) {
            iVar10 = 8;
          }
          else {
            iVar10 = iVar15 / 2 + iVar15;
          }
          iVar14 = iVar15 + 1;
          if (iVar15 + 1 < iVar10) {
            iVar14 = iVar10;
          }
          local_cc = fVar20;
          fStack_c8 = fVar22;
          local_98 = fVar21;
          fStack_94 = fVar19;
          local_68 = fVar27;
          fStack_64 = fVar28;
          iVar10 = FUN_100fa1fa(iVar14 * 8);
          if (*(int *)(iVar6 + 0x40) != 0) {
            local_e4 = iVar10;
            FUN_1025b2d0(iVar10,*(int *)(iVar6 + 0x40),*(int *)(iVar6 + 0x38) << 3);
            FUN_100fa2cb(*(undefined4 *)(iVar6 + 0x40));
            iVar10 = local_e4;
          }
          *(int *)(iVar6 + 0x40) = iVar10;
          *(int *)(iVar6 + 0x3c) = iVar14;
          iVar15 = *(int *)(iVar6 + 0x38);
          param_1 = local_ec;
          fVar27 = local_68;
          fVar28 = fStack_64;
          fVar29 = fStack_60;
          fVar30 = fStack_5c;
          fVar21 = local_98;
          fVar19 = fStack_94;
          fVar17 = fStack_90;
          fVar18 = fStack_8c;
          fVar20 = local_cc;
          fVar22 = fStack_c8;
          fVar23 = fStack_c4;
          fVar24 = fStack_c0;
        }
        else {
          iVar10 = *(int *)(iVar6 + 0x40);
        }
        fVar21 = ((fVar20 + fVar21) - fVar21) * fVar27 + fVar21;
        fVar19 = ((fVar22 + fVar19) - fVar19) * fVar28 + fVar19;
        *(ulonglong *)(iVar10 + iVar15 * 8) =
             CONCAT44((float)local_dc * fStack_b4 + fVar19,(float)local_78 * local_b8 + fVar21);
        *(int *)(iVar6 + 0x38) = *(int *)(iVar6 + 0x38) + 1;
        iVar6 = *(int *)(param_1 + 0x2e8);
        iVar15 = *(int *)(iVar6 + 0x38);
        if (iVar15 == *(int *)(iVar6 + 0x3c)) {
          if (iVar15 == 0) {
            iVar10 = 8;
          }
          else {
            iVar10 = iVar15 / 2 + iVar15;
          }
          iVar14 = iVar15 + 1;
          if (iVar15 + 1 < iVar10) {
            iVar14 = iVar10;
          }
          local_cc = fVar21;
          fStack_c8 = fVar19;
          fStack_c4 = ((fVar23 + fVar17) - fVar17) * fVar29 + fVar17;
          fStack_c0 = ((fVar24 + fVar18) - fVar18) * fVar30 + fVar18;
          fVar9 = (float)FUN_100fa1fa(iVar14 * 8);
          if (*(int *)(iVar6 + 0x40) != 0) {
            local_98 = fVar9;
            FUN_1025b2d0(fVar9,*(int *)(iVar6 + 0x40),*(int *)(iVar6 + 0x38) << 3);
            FUN_100fa2cb(*(undefined4 *)(iVar6 + 0x40));
            fVar9 = local_98;
          }
          *(float *)(iVar6 + 0x40) = fVar9;
          *(int *)(iVar6 + 0x3c) = iVar14;
          iVar15 = *(int *)(iVar6 + 0x38);
          fVar21 = local_cc;
          fVar19 = fStack_c8;
        }
        else {
          fVar9 = *(float *)(iVar6 + 0x40);
        }
        *(ulonglong *)((int)fVar9 + iVar15 * 8) =
             CONCAT44((float)local_78 * fStack_b4 + fVar19,(float)local_dc * local_b8 + fVar21);
        *(int *)(iVar6 + 0x38) = *(int *)(iVar6 + 0x38) + 1;
        local_24 = CONCAT44(fStack_b4 * fStack_54 + fVar19,local_b8 * local_58 + fVar21);
        FUN_10189c26(&local_24,local_e8,*(undefined4 *)((int)&DAT_102b85bc + iVar12),
                     *(undefined4 *)((int)&DAT_102b85c0 + iVar12));
        iVar6 = *(int *)(local_ec + 0x2e8);
        FUN_10189368(*(undefined4 *)(iVar6 + 0x40),*(undefined4 *)(iVar6 + 0x38),local_a8);
        *(undefined4 *)(iVar6 + 0x38) = 0;
        param_5 = local_bc;
        param_1 = local_ec;
      }
      iVar12 = iVar12 + 0x18;
      param_6 = param_6 + 1;
    } while (param_5 != iVar12);
  }
  if ((param_4 != '\0') && (*(int *)(param_1 + 0x434) == 0)) {
    FUN_101268c4();
    param_1 = local_ec;
  }
LAB_101105fc:
  *(undefined4 *)(param_1 + 0x19c) = 0;
  if (DAT_10388d00 != (local_14 ^ (uint)&local_ec)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return;
}

