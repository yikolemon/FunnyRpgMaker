/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1015f87f */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_1015f87f(undefined4 param_1,int param_2,uint param_3,uint param_4,undefined8 *param_5,
            float param_6)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  byte bVar10;
  int iVar11;
  int *piVar12;
  uint uVar13;
  int *piVar14;
  short sVar15;
  uint uVar16;
  undefined4 uVar17;
  int iVar18;
  int iVar19;
  int *unaff_FS_OFFSET;
  bool bVar20;
  float10 fVar21;
  uint uVar22;
  uint uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 local_ec;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 local_dc;
  undefined4 uStack_d8;
  int iStack_d4;
  undefined4 uStack_d0;
  undefined4 local_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 local_bc;
  int iStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 local_70;
  undefined4 local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  int local_58;
  float local_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  uint local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  uint local_30;
  int local_2c;
  int local_28;
  int *local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_ec;
  local_14 = 0xffffffff;
  local_18 = &LAB_1016a600;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  local_28 = DAT_1039d74c;
  *(undefined1 *)(*(int *)(DAT_1039d74c + 0x14cc) + 0xfb) = 1;
  local_2c = *(int *)(local_28 + 0x14cc);
  if (*(char *)(local_2c + 0xfe) != '\0') {
    uVar17 = 0;
    goto code_r0x10160827;
  }
  FUN_1010c3e4(&local_70);
  if ((param_4 & 0x3000000) == 0) {
    local_24 = (int *)0x0;
  }
  else {
    fVar21 = (float10)FUN_100fdbca(local_6c,0x40800000);
    local_68 = (float)fVar21;
    local_24 = (int *)local_68;
  }
  fVar21 = (float10)FUN_100fdbca(local_70,0x40800000);
  FUN_1010c427(&local_ec,*(undefined4 *)param_5,*(undefined4 *)((int)param_5 + 4),(float)fVar21,
               local_24);
  local_54 = *(float *)(local_2c + 0x144);
  fStack_50 = *(float *)(local_2c + 0x148);
  fStack_4c = (float)(int)(float)local_ec + local_54;
  fStack_48 = (float)(int)(float)((ulonglong)local_ec >> 0x20) + fStack_50;
  local_38 = CONCAT31(local_38._1_3_,1);
  if (*(char *)(local_2c + 0x118) < '\x01') {
    local_38 = CONCAT31(local_38._1_3_,'\0' < *(char *)(local_2c + 0x119));
  }
  if ((param_4 & 0x3000000) != 0) {
    bVar10 = FUN_10103133(&local_54,0);
    if (((~bVar10 | (byte)local_38) & 1) == 0) {
      local_ec = CONCAT44(fStack_48 - fStack_50,fStack_4c - local_54);
      FUN_1010c810(&local_ec,0xbf800000);
      uVar17 = 0;
      FUN_1010c9d8(&local_54,param_2,0,0);
      *(undefined4 *)(local_28 + 0x1ed0) = 0;
      goto code_r0x10160827;
    }
  }
  iVar19 = local_28;
  if (*(int *)(local_28 + 0x230c) == param_2) {
    pcVar4 = (code *)swi(3);
    uVar17 = (*pcVar4)();
    return uVar17;
  }
  local_24 = (int *)FUN_101608ae(param_2);
  local_30 = (int)local_24 - *(int *)(iVar19 + 9000);
  iVar18 = *(int *)(iVar19 + 0x2310);
  iVar11 = iVar18 + 1;
  *(int *)(iVar19 + 0x2310) = iVar11;
  if (*(int *)(iVar19 + 0x2314) <= iVar18) {
    FUN_101608e6();
    local_14 = 3;
    local_34 = *(int *)(local_28 + 0x2310);
    iVar19 = *(int *)(local_28 + 0x2318);
    if (iVar19 < local_34) {
      if (iVar19 == 0) {
        local_3c = 8;
      }
      else {
        local_3c = iVar19 / 2 + iVar19;
      }
      if (local_3c <= local_34) {
        local_3c = local_34;
      }
      iVar11 = FUN_100fa1fa(local_3c * 0x7c);
      iVar19 = local_28;
      if (*(int *)(local_28 + 0x231c) != 0) {
        FUN_1025b2d0(iVar11,*(int *)(local_28 + 0x231c),*(int *)(local_28 + 0x2314) * 0x7c);
        local_40 = iVar11;
        FUN_100fa2cb(*(undefined4 *)(iVar19 + 0x231c));
        iVar11 = local_40;
      }
      *(int *)(local_28 + 0x231c) = iVar11;
      *(int *)(local_28 + 0x2318) = local_3c;
    }
    iVar11 = local_28;
    iVar19 = *(int *)(local_28 + 0x2314);
    iVar18 = local_34 - iVar19;
    if (iVar18 != 0 && iVar19 <= local_34) {
      iVar19 = iVar19 * 0x7c;
      do {
        FUN_1025b2d0(*(int *)(iVar11 + 0x231c) + iVar19,&local_ec,0x7c);
        iVar19 = iVar19 + 0x7c;
        iVar18 = iVar18 + -1;
      } while (iVar18 != 0);
    }
    *(int *)(iVar11 + 0x2314) = local_34;
    local_14 = 0;
    FUN_10187cd0();
    local_14 = 0xffffffff;
    if (iStack_b8 != 0) {
      FUN_100fa2cb(iStack_b8);
    }
    if (iStack_d4 != 0) {
      FUN_100fa2cb(iStack_d4);
    }
    iVar11 = *(int *)(local_28 + 0x2310);
    iVar19 = local_28;
  }
  local_3c = ((int)local_30 >> 2) * 0xfe03f81;
  local_34 = *(int *)(iVar19 + 0x231c);
  iVar18 = local_34 + iVar11 * 0x7c;
  local_24[3] = iVar18 + -0x7c;
  *(int *)(iVar18 + -0x78) = local_3c;
  iVar18 = local_24[3];
  local_24[0x5a] = iVar18 + 0x24;
  *(undefined4 *)(iVar18 + 0x24) = 0;
  *(undefined4 *)(iVar18 + 0x28) = 1;
  uVar13 = param_4 & 0xe000;
  *(bool *)((int)local_24 + 0x1fa) = uVar13 == 0;
  uVar16 = param_4;
  if (uVar13 == 0) {
    uVar13 = 0x2000;
    if (((param_4 >> 0x18 & 1) == 0) && (uVar13 = 0x2000, (*(byte *)(local_2c + 0xc) & 0x40) == 0))
    {
      uVar13 = 0x8000;
    }
    uVar16 = uVar13 | param_4;
    iVar19 = local_28;
  }
  local_34 = local_34 + iVar11 * 0x7c;
  uVar22 = uVar16 | 0x40000;
  if (uVar13 != 0x4000) {
    uVar22 = uVar16;
  }
  uVar16 = uVar22 & 0xfffcffff;
  if ((uVar22 & 0x3000000) == 0) {
    uVar16 = uVar22;
  }
  uVar13 = uVar16 & 0xfffff7ff;
  if ((uVar16 >> 0xc & 1) == 0) {
    uVar13 = uVar16;
  }
  local_30 = (uVar22 & 1) << 9 | uVar13;
  uVar16 = local_30 | 0x10;
  if ((uVar13 & 0xf) == 0) {
    local_30 = uVar16;
  }
  if ((*(byte *)(*(int *)(local_2c + 0x3a8) + 0xd) & 1) != 0) {
    local_30 = uVar16;
  }
  local_58 = local_24[0xf];
  local_40 = 0;
  if (local_58 == *(int *)(iVar19 + 4)) {
    local_40 = (short)local_24[0x13] + 1;
  }
  local_44 = local_24[1];
  *local_24 = param_2;
  local_24[1] = local_30;
  local_24[0xf] = *(int *)(local_28 + 4);
  local_24[0x56] = local_2c;
  local_24[0x55] = local_2c;
  local_24[0x10] = param_3;
  *(undefined1 *)((int)local_24 + 0x1ed) = 0;
  local_24[0x28] = (int)param_6;
  *(undefined1 *)(local_24 + 0x7b) = *(undefined1 *)(local_2c + 0x19c);
  *(undefined8 *)(local_34 + -0x60) = *param_5;
  sVar15 = (short)local_40;
  *(short *)(local_24 + 0x13) = sVar15;
  iVar19 = param_2;
  if (0 < local_40) {
    iVar19 = local_24[0x61];
    piVar12 = local_24;
    if (iVar19 < local_40) {
      if (iVar19 == local_24[0x62]) {
        if (iVar19 == 0) {
          iVar11 = 8;
        }
        else {
          iVar11 = iVar19 / 2 + iVar19;
        }
        iVar18 = iVar19 + 1;
        if (iVar19 + 1 < iVar11) {
          iVar18 = iVar11;
        }
        iVar11 = FUN_100fa1fa(iVar18 * 0x18);
        piVar12 = local_24;
        if (local_24[99] != 0) {
          FUN_1025b2d0(iVar11,local_24[99],local_24[0x61] * 0x18);
          FUN_100fa2cb(piVar12[99]);
        }
        piVar12[99] = iVar11;
        piVar12[0x62] = iVar18;
        iVar19 = piVar12[0x61];
      }
      else {
        iVar11 = local_24[99];
      }
      puVar1 = (undefined4 *)(iVar11 + iVar19 * 0x18);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      *(undefined4 *)(iVar11 + 0x10 + iVar19 * 0x18) = 0xffffffff;
      *(undefined4 *)(iVar11 + 0x14 + iVar19 * 0x18) = 0xffffffff;
      piVar12[0x61] = piVar12[0x61] + 1;
    }
    uVar17 = FUN_101134c2("##Instances",0,param_2);
    iVar19 = FUN_10113506(local_40,uVar17);
    sVar15 = (short)piVar12[0x13];
  }
  if (sVar15 == 0) {
    piVar12 = local_24 + 0x5b;
  }
  else {
    piVar12 = (int *)(local_24[99] + sVar15 * 0x18 + -0x18);
  }
  *piVar12 = iVar19;
  if ((param_4 & 0x3000000) == 0) {
    local_24[0x35] = (int)local_54;
    local_24[0x36] = (int)fStack_50;
    local_24[0x37] = (int)fStack_4c;
    local_24[0x38] = (int)fStack_48;
    local_24[0x31] = (int)local_54;
    local_24[0x32] = (int)fStack_50;
    local_24[0x33] = (int)fStack_4c;
    local_24[0x34] = (int)fStack_48;
    local_24[0x39] = (int)local_54;
    local_24[0x3a] = (int)fStack_50;
    local_24[0x3b] = (int)fStack_4c;
    local_24[0x3c] = (int)fStack_48;
    *(undefined2 *)((int)local_24 + 0x1fd) = 0;
    *(int *)(local_24[0x56] + 0x1cc) = *(int *)(local_24[0x56] + 0x1cc) + 1;
  }
  else {
    uVar16 = local_30 & 0x1000000;
    bVar20 = 0.0 < param_6;
    if (uVar16 == 0) {
      param_6 = DAT_102b89b4;
    }
    fVar24 = (float)(~-(uint)bVar20 & (uint)DAT_102b89b4 | (uint)param_6 & -(uint)bVar20);
    if (fVar24 != DAT_102b89b4 || (local_30 & 0x3000000) == 0x1000000) {
      uVar17 = DAT_102b9690;
      if ((local_30 & 0x3000000) != 0x1000000) {
        uVar17 = 0;
      }
      local_ec = CONCAT44(uVar17,-(uint)(DAT_102b89b4 != fVar24) & (uint)fVar24);
      FUN_10111df6(&local_ec);
    }
    if (((local_44 & 0x3000000) == 0) && ((*(byte *)(local_28 + 0x1ed0) & 0x80) == 0)) {
      local_ec = 0;
      FUN_10111e1a(&local_ec);
    }
    uVar13 = 0;
    uVar17 = 0;
    if ((*(uint *)(local_28 + 0x1ed0) >> 9 & 1) != 0) {
      uVar17 = *(undefined4 *)(local_28 + 0x1f10);
    }
    if ((*(uint *)(local_28 + 0x1ed0) >> 8 & 1) != 0) {
      uVar13 = *(uint *)(local_28 + 0x1f0c);
    }
    local_ec = CONCAT44(fStack_48 - fStack_50,fStack_4c - local_54);
    FUN_1010c0c7(param_1,iVar19,&local_ec,uVar17,uVar16 >> 0xd | uVar13);
    iVar11 = *(int *)(local_28 + 0x14cc);
    local_24[0x56] = iVar11;
    iVar18 = *(int *)(iVar11 + 0x270);
    iVar5 = *(int *)(iVar11 + 0x274);
    iVar6 = *(int *)(iVar11 + 0x278);
    local_24[0x39] = *(int *)(iVar11 + 0x26c);
    local_24[0x3a] = iVar18;
    local_24[0x3b] = iVar5;
    local_24[0x3c] = iVar6;
    uVar2 = *(undefined8 *)(iVar11 + 0x50);
    uVar3 = *(undefined8 *)(iVar11 + 0x58);
    *(undefined8 *)(local_24 + 0x31) = uVar2;
    *(ulonglong *)(local_24 + 0x33) =
         CONCAT44((float)((ulonglong)uVar3 >> 0x20) + (float)((ulonglong)uVar2 >> 0x20),
                  (float)uVar3 + (float)uVar2);
    iVar18 = *(int *)(iVar11 + 0x250);
    iVar5 = *(int *)(iVar11 + 0x254);
    iVar6 = *(int *)(iVar11 + 600);
    local_24[0x35] = *(int *)(iVar11 + 0x24c);
    local_24[0x36] = iVar18;
    local_24[0x37] = iVar5;
    local_24[0x38] = iVar6;
    if (((byte)local_38 & *(byte *)(iVar11 + 0xfe)) == 1) {
      *(undefined1 *)(iVar11 + 0xfe) = 0;
    }
    bVar10 = *(byte *)((int)local_24 + 0x1fd);
    if (local_40 == 0) {
      *(byte *)((int)local_24 + 0x1fe) = bVar10;
      *(undefined1 *)((int)local_24 + 0x1fd) = 0;
      bVar10 = 0;
    }
    *(byte *)((int)local_24 + 0x1fd) = bVar10 | *(byte *)(local_24[0x56] + 0xf5);
  }
  FUN_10113406(param_2);
  if (0 < local_40) {
    FUN_10113406(iVar19);
  }
  piVar12 = local_24;
  local_38 = local_24[0x56];
  local_24[0x22] = *(int *)(local_38 + 0x188);
  iVar19 = *(int *)(local_38 + 0x290);
  iVar11 = *(int *)(local_38 + 0x294);
  iVar18 = *(int *)(local_38 + 0x298);
  local_24[0x4d] = *(int *)(local_38 + 0x28c);
  local_24[0x4e] = iVar19;
  local_24[0x4f] = iVar11;
  local_24[0x50] = iVar18;
  *(undefined1 *)(local_24 + 0x80) = *(undefined1 *)(local_38 + 0xfe);
  *(undefined4 *)(local_34 + -0x7c) = *(undefined4 *)(local_38 + 8);
  uVar17 = *(undefined4 *)(local_38 + 0x270);
  uVar7 = *(undefined4 *)(local_38 + 0x274);
  uVar8 = *(undefined4 *)(local_38 + 0x278);
  *(undefined4 *)(local_34 + -0x44) = *(undefined4 *)(local_38 + 0x26c);
  *(undefined4 *)(local_34 + -0x40) = uVar17;
  *(undefined4 *)(local_34 + -0x3c) = uVar7;
  *(undefined4 *)(local_34 + -0x38) = uVar8;
  uVar17 = *(undefined4 *)(local_38 + 0x280);
  uVar7 = *(undefined4 *)(local_38 + 0x284);
  uVar8 = *(undefined4 *)(local_38 + 0x288);
  *(undefined4 *)(local_34 + -0x34) = *(undefined4 *)(local_38 + 0x27c);
  *(undefined4 *)(local_34 + -0x30) = uVar17;
  *(undefined4 *)(local_34 + -0x2c) = uVar7;
  *(undefined4 *)(local_34 + -0x28) = uVar8;
  *(undefined4 *)(local_34 + -0xc) = *(undefined4 *)(local_2c + 0x18c);
  *(undefined8 *)(local_34 + -0x24) = *(undefined8 *)(local_38 + 0x174);
  *(undefined8 *)(local_34 + -0x1c) = *(undefined8 *)(local_38 + 0x16c);
  *(undefined8 *)(local_34 + -0x14) = *(undefined8 *)(local_38 + 0x15c);
  *(undefined4 *)(local_34 + -8) = *(undefined4 *)(local_2c + 0x218);
  *(undefined4 *)(local_34 + -4) = *(undefined4 *)(local_2c + 0x224);
  *(undefined4 *)(local_38 + 0x16c) = 0;
  *(undefined4 *)(local_38 + 0x170) = 0;
  *(undefined4 *)(local_38 + 0x174) = 0;
  *(undefined4 *)(local_38 + 0x178) = 0;
  if (local_38 != local_2c) {
    if ((local_30 >> 10 & 1) != 0) {
      fVar21 = (float10)FUN_100ea38a((float)local_24[0x4d] + DAT_1028b430,local_24[0x4f]);
      piVar14 = local_24;
      local_64 = (float)fVar21;
      piVar12[0x4d] = (int)local_64;
      if ((*(float *)(local_38 + 0xa0) == 0.0) && (!NAN(*(float *)(local_38 + 0xa0)))) {
        fVar21 = (float10)FUN_100fdbca((float)local_24[0x4f] + DAT_102b8a50,local_64);
        piVar14[0x4f] = (int)(float)fVar21;
      }
    }
    piVar12 = local_24;
    if ((local_30 >> 8 & 1) != 0) {
      fVar21 = (float10)FUN_100ea38a((float)local_24[0x4e] + DAT_1028b430,local_24[0x50]);
      piVar14 = local_24;
      local_60 = (float)fVar21;
      piVar12[0x4e] = (int)local_60;
      if ((*(float *)(local_38 + 0xa4) == 0.0) && (!NAN(*(float *)(local_38 + 0xa4)))) {
        fVar21 = (float10)FUN_100fdbca((float)local_24[0x50] + DAT_102b8a50,local_60);
        piVar14[0x50] = (int)(float)fVar21;
      }
    }
  }
  piVar12 = local_24;
  iVar19 = local_38;
  fVar24 = 0.0;
  fVar26 = 0.0;
  if ((local_30 >> 9 & 1) != 0) {
    fVar26 = DAT_1028b430;
  }
  if ((local_30 & 0x800200) == 0x200) {
    fVar24 = *(float *)(local_28 + 0xd2c);
LAB_10160269:
    fVar25 = 0.0;
  }
  else {
    if ((local_30 & 0x800200) != 0) goto LAB_10160269;
    fVar25 = *(float *)(local_28 + 0xd2c);
  }
  local_24[0x26] = (int)(fVar26 + fVar25);
  local_24[0x27] = (int)fVar25;
  local_24[0x25] = (int)fVar24;
  fVar26 = 0.0;
  fVar25 = 0.0;
  if ((local_30 >> 10 & 1) != 0) {
    fVar25 = DAT_1028b430;
  }
  if ((local_30 >> 0x16 & 1) == 0 && (local_30 & 0x200400) != 0) {
    fVar26 = *(float *)(local_28 + 0xd2c);
  }
  local_24[0x24] = (int)((fVar25 + fVar26) - fVar24);
  local_24[0x12] = -1;
  local_24[0x11] = -1;
  local_24[0x1b] = 0;
  piVar14 = (int *)(local_38 + 0x28c);
  if (local_38 == local_2c) {
    piVar14 = local_24 + 0x39;
  }
  local_24[0x1a] = (uint)*(ushort *)(local_24 + 0x1a);
  iVar11 = piVar14[1];
  iVar18 = piVar14[2];
  iVar5 = piVar14[3];
  local_24[0x3d] = *piVar14;
  local_24[0x3e] = iVar11;
  local_24[0x3f] = iVar18;
  local_24[0x40] = iVar5;
  uVar16 = -(uint)((float)local_24[0x39] <= (float)local_24[0x3d]);
  uVar13 = -(uint)((float)local_24[0x3a] <= (float)local_24[0x3e]);
  uVar22 = -(uint)((float)local_24[0x3f] < (float)local_24[0x3b]);
  uVar23 = -(uint)((float)local_24[0x40] < (float)local_24[0x3c]);
  local_24[0x3d] = ~uVar16 & local_24[0x39] | local_24[0x3d] & uVar16;
  local_24[0x3e] = ~uVar13 & local_24[0x3a] | local_24[0x3e] & uVar13;
  local_24[0x3f] = ~uVar22 & local_24[0x3b] | local_24[0x3f] & uVar22;
  local_24[0x40] = ~uVar23 & local_24[0x3c] | local_24[0x40] & uVar23;
  FUN_1010fa6a(local_24 + 0x4d);
  if ((local_30 >> 0x11 & 1) == 0) {
    fVar24 = (float)piVar12[0x50];
  }
  else {
    fVar21 = (float10)FUN_100ea38a(piVar12[0x40],*(undefined4 *)(iVar19 + 0x278));
    fVar24 = (float)fVar21;
    local_5c = fVar24;
  }
  piVar12[0x40] = (int)fVar24;
  piVar12[0x15] = piVar12[0x3a];
  piVar12[0x14] = piVar12[0x3a];
  piVar12[0x17] = 0;
  piVar12[0x18] = 0;
  piVar12[0x78] = 0;
  piVar12[0x77] = 0;
  *(undefined1 *)((int)piVar12 + 0x1f9) = 1;
  *(undefined4 *)((int)piVar12 + 0x1ba) = 0;
  if (local_58 + 1 < *(int *)(local_28 + 4)) {
    *(undefined1 *)(piVar12 + 0x7f) = 0;
  }
  piVar12[0x2f] = 0;
  *(undefined4 *)(local_34 + -0x70) = 0;
  iVar19 = FUN_100fcb39(0x31,0x3f800000);
  piVar12[0x1e] = iVar19;
  iVar19 = FUN_100fcb39(0x32,0x3f800000);
  piVar12[0x1f] = iVar19;
  *(int **)(local_28 + 0x2308) = piVar12;
  *(undefined1 *)(local_38 + 0x1a4) = 0;
  *(int *)(local_2c + 0x1ec) = local_3c;
  if (local_38 != local_2c) {
    *(int *)(local_38 + 0x1ec) = local_3c;
  }
  if (((local_30 & 2) == 0) && (local_44 = local_44 & 2, local_44 != 0)) {
    *(undefined1 *)(local_24 + 0x7e) = 1;
  }
  iVar19 = *(int *)(local_28 + 0x2340);
  if (iVar19 <= local_3c) {
    iVar11 = local_3c + 1;
    iVar18 = *(int *)(local_28 + 0x2344);
    if (iVar18 <= local_3c) {
      if (iVar18 == 0) {
        iVar18 = 8;
      }
      else {
        iVar18 = iVar18 / 2 + iVar18;
      }
      if (iVar18 <= iVar11) {
        iVar18 = iVar11;
      }
      local_2c = FUN_100fa1fa(iVar18 * 4);
      iVar19 = local_28;
      if (*(int *)(local_28 + 0x2348) != 0) {
        FUN_1025b2d0(local_2c,*(int *)(local_28 + 0x2348),*(int *)(local_28 + 0x2340) << 2);
        FUN_100fa2cb(*(undefined4 *)(iVar19 + 0x2348));
      }
      *(int *)(iVar19 + 0x2348) = local_2c;
      *(int *)(iVar19 + 0x2344) = iVar18;
      iVar19 = *(int *)(iVar19 + 0x2340);
    }
    if (iVar19 <= local_3c) {
      do {
        *(undefined4 *)(*(int *)(local_28 + 0x2348) + iVar19 * 4) = 0xbf800000;
        iVar19 = iVar19 + 1;
      } while (iVar11 != iVar19);
    }
    *(int *)(local_28 + 0x2340) = iVar11;
  }
  piVar12 = local_24;
  *(float *)(*(int *)(local_28 + 0x2348) + local_3c * 4) = (float)*(double *)(local_28 + 0x18);
  *(float *)(local_34 + -0x74) = (float)*(double *)(local_28 + 0x18);
  local_34 = local_24[4];
  local_30 = (local_24[5] - local_34 >> 2) * 0x4f72c235;
  iVar19 = local_24[2];
  *(undefined1 *)((int)local_24 + 0x1ff) = 0;
  if ((local_24[5] == local_34) || (local_30 - param_3 == 0)) {
    local_34 = 0;
    local_2c = 0;
    bVar20 = iVar19 == 0;
    iVar19 = 0;
    if (bVar20) goto code_r0x10160587;
  }
  else {
    local_24[2] = 0;
code_r0x10160587:
    local_2c = local_34;
    local_14 = 0xffffffff;
    FUN_10160acf(local_24,param_3);
    *(undefined1 *)(piVar12 + 0x7d) = 1;
    *(undefined1 *)((int)piVar12 + 0x1ef) = 1;
    local_34 = iVar19;
  }
  if (*(char *)((int)piVar12 + 0x1f7) == '\x01') {
    FUN_10160bcc(piVar12);
  }
  if (*(char *)((int)piVar12 + 0x1ef) == '\x01') {
    piVar12[0xe] = -1;
    *(undefined1 *)(piVar12 + 0x7c) = 1;
    *(undefined1 *)((int)piVar12 + 0x1f5) = 1;
    *(undefined2 *)((int)piVar12 + 0x4e) = 0xffff;
    *(undefined2 *)((int)piVar12 + 0x1da) = 0xffff;
    *(undefined2 *)(piVar12 + 0x72) = 0xffff;
    *(undefined4 *)((int)piVar12 + 0x1ce) = 0xffffffff;
    piVar12[0x71] = -1;
    *(undefined4 *)((int)piVar12 + 0x1be) = 0xffffffff;
    if (0 < (int)param_3) {
      iVar19 = 0;
      uVar16 = 0;
      do {
        iVar11 = piVar12[4];
        puVar1 = (undefined4 *)(iVar11 + iVar19);
        if ((local_2c == 0) || ((int)local_30 <= (int)uVar16)) {
          uVar17 = *(undefined4 *)(iVar11 + 0x14 + iVar19);
          local_bc = 0;
          local_cc = 0;
          uStack_c8 = 0;
          uStack_c4 = 0;
          uStack_c0 = 0;
          local_dc = 0;
          uStack_d8 = 0;
          iStack_d4 = 0;
          uStack_d0 = 0;
          local_ec = 0;
          uStack_e4 = 0;
          uStack_e0 = 0;
          uStack_b0 = 0xffffffff;
          uStack_b4 = 0xffffffff;
          iStack_b8 = -1;
          *puVar1 = 0;
          puVar1[1] = 0;
          puVar1[2] = 0;
          puVar1[3] = 0;
          uVar9 = _UNK_102b9bac;
          uVar8 = _UNK_102b9ba8;
          uVar7 = _UNK_102b9ba4;
          puVar1 = (undefined4 *)(iVar11 + 0x10 + iVar19);
          *puVar1 = _DAT_102b9ba0;
          puVar1[1] = uVar7;
          puVar1[2] = uVar8;
          puVar1[3] = uVar9;
          puVar1 = (undefined4 *)(iVar11 + 0x20 + iVar19);
          *puVar1 = 0;
          puVar1[1] = 0;
          puVar1[2] = 0;
          puVar1[3] = 0;
          puVar1 = (undefined4 *)(iVar11 + 0x30 + iVar19);
          *puVar1 = 0;
          puVar1[1] = 0;
          puVar1[2] = 0;
          puVar1[3] = 0;
          puVar1 = (undefined4 *)(iVar11 + 0x40 + iVar19);
          *puVar1 = 0;
          puVar1[1] = 0;
          puVar1[2] = 0;
          puVar1[3] = 0;
          puVar1 = (undefined4 *)(iVar11 + 0x50 + iVar19);
          *puVar1 = 0;
          puVar1[1] = 0xffffffff;
          puVar1[2] = 0xffffffff;
          puVar1[3] = 0xffffffff;
          *(undefined4 *)(iVar11 + 0x60 + iVar19) = 0xff00ff;
          *(undefined2 *)(iVar11 + 100 + iVar19) = 0xff;
          *(undefined8 *)(iVar11 + 0x68 + iVar19) = 0;
          *(undefined4 *)(iVar11 + 0x70 + iVar19) = 0;
          *(undefined4 *)(iVar11 + 0x14 + iVar19) = uVar17;
          *(undefined1 *)(iVar11 + 0x6d + iVar19) = 1;
          *(undefined1 *)(iVar11 + 0x68 + iVar19) = 1;
          *(undefined2 *)(iVar11 + 0x66 + iVar19) = 0x101;
          *(short *)(iVar11 + 0x56 + iVar19) = (short)uVar16;
          uVar13 = uVar16;
        }
        else {
          FUN_1025b2d0(puVar1,local_2c + iVar19,0x74);
          uVar13 = (uint)*(ushort *)(iVar11 + 0x56 + iVar19);
        }
        *(short *)(local_24[6] + uVar16 * 2) = (short)uVar13;
        uVar16 = uVar16 + 1;
        iVar19 = iVar19 + 0x74;
        piVar12 = local_24;
      } while (param_3 != uVar16);
    }
  }
  if (local_34 != 0) {
    local_14 = 0xffffffff;
    FUN_100fa2cb(local_34);
  }
  piVar12 = local_24;
  if ((char)local_24[0x7d] == '\x01') {
    local_14 = 0xffffffff;
    FUN_10160bef(local_24);
  }
  fVar24 = *(float *)(local_28 + 0x1228);
  fVar26 = (float)piVar12[0x2e];
  if ((fVar26 != 0.0) || (NAN(fVar26))) {
    if (((fVar26 != fVar24) || (NAN(fVar26) || NAN(fVar24))) && (0 < (int)param_3)) {
      iVar19 = 0x10;
      do {
        *(float *)(piVar12[4] + iVar19) = *(float *)(piVar12[4] + iVar19) * (fVar24 / fVar26);
        iVar19 = iVar19 + 0x74;
        param_3 = param_3 - 1;
      } while (param_3 != 0);
    }
  }
  piVar12[0x2e] = (int)fVar24;
  *(undefined1 *)(local_38 + 0xfe) = 1;
  if (0 < piVar12[0x57]) {
    if (piVar12[0x58] < 0) {
      local_14 = 0xffffffff;
      iVar19 = FUN_100fa1fa(0);
      if (piVar12[0x59] != 0) {
        FUN_1025b2d0(iVar19,piVar12[0x59],piVar12[0x57]);
        FUN_100fa2cb(piVar12[0x59]);
      }
      piVar12[0x59] = iVar19;
      piVar12[0x58] = 0;
    }
    piVar12[0x57] = 0;
  }
  FUN_10160d69(piVar12);
  uVar17 = 1;
code_r0x10160827:
  *unaff_FS_OFFSET = local_1c;
  return uVar17;
}

