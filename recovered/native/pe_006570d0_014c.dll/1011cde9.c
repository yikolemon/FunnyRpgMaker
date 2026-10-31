/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1011cde9 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1011cde9(undefined4 *****param_1,int param_2,float param_3,int param_4)

{
  undefined4 *****pppppuVar1;
  byte bVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  undefined4 *****pppppuVar9;
  undefined4 ****ppppuVar10;
  int iVar11;
  bool bVar12;
  float10 fVar13;
  float fVar14;
  undefined4 ****local_10c;
  undefined4 ****local_108;
  float local_104;
  undefined4 ***local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 local_e4;
  undefined4 ***local_e0;
  int local_dc;
  int local_d8;
  float local_d4;
  int local_d0;
  undefined4 ****local_cc;
  int local_c8;
  int local_c4;
  undefined4 ****local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 ****local_b0;
  undefined4 ***pppuStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  float local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  float local_90;
  int local_8c;
  int local_88;
  undefined4 ***local_84;
  float local_80;
  undefined4 ****local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 ***local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 ****local_5c;
  undefined4 ***pppuStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 ****local_4c;
  undefined4 ***local_48;
  undefined4 ****local_44;
  undefined4 ***pppuStack_40;
  undefined4 ****local_3c;
  undefined4 ***pppuStack_38;
  undefined8 uStack_34;
  undefined4 ****local_2c;
  undefined4 ***pppuStack_28;
  float fStack_24;
  float fStack_20;
  uint local_1c [3];
  
  iVar11 = DAT_1039d74c;
  local_1c[2] = DAT_10388d00 ^ (uint)&local_10c;
  bVar2 = *(byte *)(DAT_1039d74c + 0x70);
  local_10c = param_1[0xf];
  local_1c[0] = FUN_100fe900();
  local_10c = *(undefined4 *****)((int)param_3 + 0x3c);
  if (param_1[0xf] == local_10c || (bVar2 & 1) != 0) {
    local_c4 = 1;
  }
  else {
    local_1c[1] = FUN_100fe900();
    local_c4 = 2;
  }
  bVar12 = (bVar2 & 1) != 0;
  local_108 = DAT_102b71d8;
  if (!bVar12) {
    local_108 = DAT_102b8e90;
  }
  local_10c = (undefined4 ****)0x2a;
  if (bVar12) {
    local_b0 = DAT_102b7114;
    local_a0 = DAT_102b8e98;
    local_d4 = (float)DAT_102b8e94;
  }
  else {
    local_b0 = DAT_102b71d8;
    local_a0 = DAT_1028b430;
    local_d4 = (float)DAT_102b71d4;
  }
  local_7c = param_1;
  local_e0 = (undefined4 ***)FUN_100fcb39();
  local_108 = (undefined4 ****)local_d4;
  local_10c = (undefined4 ****)0x2a;
  local_88 = FUN_100fcb39();
  local_10c = (undefined4 ****)0x2a;
  local_108 = (undefined4 ****)local_a0;
  local_8c = FUN_100fcb39();
  local_108 = local_b0;
  local_10c = (undefined4 ****)0x3c;
  local_d4 = (float)FUN_100fcb39();
  ppppuVar10 = local_7c;
  if (*(int *)((int)param_3 + 0x434) == 0) {
    bVar12 = true;
  }
  else {
    bVar12 = 0 < *(int *)(*(int *)((int)param_3 + 0x434) + 0x24);
  }
  local_dc = iVar11;
  local_c8 = param_2;
  if (*(char *)(param_4 + 0xb0) != '\x01') goto LAB_1011d471;
  local_2c = *(undefined4 *****)(param_4 + 0x34);
  pppuStack_28 = *(undefined4 ****)(param_4 + 0x38);
  fStack_24 = (float)*(undefined8 *)(param_4 + 0x3c) + (float)local_2c;
  fStack_20 = (float)((ulonglong)*(undefined8 *)(param_4 + 0x3c) >> 0x20) + (float)pppuStack_28;
  local_a0 = (float)CONCAT31(local_a0._1_3_,bVar12);
  if ((*(int *)(param_4 + 0xb8) == -1 & bVar12) == 1) {
    uStack_a8 = 0;
    uStack_a4 = 0;
    local_b0 = local_2c;
    pppuStack_ac = pppuStack_28;
    fVar13 = (float10)FUN_101155f9();
    local_80 = (float)fVar13;
    pppuStack_28 = (undefined4 ***)((float)pppuStack_ac + local_80);
LAB_1011cfcc:
    if (*(char *)(param_4 + 0xb1) == '\x01') goto LAB_1011cfd9;
    bVar2 = local_a0._0_1_;
  }
  else {
    if (*(int *)(param_4 + 0xb8) == -1) goto LAB_1011cfcc;
LAB_1011cfd9:
    iVar11 = 0;
    do {
      local_104 = *(float *)(local_dc + 0xdec);
      local_3c = (undefined4 ****)ppppuVar10[0x14];
      pppuStack_38 = ppppuVar10[0x15];
      uStack_34 = CONCAT44((float)((ulonglong)*(undefined8 *)(ppppuVar10 + 0x16) >> 0x20) +
                           (float)pppuStack_38,
                           (float)*(undefined8 *)(ppppuVar10 + 0x16) + (float)local_3c);
      local_108 = &local_3c;
      local_10c = &local_2c;
      local_fc = FUN_10194f0c();
      local_100 = ppppuVar10[0x22];
      local_104 = (float)local_e0;
      local_108 = (undefined4 ****)&fStack_24;
      local_10c = &local_2c;
      FUN_1018b85a();
      iVar11 = iVar11 + 1;
    } while (local_c4 != iVar11);
    iVar11 = local_dc;
    param_2 = local_c8;
    bVar2 = *(byte *)(param_4 + 0xb0) & local_a0._0_1_;
  }
  if (((bVar2 == 0) || (*(int *)(param_4 + 0xb8) != -1)) || (*(char *)(param_4 + 0xb1) != '\x01'))
  goto LAB_1011d471;
  local_104 = 0.0;
  local_108 = (undefined4 *****)0x0;
  local_10c = &local_2c;
  FUN_1012b7db();
  local_c0 = local_2c;
  uStack_bc = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  local_6c = pppuStack_28;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  if ((param_2 == 0) || (*(int *)(param_2 + 0x30) == 0)) {
    if ((*(byte *)((int)ppppuVar10 + 0xe) & 0x80) == 0) {
      local_e0 = *(undefined4 ****)(iVar11 + 0xd24);
      local_108 = ppppuVar10;
      goto LAB_1011d124;
    }
  }
  else if ((*(byte *)(param_2 + 0x11) & 0x30) == 0) {
    local_c0 = (undefined4 ****)
               ((float)local_2c +
               *(float *)(*(int *)(param_2 + 0x30) + 0x4c) + *(float *)(iVar11 + 0xd24));
    uStack_bc = 0;
    uStack_b8 = 0;
    uStack_b4 = 0;
  }
  else {
    local_e0 = *(undefined4 ****)(iVar11 + 0xd24);
    local_108 = (undefined4 ****)**(int **)(param_2 + 0x2c);
LAB_1011d124:
    local_10c = &local_3c;
    FUN_101515cb();
    local_c0 = (undefined4 ****)((float)local_c0 + (float)local_e0 + (float)local_3c);
    iVar11 = local_dc;
  }
  iVar8 = *(int *)((int)param_3 + 0x434);
  pppppuVar9 = (undefined4 *****)0x0;
  local_cc = (undefined4 *****)0x1;
  if (iVar8 == 0) {
    local_d0 = 0;
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(iVar8 + 0x30);
    if (iVar6 == 0) {
      local_d0 = 0;
      iVar6 = 0;
    }
    else {
      local_cc = *(undefined4 *****)(iVar6 + 4);
      local_d0 = CONCAT31((int3)((uint)iVar8 >> 8),1);
      if ((int)local_cc < 1) goto LAB_1011d471;
    }
  }
  do {
    local_d8 = iVar6;
    fVar14 = param_3;
    if ((((char)local_d0 == '\0') ||
        (fVar14 = *(float *)(*(int *)(local_d8 + 0xc) + 8 + (int)pppppuVar9 * 0x30), fVar14 != 0.0))
       && (local_b0 = pppppuVar9, cVar3 = FUN_1012bd5f(), pppppuVar9 = (undefined4 *****)local_b0,
          cVar3 != '\0')) {
      local_10c = &local_44;
      local_108 = (undefined4 ****)fVar14;
      FUN_101515cb();
      local_3c = local_c0;
      pppuStack_38 = local_6c;
      local_5c = local_44;
      pppuStack_58 = pppuStack_40;
      uStack_54 = 0;
      uStack_50 = 0;
      uStack_34 = CONCAT44((float)local_6c + (float)pppuStack_40,(float)local_c0 + (float)local_44);
      local_90 = *(float *)(iVar11 + 0xd24);
      local_10c = *(undefined4 *****)((int)fVar14 + 0x40c);
      local_108 = (undefined4 ****)0x3f800000;
      uVar4 = FUN_100fcc12();
      local_10c = *(undefined4 *****)((int)fVar14 + 0x418);
      local_108 = (undefined4 ****)0x3f800000;
      local_a0 = (float)FUN_100fcc12();
      local_10c = *(undefined4 *****)((int)fVar14 + 0x42c);
      local_108 = (undefined4 ****)0x3f800000;
      uVar5 = FUN_100fcc12();
      local_10c = (undefined4 ****)0x0;
      local_108 = (undefined4 ****)uVar4;
      FUN_100fcc65();
      local_10c = (undefined4 ****)0x3a;
      local_108 = (undefined4 ****)uVar5;
      FUN_100fcc65();
      iVar11 = 0;
      local_e0 = (undefined4 ***)fVar14;
      do {
        fVar14 = (float)(*(uint *)((int)local_e0 + 0xc) >> 0x12 & 1);
        if (((((float)local_3c < (float)local_2c) || ((float)pppuStack_38 < (float)pppuStack_28)) ||
            (fStack_24 < (float)(undefined4 *****)uStack_34)) ||
           (fStack_20 < (float)uStack_34._4_4_)) {
          ppppuVar10 = (undefined4 ****)local_1c[iVar11];
          local_108 = (undefined4 ****)&fStack_24;
          local_10c = &local_2c;
          local_104 = 0.0;
          FUN_101881b4();
        }
        else {
          ppppuVar10 = (undefined4 ****)local_1c[iVar11];
        }
        local_100 = (undefined4 ***)local_a0;
        local_10c = ppppuVar10;
        local_108 = &local_3c;
        local_104 = fVar14;
        FUN_10150c41();
        local_f8 = *(undefined4 *)((int)local_e0 + 4);
        local_100 = *(undefined4 ****)(local_dc + 0xd0c);
        local_fc = *(undefined4 *)(local_dc + 0xd10);
        local_f4 = 0;
        uStack_f0 = 0;
        uStack_ec = 0;
        uStack_e8 = 0;
        local_e4 = 0;
        local_10c = ppppuVar10;
        local_108 = &local_3c;
        local_104 = fVar14;
        FUN_101510ff();
        if ((((float)local_3c < (float)local_2c) || ((float)pppuStack_38 < (float)pppuStack_28)) ||
           ((fStack_24 < (float)(undefined4 *****)uStack_34 || (fStack_20 < (float)uStack_34._4_4_))
           )) {
          FUN_10188384();
        }
        iVar11 = iVar11 + 1;
      } while (local_c4 != iVar11);
      local_c0 = (undefined4 ****)((float)local_c0 + (float)local_5c + local_90);
      local_10c = (undefined4 *****)0x2;
      FUN_100fce8e();
      pppppuVar9 = (undefined4 *****)local_b0;
      param_2 = local_c8;
      iVar11 = local_dc;
    }
    pppppuVar9 = (undefined4 *****)((int)pppppuVar9 + 1);
    iVar6 = local_d8;
  } while (pppppuVar9 != (undefined4 *****)local_cc);
LAB_1011d471:
  local_108 = *(undefined4 *****)(iVar11 + 0xd14);
  local_10c = (undefined4 *****)0x40400000;
  fVar13 = (float10)FUN_100fdbca();
  local_e0 = (undefined4 ***)(float)fVar13;
  iVar8 = param_4 + 0xc0;
  pppppuVar9 = (undefined4 *****)0xffffffff;
  local_d0 = iVar8;
  local_84 = local_e0;
  while (pppppuVar9 != (undefined4 *****)0x4) {
    pppppuVar1 = (undefined4 *****)((int)pppppuVar9 + 1);
    iVar6 = (int)pppppuVar1 * 0x10;
    pfVar7 = (float *)(iVar8 + 8 + iVar6);
    if ((*(float *)(iVar8 + iVar6) < *pfVar7 || *(float *)(iVar8 + iVar6) == *pfVar7) &&
       (fVar14 = *(float *)(iVar8 + 4 + iVar6), pfVar7 = (float *)(iVar8 + 0xc + iVar6),
       fVar14 < *pfVar7 || fVar14 == *pfVar7)) {
      pfVar7 = (float *)(iVar6 + iVar8);
      local_2c = (undefined4 ****)*pfVar7;
      pppuStack_28 = (undefined4 ***)pfVar7[1];
      fStack_24 = pfVar7[2];
      fStack_20 = pfVar7[3];
      local_3c = (undefined4 ****)(*pfVar7 + _DAT_102b8ea0);
      pppuStack_38 = (undefined4 ***)(pfVar7[1] + _UNK_102b8ea4);
      uStack_34 = CONCAT44(pfVar7[3] + _UNK_102b8eac,pfVar7[2] + _UNK_102b8ea8);
      if ((*(undefined4 ******)(param_4 + 0xb8) != pppppuVar9) ||
         (local_d8 = local_8c, *(char *)(param_4 + 0xb3) == '\0')) {
        local_d8 = local_88;
      }
      iVar6 = 0;
      local_cc = pppppuVar1;
      local_c0 = pppppuVar9;
      do {
        local_7c = local_3c;
        uStack_78 = 0;
        uStack_74 = 0;
        uStack_70 = 0;
        local_a0 = ((float)pppuStack_38 + (float)uStack_34._4_4_) * DAT_102b70e0;
        uStack_9c = 0;
        uStack_98 = 0;
        uStack_94 = 0;
        local_b0 = (undefined4 *****)uStack_34;
        local_fc = 0;
        local_100 = local_e0;
        local_104 = (float)local_d8;
        local_108 = (undefined4 ****)&fStack_24;
        local_10c = &local_2c;
        FUN_1018b85a();
        local_f8 = 0;
        local_100 = local_e0;
        local_104 = local_d4;
        local_108 = (undefined4 ****)&uStack_34;
        local_10c = &local_3c;
        local_fc = 0x3f800000;
        FUN_1018b762();
        if (local_c0 < (undefined4 *****)0x2) {
          fVar14 = ((float)local_7c + (float)local_b0) * DAT_102b70e0;
          local_4c = (undefined4 ****)
                     (float)(int)((int)fVar14 - (uint)(fVar14 < 0.0 && (float)(int)fVar14 != fVar14)
                                 );
          pppuStack_40 = uStack_34._4_4_;
          local_48 = pppuStack_38;
          local_104 = local_d4;
          local_108 = &local_44;
          local_10c = &local_4c;
          local_100 = (undefined4 ****)0x3f800000;
          local_44 = local_4c;
          FUN_1018b2de();
        }
        if (((uint)pppppuVar9 & 0xfffffffe) == 2) {
          local_48 = (undefined4 ***)
                     (float)(int)((int)local_a0 -
                                 (uint)((float)(int)local_a0 != local_a0 && local_a0 < 0.0));
          local_44 = (undefined4 *****)uStack_34;
          local_4c = local_3c;
          local_104 = local_d4;
          local_108 = &local_44;
          local_10c = &local_4c;
          local_100 = (undefined4 ****)0x3f800000;
          pppuStack_40 = local_48;
          FUN_1018b2de();
        }
        iVar6 = iVar6 + 1;
        iVar8 = local_d0;
        param_2 = local_c8;
        iVar11 = local_dc;
        pppppuVar1 = (undefined4 *****)local_cc;
      } while (local_c4 != iVar6);
    }
    pppppuVar9 = pppppuVar1;
    if (((param_2 != 0) && ((*(byte *)(param_2 + 0x10) & 0x10) != 0)) ||
       (*(char *)(iVar11 + 0x6c) == '\x01')) break;
  }
  if (DAT_10388d00 != (local_1c[2] ^ (uint)&local_10c)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return;
}

