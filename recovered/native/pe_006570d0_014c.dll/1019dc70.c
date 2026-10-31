/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1019dc70 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019dc70(void)

{
  float *pfVar1;
  undefined8 uVar2;
  char cVar3;
  byte bVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  float fVar11;
  int iVar12;
  int *unaff_FS_OFFSET;
  float10 fVar13;
  unkbyte10 Var14;
  float fVar15;
  float local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  float local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  uint local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  int local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_90;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  undefined4 uStack_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined8 local_58;
  undefined8 local_50;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_128;
  local_14 = 0xffffffff;
  local_18 = &LAB_101bcd50;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  cVar3 = FUN_10107d2b();
  if (cVar3 == '\0') {
    FUN_1010ad44();
    *unaff_FS_OFFSET = local_1c;
    return;
  }
  FUN_101032c6();
  cVar3 = FUN_1014e2f8("##TabBar",0);
  if (cVar3 == '\0') goto LAB_1019f7a0;
  cVar3 = FUN_1014fafc();
  if (cVar3 != '\0') {
    FUN_101032c6();
    fVar13 = (float10)FUN_10111f20();
    local_b8 = (float)fVar13;
    FUN_1011520a(local_b8 * _DAT_103025a8);
    local_9c = FUN_10111ef5();
    FUN_1012d08c("Gradients");
    Var14 = FUN_101155f9();
    local_78 = (float)Var14;
    fStack_74 = (float)((unkuint10)Var14 >> 0x20);
    uStack_70._0_2_ = (undefined2)((unkuint10)Var14 >> 0x40);
    fVar13 = (float10)FUN_10115533();
    local_58 = CONCAT44((float)(float10)CONCAT28((undefined2)uStack_70,CONCAT44(fStack_74,local_78))
                        ,(float)fVar13);
    FUN_10114f9f(&local_38);
    local_50 = CONCAT44((float)((ulonglong)local_58 >> 0x20) + (float)((ulonglong)local_38 >> 0x20),
                        (float)local_58 + (float)local_38);
    uVar6 = FUN_100fcc12(0xff000000,0x3f800000);
    uVar7 = FUN_100fcc12(0xffffffff,0x3f800000);
    FUN_1018b8f0(&local_38,&local_50,uVar6,uVar7,uVar7,uVar6);
    FUN_1012e242();
    FUN_10114f9f(&local_38);
    local_50 = CONCAT44((float)((ulonglong)local_58 >> 0x20) + (float)((ulonglong)local_38 >> 0x20),
                        (float)local_58 + (float)local_38);
    uVar6 = FUN_100fcc12(0xff00ff00,0x3f800000);
    uVar7 = FUN_100fcc12(0xff0000ff,0x3f800000);
    FUN_1018b8f0(&local_38,&local_50,uVar6,uVar7,uVar7,uVar6);
    FUN_1012e242();
    FUN_1012d08c("All primitives");
    FUN_10137f3c("Size",&DAT_1038ef74,0x3e4ccccd,0x40000000,0x42c80000,&DAT_10338657,0);
    FUN_10137f3c("Thickness",&DAT_1038ef78,0x3d4ccccd,0x3f800000,0x41000000,"%.02f",0);
    FUN_1013d499("N-gon sides",&DAT_1038ef7c,3,0xc,&DAT_1033b386,0);
    FUN_1012ff1a("##circlesegmentoverride",&DAT_103a4c58);
    iVar8 = FUN_100fcb2d();
    FUN_10114a0e(0,*(undefined4 *)(iVar8 + 100));
    bVar4 = FUN_1013d499("Circle segments override",&DAT_1038ef80,3,0x28,&DAT_1033b386,0);
    DAT_103a4c58 = DAT_103a4c58 | bVar4;
    FUN_1012ff1a("##curvessegmentoverride",&DAT_103a4c59);
    iVar8 = FUN_100fcb2d();
    FUN_10114a0e(0,*(undefined4 *)(iVar8 + 100));
    bVar4 = FUN_1013d499("Curves segments override",&DAT_1038ef84,3,0x28,&DAT_1033b386,0);
    DAT_103a4c59 = DAT_103a4c59 | bVar4;
    FUN_101438ec();
    FUN_10114f9f(&local_50);
    local_38 = CONCAT44(uRam1038ef8c,_DAT_1038ef88);
    uStack_30 = uRam1038ef90;
    uStack_2c = uRam1038ef94;
    local_a0 = FUN_100fad3d(&local_38);
    local_94 = 0;
    uVar6 = local_a0;
    if (DAT_103a4c58 != 0) {
      local_94 = DAT_1038ef80;
      uVar6 = DAT_1038ef80;
    }
    local_c8 = DAT_1038ef74;
    uStack_c4 = 0;
    uStack_c0 = 0;
    uStack_bc = 0;
    local_98 = 0;
    if (DAT_103a4c59 != 0) {
      local_98 = DAT_1038ef84;
      uVar6 = DAT_1038ef84;
    }
    local_f8 = DAT_1038ef74 / DAT_102b7100;
    uStack_f4 = 0;
    uStack_f0 = 0;
    uStack_ec = 0;
    local_d8 = DAT_102b71d8 * DAT_1038ef74;
    fStack_d4 = 0.0;
    uStack_d0 = 0;
    uStack_cc = 0;
    local_e8 = (float)DAT_103025b0 * DAT_1038ef74;
    fStack_e4 = (float)((ulonglong)DAT_103025b0 >> 0x20) * DAT_1038ef74;
    fStack_e0 = DAT_1038ef74 * 0.0;
    fStack_dc = DAT_1038ef74 * 0.0;
    local_108 = (float)DAT_103025c0 * DAT_1038ef74;
    fStack_104 = (float)((ulonglong)DAT_103025c0 >> 0x20) * DAT_1038ef74;
    fStack_100 = DAT_1038ef74 * 0.0;
    fStack_fc = DAT_1038ef74 * 0.0;
    local_118 = DAT_1038ef74 - local_108;
    fStack_114 = DAT_1038ef74 - fStack_104;
    fStack_110 = DAT_1038ef74 - fStack_100;
    fStack_10c = DAT_1038ef74 - fStack_fc;
    local_68 = (float)local_50 + (float)DAT_103025d0;
    fStack_6c = (float)((ulonglong)local_50 >> 0x20) + DAT_103025d0._4_4_;
    fStack_60 = _UNK_103025d8 + 0.0;
    fStack_5c = _UNK_103025dc + 0.0;
    uVar9 = CONCAT31((int3)((uint)uVar6 >> 8),1);
    do {
      iVar8 = local_9c;
      uVar6 = local_a0;
      local_78 = DAT_1028b430;
      if ((char)uVar9 == '\0') {
        local_78 = DAT_1038ef78;
      }
      fVar15 = DAT_1038ef74 * DAT_102b70e0;
      local_38 = CONCAT44(fVar15 + fStack_6c,fVar15 + local_68);
      local_ac = uVar9;
      fStack_64 = fStack_6c;
      local_48 = fStack_6c;
      fStack_44 = fStack_6c;
      fStack_40 = fStack_6c;
      fStack_3c = fStack_6c;
      FUN_1018c1dc(&local_38,fVar15,local_a0,DAT_1038ef7c,local_78);
      uVar7 = local_94;
      local_88 = local_68 + DAT_1038ef74 + DAT_102b710c;
      fStack_84 = fStack_64;
      fStack_80 = fStack_60;
      fStack_7c = fStack_5c;
      fVar15 = DAT_1038ef74 * DAT_102b70e0;
      local_38 = CONCAT44(fVar15 + fStack_64,fVar15 + local_68 + DAT_1038ef74 + DAT_102b710c);
      FUN_1018bfde(&local_38,fVar15,uVar6,local_94,local_78);
      local_88 = DAT_1038ef74 + DAT_102b710c + local_88;
      fStack_84 = 0.0;
      fStack_80 = 0.0;
      fStack_7c = 0.0;
      local_38 = CONCAT44(DAT_1038ef74 * _UNK_103025e4,DAT_1038ef74 * _DAT_103025e0);
      local_28 = CONCAT44(DAT_1038ef74 * DAT_102b70e0 + fStack_64,
                          DAT_1038ef74 * DAT_102b70e0 + local_88);
      FUN_1018c312(&local_28,&local_38,uVar6,0xbe99999a,uVar7,local_78);
      local_88 = DAT_1038ef74 + DAT_102b710c + local_88;
      fStack_84 = 0.0;
      fStack_80 = 0.0;
      fStack_7c = 0.0;
      local_38 = CONCAT44(fStack_64 + DAT_1038ef74,local_88 + DAT_1038ef74);
      local_28 = CONCAT44(local_48,local_88);
      FUN_1018b762(&local_28,&local_38,uVar6,0,local_78,0);
      local_88 = DAT_1038ef74 + DAT_102b710c + local_88;
      fStack_84 = 0.0;
      fStack_80 = 0.0;
      fStack_7c = 0.0;
      local_38 = CONCAT44(fStack_64 + DAT_1038ef74,local_88 + DAT_1038ef74);
      local_28 = CONCAT44(local_48,local_88);
      FUN_1018b762(&local_28,&local_38,uVar6,local_f8,local_78,0);
      local_88 = DAT_1038ef74 + DAT_102b710c + local_88;
      fStack_84 = 0.0;
      fStack_80 = 0.0;
      fStack_7c = 0.0;
      local_38 = CONCAT44(fStack_64 + DAT_1038ef74,local_88 + DAT_1038ef74);
      local_28 = CONCAT44(local_48,local_88);
      FUN_1018b762(&local_28,&local_38,uVar6,local_f8,local_78,0x90);
      local_88 = DAT_1038ef74 + DAT_102b710c + local_88;
      fVar15 = local_48 + DAT_1038ef74 + DAT_102b8d58;
      local_38 = CONCAT44(fVar15,local_88);
      local_28 = CONCAT44(fVar15,DAT_1038ef74 + local_88);
      local_90 = CONCAT44(local_48,DAT_1038ef74 * DAT_102b70e0 + local_88);
      FUN_1018bc68(&local_90,&local_28,&local_38,uVar6,local_78);
      local_88 = DAT_1038ef74 + DAT_102b710c + local_88;
      FUN_101baa92();
      FUN_101888a4(*(undefined4 *)(iVar8 + 0x40),*(undefined4 *)(iVar8 + 0x38),uVar6,local_78,0x200)
      ;
      *(undefined4 *)(iVar8 + 0x38) = 0;
      local_88 = DAT_1038ef74 + DAT_102b710c + local_88;
      FUN_1018b44e(local_88,DAT_1038ef74 + local_88,local_48,uVar6,local_78);
      local_88 = DAT_1038ef74 + DAT_102b710c + local_88;
      fStack_84 = 0.0;
      fStack_80 = 0.0;
      fStack_7c = 0.0;
      FUN_1018b5da(local_88,local_48,DAT_1038ef74 + local_48,uVar6,local_78);
      local_88 = local_88 + DAT_102b710c;
      local_38 = CONCAT44(DAT_1038ef74 + fStack_64,DAT_1038ef74 + local_88);
      local_28 = CONCAT44(local_48,local_88);
      FUN_1018b2de(&local_28,&local_38,uVar6,local_78);
      local_88 = DAT_1038ef74 + DAT_102b710c + local_88;
      fStack_84 = 0.0;
      fStack_80 = 0.0;
      fStack_7c = 0.0;
      fVar15 = DAT_1038ef74 * DAT_102b70e0;
      local_38 = CONCAT44(fVar15 + fStack_64,fVar15 + local_88);
      FUN_10189cf2(&local_38,fVar15,0x40490fd8,0xbfc90fd8,0);
      FUN_101888a4(*(undefined4 *)(iVar8 + 0x40),*(undefined4 *)(iVar8 + 0x38),uVar6,local_78,0);
      uVar7 = local_98;
      *(undefined4 *)(iVar8 + 0x38) = 0;
      local_88 = DAT_1038ef74 + DAT_102b710c + local_88;
      fStack_84 = 0.0;
      fStack_80 = 0.0;
      fStack_7c = 0.0;
      local_28 = CONCAT44(fStack_64 + fStack_e4,local_88 + local_e8);
      local_90 = CONCAT44(local_48 + local_d8,local_88);
      local_128 = local_c8 + local_48;
      uStack_124 = uStack_c4;
      uStack_120 = uStack_c0;
      uStack_11c = uStack_bc;
      local_38 = CONCAT44(local_128,local_c8 + local_88);
      FUN_1018c5b2(&local_90,&local_28,&local_38,uVar6,local_78,local_98);
      fVar15 = DAT_1038ef74 + DAT_102b710c + local_88;
      local_38 = CONCAT44(local_128,local_c8 + fVar15);
      local_28 = CONCAT44(fStack_114 + fStack_64,local_118 + fVar15);
      local_90 = CONCAT44(fStack_64 + fStack_104,fVar15 + local_108);
      local_a8 = CONCAT44(local_48,fVar15);
      FUN_1018c4c6(&local_a8,&local_90,&local_28,&local_38,uVar6,local_78,uVar7);
      iVar8 = local_9c;
      uVar6 = local_a0;
      local_68 = (float)local_50 + _DAT_103025f0;
      fStack_6c = fStack_64 + DAT_1038ef74 + DAT_102b710c;
      fStack_60 = fStack_60 + _UNK_103025f4;
      fStack_5c = fStack_5c + 0.0;
      uVar9 = 0;
    } while ((local_ac & 1) != 0);
    fVar15 = DAT_1038ef74 * DAT_102b70e0;
    local_38 = CONCAT44(fVar15 + fStack_6c,fVar15 + local_68);
    local_78 = fStack_6c;
    fStack_74 = fStack_6c;
    fStack_64 = fStack_6c;
    uStack_70 = fStack_6c;
    FUN_1018c290(&local_38,fVar15,local_a0,DAT_1038ef7c);
    uVar7 = local_94;
    local_48 = local_68 + DAT_1038ef74 + DAT_102b710c;
    fStack_44 = fStack_64;
    fStack_40 = fStack_60;
    fStack_3c = fStack_5c;
    fVar15 = DAT_1038ef74 * DAT_102b70e0;
    local_38 = CONCAT44(fVar15 + fStack_64,fVar15 + local_68 + DAT_1038ef74 + DAT_102b710c);
    FUN_1018c0fc(&local_38,fVar15,uVar6,local_94);
    local_48 = DAT_1038ef74 + DAT_102b710c + local_48;
    fStack_44 = 0.0;
    fStack_40 = 0.0;
    fStack_3c = 0.0;
    local_38 = CONCAT44(DAT_1038ef74 * _UNK_103025e4,DAT_1038ef74 * _DAT_103025e0);
    local_28 = CONCAT44(DAT_1038ef74 * DAT_102b70e0 + fStack_64,
                        DAT_1038ef74 * DAT_102b70e0 + local_48);
    FUN_1018c3f6(&local_28,&local_38,uVar6,0xbe99999a,uVar7);
    local_48 = DAT_1038ef74 + DAT_102b710c + local_48;
    fStack_44 = 0.0;
    fStack_40 = 0.0;
    fStack_3c = 0.0;
    local_38 = CONCAT44(fStack_64 + DAT_1038ef74,local_48 + DAT_1038ef74);
    local_28 = CONCAT44(local_78,local_48);
    FUN_1018b85a(&local_28,&local_38,uVar6,0,0);
    local_48 = DAT_1038ef74 + DAT_102b710c + local_48;
    fStack_44 = 0.0;
    fStack_40 = 0.0;
    fStack_3c = 0.0;
    local_38 = CONCAT44(fStack_64 + DAT_1038ef74,local_48 + DAT_1038ef74);
    local_28 = CONCAT44(local_78,local_48);
    FUN_1018b85a(&local_28,&local_38,uVar6,0x41200000,0);
    local_48 = DAT_1038ef74 + DAT_102b710c + local_48;
    fStack_44 = 0.0;
    fStack_40 = 0.0;
    fStack_3c = 0.0;
    local_38 = CONCAT44(fStack_64 + DAT_1038ef74,local_48 + DAT_1038ef74);
    local_28 = CONCAT44(local_78,local_48);
    FUN_1018b85a(&local_28,&local_38,uVar6,0x41200000,0x90);
    local_48 = DAT_1038ef74 + DAT_102b710c + local_48;
    fVar15 = local_78 + DAT_1038ef74 + DAT_102b8d58;
    local_38 = CONCAT44(fVar15,local_48);
    local_28 = CONCAT44(fVar15,DAT_1038ef74 + local_48);
    local_90 = CONCAT44(local_78,DAT_1038ef74 * DAT_102b70e0 + local_48);
    FUN_1018be36(&local_90,&local_28,&local_38,uVar6);
    local_48 = DAT_1038ef74 + DAT_102b710c + local_48;
    FUN_101baa92();
    FUN_1018d832();
    *(undefined4 *)(iVar8 + 0x38) = 0;
    local_48 = DAT_1038ef74 + DAT_102b710c + local_48;
    fStack_44 = 0.0;
    fStack_40 = 0.0;
    fStack_3c = 0.0;
    local_38 = CONCAT44(DAT_1038ef78 + fStack_64,local_48 + DAT_1038ef74);
    local_28 = CONCAT44(local_78,local_48);
    FUN_1018b85a(&local_28,&local_38,uVar6,0,0);
    local_48 = DAT_1038ef74 + DAT_102b710c + local_48;
    fStack_44 = 0.0;
    fStack_40 = 0.0;
    fStack_3c = 0.0;
    local_38 = CONCAT44(DAT_1038ef74 + fStack_64,DAT_1038ef78 + local_48);
    local_28 = CONCAT44(local_78,local_48);
    FUN_1018b85a(&local_28,&local_38,uVar6,0,0);
    local_48 = local_48 + DAT_102b7110;
    local_38 = CONCAT44(fStack_64 + DAT_102b70a0._4_4_,local_48 + (float)DAT_102b70a0);
    local_28 = CONCAT44(local_78,local_48);
    FUN_1018b85a(&local_28,&local_38,uVar6,0,0);
    local_48 = local_48 + DAT_1038ef74;
    fVar15 = DAT_1038ef74 * DAT_102b70e0;
    local_38 = CONCAT44(fVar15 + fStack_64,fVar15 + local_48);
    FUN_10189cf2(&local_38,fVar15,0xbfc90fd8,0x40490fd8,0);
    FUN_10189368();
    *(undefined4 *)(iVar8 + 0x38) = 0;
    local_48 = DAT_1038ef74 + DAT_102b710c + local_48;
    fStack_40 = fStack_60 + fStack_44;
    fStack_3c = fStack_5c + fStack_d4;
    fStack_44 = fStack_64 + local_d8;
    if (*(int *)(iVar8 + 0x3c) == 0) {
      iVar12 = FUN_100fa1fa(0x40);
      if (*(int *)(iVar8 + 0x40) != 0) {
        FUN_1025b2d0();
        FUN_100fa2cb(*(undefined4 *)(iVar8 + 0x40));
      }
      *(int *)(iVar8 + 0x40) = iVar12;
      *(undefined4 *)(iVar8 + 0x3c) = 8;
      iVar10 = *(int *)(iVar8 + 0x38);
    }
    else {
      iVar12 = *(int *)(iVar8 + 0x40);
      iVar10 = 0;
    }
    pfVar1 = (float *)(iVar12 + iVar10 * 8);
    *pfVar1 = local_48;
    pfVar1[1] = fStack_44;
    *(int *)(iVar8 + 0x38) = *(int *)(iVar8 + 0x38) + 1;
    local_38 = CONCAT44(local_c8 + local_78,local_c8 + local_48);
    local_28 = CONCAT44(fStack_e4 + fStack_64,local_e8 + local_48);
    FUN_1018aa8e();
    FUN_10189368();
    *(undefined4 *)(iVar8 + 0x38) = 0;
    fVar15 = DAT_1038ef74 + DAT_102b710c + local_48;
    local_38 = CONCAT44(fStack_64 + DAT_1038ef74,fVar15 + DAT_1038ef74);
    local_28 = CONCAT44(local_78,fVar15);
    FUN_1018b8f0(&local_28,&local_38,_DAT_10302600,_UNK_10302604,_UNK_10302608,_UNK_1030260c);
    local_38 = CONCAT44((DAT_102b710c + DAT_1038ef74) * _UNK_10302614,
                        (DAT_102b710c + DAT_1038ef74) * _DAT_10302610);
    FUN_10131d8e(&local_38);
    FUN_101154f4();
    FUN_10150ac8();
  }
  cVar3 = FUN_1014fafc();
  if (cVar3 != '\0') {
    FUN_101032c6();
    if (*(int *)(*(int *)(unaff_FS_OFFSET[0xb] + _tls_index * 4) + 0x18) < DAT_103a4c68) {
      FUN_1022c0d0(&DAT_103a4c68);
      if (DAT_103a4c68 == -1) {
        local_14 = 0;
        DAT_103a4c60 = 0;
        DAT_103a4c5c = 0;
        DAT_103a4c64 = 0.0;
        FUN_1022c3a0(&LAB_101bab62);
        local_14 = 0xffffffff;
        FUN_1022c180(&DAT_103a4c68);
      }
    }
    FUN_1012ff1a("Enable grid",&DAT_1038ef98);
    FUN_1012ff1a("Enable context menu",&DAT_1038ef99);
    FUN_1012d08c(
                "Mouse Left: drag to add lines,\nMouse Right: drag to scroll, click for context menu."
                );
    FUN_10114f9f(&local_38);
    FUN_1010c3e4(&local_58);
    fVar15 = (float)local_58;
    if ((float)local_58 < DAT_10302620) {
      local_58 = CONCAT44(local_58._4_4_,0x42480000);
      fVar15 = DAT_10302620;
    }
    fVar11 = local_58._4_4_;
    if (local_58._4_4_ < DAT_10302620) {
      local_58 = CONCAT44(0x42480000,(float)local_58);
      fVar11 = DAT_10302620;
    }
    local_50 = CONCAT44((float)((ulonglong)local_38 >> 0x20) + fVar11,(float)local_38 + fVar15);
    local_c8 = (float)FUN_1010330d();
    fVar11 = (float)FUN_10111ef5();
    FUN_1018b85a(&local_38,&local_50,0xff323232,0,0);
    fVar15 = local_c8;
    local_48 = fVar11;
    FUN_1018b762(&local_38,&local_50,_DAT_10302630,_UNK_10302634,_UNK_10302638,_UNK_1030263c);
    FUN_1012e242();
    bVar4 = FUN_10102a1a(0);
    uVar5 = FUN_1010bee1();
    local_88 = (float)CONCAT31(local_88._1_3_,uVar5);
    local_78 = DAT_103a4c6c + (float)local_38;
    fStack_74 = DAT_103a4c70 + (float)((ulonglong)local_38 >> 0x20);
    uStack_70._0_2_ = 0;
    uStack_70._2_2_ = 0;
    fStack_6c = 0.0;
    local_68 = (float)*(undefined8 *)((int)fVar15 + 0xb4) - local_78;
    fStack_64 = (float)((ulonglong)*(undefined8 *)((int)fVar15 + 0xb4) >> 0x20) - fStack_74;
    fStack_60 = 0.0;
    fStack_5c = 0.0;
    if (((~bVar4 | DAT_103a4c74) & 1) == 0) {
      cVar3 = FUN_1010377a(0,0);
      if (cVar3 == '\0') {
        if (DAT_103a4c74 == 0) goto LAB_1019f092;
      }
      else {
        iVar8 = DAT_103a4c60;
        fVar11 = DAT_103a4c64;
        if (DAT_103a4c5c == DAT_103a4c60) {
          if (DAT_103a4c5c == 0) {
            iVar12 = 8;
          }
          else {
            iVar12 = DAT_103a4c5c / 2 + DAT_103a4c5c;
          }
          iVar8 = DAT_103a4c5c + 1;
          if (DAT_103a4c5c + 1 < iVar12) {
            iVar8 = iVar12;
          }
          fVar11 = (float)FUN_100fa1fa(iVar8 * 8);
          if (DAT_103a4c64 != 0.0) {
            FUN_1025b2d0();
            FUN_100fa2cb(DAT_103a4c64);
          }
        }
        DAT_103a4c64 = fVar11;
        DAT_103a4c60 = iVar8;
        *(ulonglong *)((int)DAT_103a4c64 + DAT_103a4c5c * 8) = CONCAT44(fStack_64,local_68);
        iVar8 = DAT_103a4c5c + 1;
        iVar12 = DAT_103a4c60;
        fVar11 = DAT_103a4c64;
        if (iVar8 == DAT_103a4c60) {
          if (iVar8 == 0) {
            iVar10 = 8;
          }
          else {
            iVar10 = iVar8 / 2 + iVar8;
          }
          iVar12 = DAT_103a4c5c + 2;
          if (DAT_103a4c5c + 2 < iVar10) {
            iVar12 = iVar10;
          }
          DAT_103a4c5c = iVar8;
          fVar11 = (float)FUN_100fa1fa(iVar12 * 8);
          iVar8 = DAT_103a4c5c;
          if (DAT_103a4c64 != 0.0) {
            FUN_1025b2d0();
            FUN_100fa2cb(DAT_103a4c64);
            iVar8 = DAT_103a4c5c;
          }
        }
        DAT_103a4c64 = fVar11;
        DAT_103a4c60 = iVar12;
        DAT_103a4c5c = iVar8;
        *(ulonglong *)((int)DAT_103a4c64 + DAT_103a4c5c * 8) = CONCAT44(fStack_64,local_68);
        DAT_103a4c5c = DAT_103a4c5c + 1;
        DAT_103a4c74 = 1;
      }
code_r0x1019f068:
      *(ulonglong *)((int)DAT_103a4c64 + -8 + DAT_103a4c5c * 8) = CONCAT44(fStack_64,local_68);
      cVar3 = FUN_1010b10c(0);
      if (cVar3 == '\0') {
        DAT_103a4c74 = 0;
      }
    }
    else if ((DAT_103a4c74 & 1) != 0) goto code_r0x1019f068;
LAB_1019f092:
    if (local_88._0_1_ != '\0') {
      uVar6 = DAT_102b8a50;
      if (DAT_1038ef99 == '\0') {
        uVar6 = 0;
      }
      cVar3 = FUN_1010378f(1,uVar6);
      if (cVar3 != '\0') {
        DAT_103a4c6c = *(float *)((int)fVar15 + 0xa8) + DAT_103a4c6c;
        DAT_103a4c70 = *(float *)((int)fVar15 + 0xac) + DAT_103a4c70;
      }
    }
    FUN_10114052();
    if (DAT_1038ef99 == '\x01') {
      if (((float)local_28 == 0.0) && (!NAN((float)local_28))) {
        if ((local_28._4_4_ == 0.0) && (!NAN(local_28._4_4_))) {
          FUN_101169c1("context",8);
        }
      }
    }
    cVar3 = FUN_10116736("context",0);
    if (cVar3 != '\0') {
      iVar12 = DAT_103a4c5c;
      iVar8 = DAT_103a4c60;
      fVar15 = DAT_103a4c64;
      if ((DAT_103a4c74 == 1) && (iVar12 = DAT_103a4c5c + -2, DAT_103a4c60 < iVar12)) {
        if (DAT_103a4c60 == 0) {
          iVar8 = 8;
        }
        else {
          iVar8 = DAT_103a4c60 / 2 + DAT_103a4c60;
        }
        if (iVar8 <= iVar12) {
          iVar8 = iVar12;
        }
        fVar15 = (float)FUN_100fa1fa(iVar8 * 8);
        if (DAT_103a4c64 != 0.0) {
          FUN_1025b2d0();
          FUN_100fa2cb(DAT_103a4c64);
        }
      }
      DAT_103a4c64 = fVar15;
      DAT_103a4c60 = iVar8;
      DAT_103a4c5c = iVar12;
      DAT_103a4c74 = 0;
      cVar3 = FUN_10131d08("Remove one",0,0,0 < DAT_103a4c5c);
      iVar12 = DAT_103a4c5c;
      iVar8 = DAT_103a4c60;
      fVar15 = DAT_103a4c64;
      if ((cVar3 != '\0') && (iVar12 = DAT_103a4c5c + -2, DAT_103a4c60 < iVar12)) {
        if (DAT_103a4c60 == 0) {
          iVar8 = 8;
        }
        else {
          iVar8 = DAT_103a4c60 / 2 + DAT_103a4c60;
        }
        if (iVar8 <= iVar12) {
          iVar8 = iVar12;
        }
        fVar15 = (float)FUN_100fa1fa(iVar8 * 8);
        if (DAT_103a4c64 != 0.0) {
          local_68 = fVar15;
          FUN_1025b2d0();
          FUN_100fa2cb(DAT_103a4c64);
          fVar15 = local_68;
        }
      }
      DAT_103a4c64 = fVar15;
      DAT_103a4c60 = iVar8;
      DAT_103a4c5c = iVar12;
      cVar3 = FUN_10131d08("Remove all",0,0,0 < DAT_103a4c5c);
      if ((cVar3 != '\0') && (DAT_103a4c64 != 0.0)) {
        DAT_103a4c60 = 0;
        DAT_103a4c5c = 0;
        FUN_100fa2cb(DAT_103a4c64);
        DAT_103a4c64 = 0.0;
      }
      FUN_101165cb();
    }
    FUN_101881b4();
    if (DAT_1038ef98 == '\x01') {
      fVar13 = (float10)FUN_1026dec0((double)DAT_103a4c6c,0,0x40500000);
      fVar15 = (float)fVar13;
      local_b4 = fVar15;
      if (fVar15 < (float)local_58) {
        do {
          local_68 = fVar15;
          FUN_1018b5da((float)local_38 + fVar15,local_38._4_4_,(int)((ulonglong)local_50 >> 0x20),
                       0x28c8c8c8,0x3f800000);
          fVar15 = local_68 + _DAT_10301b6c;
        } while (fVar15 < (float)local_58);
      }
      fVar13 = (float10)FUN_1026dec0((double)DAT_103a4c70,0,0x40500000);
      fVar15 = (float)fVar13;
      local_b0 = fVar15;
      if (fVar15 < local_58._4_4_) {
        do {
          local_68 = fVar15;
          FUN_1018b44e((float)local_38,(float)local_50,local_38._4_4_ + fVar15,0x28c8c8c8,0x3f800000
                      );
          fVar15 = local_68 + _DAT_10301b6c;
        } while (fVar15 < local_58._4_4_);
      }
    }
    if (0 < DAT_103a4c5c) {
      iVar8 = 0;
      do {
        uVar2 = *(undefined8 *)((int)DAT_103a4c64 + 8 + iVar8 * 8);
        local_90 = CONCAT44((float)((ulonglong)uVar2 >> 0x20) + fStack_74,(float)uVar2 + local_78);
        uVar2 = *(undefined8 *)((int)DAT_103a4c64 + iVar8 * 8);
        local_a8 = CONCAT44((float)((ulonglong)uVar2 >> 0x20) + fStack_74,(float)uVar2 + local_78);
        FUN_1018b2de(&local_a8,&local_90,0xff00ffff,0x40000000);
        iVar8 = iVar8 + 2;
      } while (iVar8 < DAT_103a4c5c);
    }
    FUN_10188384();
    FUN_10150ac8();
  }
  cVar3 = FUN_1014fafc();
  if (cVar3 != '\0') {
    FUN_101032c6();
    FUN_1012ff1a("Draw in Background draw list",&DAT_1038ef9a);
    FUN_10114a0e(0,0xbf800000);
    FUN_1011eaad();
    FUN_1012ff1a("Draw in Foreground draw list",&DAT_1038ef9b);
    FUN_10114a0e(0,0xbf800000);
    FUN_1011eaad();
    FUN_10111c87(&local_38);
    FUN_10111ca1(&local_58);
    local_50 = CONCAT44((float)((ulonglong)local_58 >> 0x20) * DAT_102b89c0._4_4_ +
                        (float)((ulonglong)local_38 >> 0x20),
                        (float)local_58 * (float)DAT_102b89c0 + (float)local_38);
    if (DAT_1038ef9a == '\x01') {
      FUN_10103366(0);
      FUN_1018bfde(&local_50,(float)local_58 * DAT_102b71d8,0xc80000ff,0,0x41600000);
    }
    if (DAT_1038ef9b == '\x01') {
      FUN_100fe900(0);
      FUN_1018bfde(&local_50,local_58._4_4_ * DAT_102b71d8,0xc800ff00,0,0x41200000);
    }
    FUN_10150ac8();
  }
  cVar3 = FUN_1014fafc();
  if (cVar3 != '\0') {
    FUN_101032c6();
    uVar6 = FUN_10111ef5();
    FUN_1012d08c("Blue shape is drawn first: appears in back");
    FUN_1012d08c("Red shape is drawn after: appears in front");
    FUN_10114f9f(&local_38);
    local_50 = local_38;
    local_58 = CONCAT44((float)((ulonglong)local_38 >> 0x20) + DAT_10302640._4_4_,
                        (float)local_38 + (float)DAT_10302640);
    FUN_1018b85a(&local_50,&local_58,0xffff0000,0,0);
    fVar15 = (float)((ulonglong)local_38 >> 0x20);
    local_58 = CONCAT44(fVar15 + _UNK_10302654,(float)local_38 + _DAT_10302650);
    local_50 = CONCAT44(fVar15 + _UNK_10302664,(float)local_38 + _DAT_10302660);
    FUN_1018b85a(&local_50,&local_58,0xff0000ff,0,0);
    local_58 = CONCAT44(_UNK_10302654,_DAT_10302650);
    FUN_10131d8e(&local_58);
    FUN_10132188();
    FUN_1012d08c("Blue shape is drawn first, into channel 1: appears in front");
    FUN_1012d08c("Red shape is drawn after, into channel 0: appears in back");
    FUN_10114f9f(&local_38);
    FUN_1018dc92(uVar6,2);
    FUN_1018de6c(uVar6,1);
    local_58 = CONCAT44(DAT_10302640._4_4_ + (float)((ulonglong)local_38 >> 0x20),
                        (float)DAT_10302640 + (float)local_38);
    local_50 = local_38;
    FUN_1018b85a(&local_50,&local_58,0xffff0000,0,0);
    FUN_1018de6c(uVar6,0);
    fVar15 = (float)((ulonglong)local_38 >> 0x20);
    local_58 = CONCAT44(fVar15 + _UNK_10302654,(float)local_38 + _DAT_10302650);
    local_50 = CONCAT44(fVar15 + _UNK_10302664,(float)local_38 + _DAT_10302660);
    FUN_1018b85a(&local_50,&local_58,0xff0000ff,0,0);
    FUN_10187968(uVar6);
    local_58 = CONCAT44(_UNK_10302654,_DAT_10302650);
    FUN_10131d8e(&local_58);
    FUN_1012d08c("After reordering, contents of channel 0 appears below channel 1.");
    FUN_10150ac8();
  }
  FUN_1014e72b();
LAB_1019f7a0:
  FUN_1010ad44();
  *unaff_FS_OFFSET = local_1c;
  return;
}

