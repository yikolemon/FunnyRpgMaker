/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14075fbfb */

/* WARNING: Instruction at (ram,0x00014075fc79) overlaps instruction at (ram,0x00014075fc74)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14075fbfb(uint param_1,char param_2,uint param_3)

{
  char *pcVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  char cVar4;
  float fVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  code *pcVar9;
  int3 iVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  char cVar13;
  byte bVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  int *piVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  byte bVar22;
  longlong lVar23;
  uint uVar24;
  uint uVar25;
  uint *puVar26;
  undefined1 *puVar27;
  undefined1 *puVar28;
  ulonglong uVar30;
  undefined1 *puVar31;
  undefined1 *puVar32;
  ulonglong uVar33;
  uint *puVar34;
  int *piVar35;
  int iVar36;
  int *unaff_RBP;
  undefined4 *puVar37;
  int iVar38;
  longlong unaff_RDI;
  undefined4 *puVar39;
  bool bVar40;
  float fVar41;
  uint *puVar29;
  
  puVar26 = (uint *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0x134);
  uVar25 = *(uint *)((longlong)puVar26 + 0x150);
  uVar19 = (ulonglong)*(uint *)((longlong)puVar26 + 0x148);
  piVar18 = (int *)((ulonglong)_DAT_8489e03110388d00 & 0xffffffffffffff30);
  iVar15 = (int)piVar18;
  *piVar18 = *piVar18 + iVar15;
  pbVar2 = (byte *)(uVar19 + 0x39d74c3d);
  bVar14 = *pbVar2;
  bVar22 = (byte)param_1;
  *pbVar2 = *pbVar2 + bVar22;
  pcVar1 = (char *)(uVar19 - 0x18);
  cVar13 = *pcVar1;
  cVar4 = *pcVar1;
  *pcVar1 = cVar4 + param_2 + CARRY1(bVar14,bVar22);
  if ((SCARRY1(cVar13,param_2) != SCARRY1(cVar4 + param_2,CARRY1(bVar14,bVar22))) == *pcVar1 < '\0')
  {
    *(char *)piVar18 = (char)*piVar18 + (char)piVar18;
  }
  else {
    *(char *)piVar18 = (char)*piVar18 + (char)piVar18;
    puVar26 = (uint *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0x130);
    *(int *)((longlong)puVar26 + 0x2c) = iVar15;
    *(bool *)((longlong)puVar26 + 6) = iVar15 == 0;
    if (iVar15 == 0) {
      *(undefined8 *)((longlong)puVar26 + -8) = 0x14075fc48;
      uVar16 = FUN_1407654d6(uVar19,uVar25);
      piVar18 = (int *)(ulonglong)uVar16;
    }
    if (*(int *)(unaff_RDI + 0x14c8) == piVar18[2]) {
      pcVar9 = (code *)swi(3);
      uVar19 = (*pcVar9)();
      return uVar19;
    }
    unaff_RBP = piVar18;
    param_1 = uVar25 | 6;
    if ((~uVar25 & 0x30200) != 0) {
      param_1 = uVar25;
    }
  }
  *(uint *)((longlong)puVar26 + 0x14) = param_1;
  iVar15 = *(int *)(unaff_RDI + 4);
  iVar17 = unaff_RBP[0xad];
  if (*(int *)(unaff_RDI + 0x14a8) == 0) {
    cVar13 = *(char *)(unaff_RDI + 2);
  }
  else {
    cVar13 = '\0';
  }
  *(char *)((longlong)unaff_RBP + 0x102) = cVar13;
  iVar38 = iVar15 + -1;
  *(bool *)((longlong)puVar26 + 7) = iVar17 < iVar38;
  *(int *)((longlong)puVar26 + 0x28) = iVar15;
  iVar36 = (int)unaff_RBP;
  if ((*(uint *)((longlong)puVar26 + 0x14) >> 0x1a & 1) != 0) {
    uVar19 = (ulonglong)(uint)(*(int *)(unaff_RDI + 0x1fc8) * 5);
    iVar15 = *(int *)((longlong)puVar26 + 0x28);
    *(bool *)((longlong)puVar26 + 7) =
         (*(int *)((ulonglong)*(uint *)(unaff_RDI + 0x1fc4) + 4 + uVar19 * 8) != iVar36 ||
         unaff_RBP[0x30] != *(int *)((ulonglong)*(uint *)(unaff_RDI + 0x1fc4) + uVar19 * 8)) ||
         iVar17 < iVar38;
  }
  *(char *)((longlong)puVar26 + 8) = (char)unaff_RBP[0x40];
  if (iVar17 == iVar15) {
    *(int *)((longlong)puVar26 + 0x14) = unaff_RBP[3];
  }
  else {
    *(undefined8 *)((longlong)puVar26 + -8) = *(undefined8 *)((longlong)puVar26 + 0x14);
    *(undefined8 *)((longlong)puVar26 + -0x10) = 0x14075fd01;
    FUN_1407655fd((ulonglong)unaff_RBP & 0xffffffff,*(int *)((longlong)puVar26 + 0x2c) == 0);
    puVar26 = (uint *)(ulonglong)((int)(undefined1 *)((longlong)puVar26 + -8) + 4);
    cVar13 = *(char *)((longlong)puVar26 + 7);
    *(char *)(unaff_RBP + 0x40) = cVar13;
    if (cVar13 != '\0') {
      *(undefined8 *)((longlong)puVar26 + -8) = 1;
      *(undefined8 *)((longlong)puVar26 + -0x10) = 0x14075fd20;
      FUN_140765779((ulonglong)unaff_RBP & 0xffffffff,8);
      puVar26 = (uint *)(ulonglong)((int)(undefined1 *)((longlong)puVar26 + -8) + 4);
    }
    unaff_RBP[4] = unaff_RBP[3];
    unaff_RBP[3] = *(int *)((longlong)puVar26 + 0x14);
    iVar38 = 0;
    if ((*(byte *)(unaff_RDI + 0x1ed1) & 2) != 0) {
      iVar38 = *(int *)(unaff_RDI + 0x1f10);
    }
    unaff_RBP[5] = iVar38;
    unaff_RBP[0xad] = iVar15;
    unaff_RBP[0xaf] = (int)(float)*(double *)(unaff_RDI + 0x18);
    *(undefined2 *)(unaff_RBP + 0x43) = 0;
    iVar38 = *(int *)(unaff_RDI + 0x14c0);
    *(int *)(unaff_RDI + 0x14c0) = iVar38 + 1;
    *(short *)((longlong)unaff_RBP + 0x10e) = (short)iVar38;
  }
  if ((*(byte *)(unaff_RDI + 0x1ed1) & 0x10) != 0) {
    *(undefined8 *)((longlong)puVar26 + -8) = *(undefined8 *)(unaff_RDI + 0x1ee0);
    *(undefined8 *)((longlong)puVar26 + -0x10) = *(undefined8 *)(unaff_RDI + 0x1f38);
    *(int **)((longlong)puVar26 + -0x18) = unaff_RBP;
    *(undefined8 *)((longlong)puVar26 + -0x20) = 0x14075fd91;
    FUN_140765826();
    puVar26 = (uint *)(ulonglong)((int)(undefined1 *)((longlong)puVar26 + -0x18) + 0xc);
  }
  *(int *)((longlong)puVar26 + 0x70) = (int)unaff_RDI;
  *(int *)((longlong)puVar26 + 0x30) = iVar17;
  if (iVar17 != iVar15) {
    if ((unaff_RBP[0x10e] == 0) && (unaff_RBP[0x10c] == 0)) {
      *(int **)((longlong)puVar26 + -8) = unaff_RBP;
      *(undefined8 *)((longlong)puVar26 + -0x10) = 0x14075fe40;
      cVar13 = FUN_1407658b3();
      puVar26 = (uint *)(ulonglong)((int)(undefined1 *)((longlong)puVar26 + -8) + 4);
      bVar14 = *(byte *)((longlong)unaff_RBP + 0x409);
      *(byte *)((longlong)unaff_RBP + 0x409) = bVar14 & 0xf8;
      if (cVar13 == '\0') goto LAB_14075fe63;
    }
    else {
      bVar14 = *(byte *)((longlong)unaff_RBP + 0x409);
      *(byte *)((longlong)unaff_RBP + 0x409) = bVar14 & 0xf8;
    }
    *(undefined8 *)((longlong)puVar26 + -8) = *(undefined8 *)((longlong)puVar26 + 0x14c);
    *(int **)((longlong)puVar26 + -0x10) = unaff_RBP;
    *(undefined8 *)((longlong)puVar26 + -0x18) = 0x14075fddd;
    FUN_1407658df();
    puVar26 = (uint *)(ulonglong)((int)(undefined1 *)((longlong)puVar26 + -0x10) + 8);
    *(int *)((longlong)puVar26 + 0x14) = unaff_RBP[3];
    bVar22 = *(byte *)((longlong)unaff_RBP + 0x409);
    if ((bVar22 & 1) != 0) {
      *(byte *)((ulonglong)*(uint *)((longlong)puVar26 + 0x70) + 0x1ed0) =
           *(byte *)((ulonglong)*(uint *)((longlong)puVar26 + 0x70) + 0x1ed0) & 0xef;
      bVar22 = *(byte *)(ulonglong)(iVar36 + 0x409);
    }
    if ((bVar22 & 4) == 0) {
      iVar15 = *(int *)((longlong)puVar26 + 0x28);
    }
    else {
      iVar15 = *(int *)((longlong)puVar26 + 0x28);
      if (((bVar14 & 6) == 2) &&
         (*(char *)((longlong)puVar26 + 8) == '\0' && (char)unaff_RBP[0x40] == '\0')) {
        *(char *)(unaff_RBP + 0x40) = '\x01';
        *(undefined8 *)((longlong)puVar26 + -8) = 1;
        *(undefined8 *)((longlong)puVar26 + -0x10) = 0x14075fe2f;
        FUN_140765779((ulonglong)unaff_RBP & 0xffffffff,8);
        puVar26 = (uint *)(ulonglong)((int)(undefined1 *)((longlong)puVar26 + -8) + 4);
      }
    }
  }
LAB_14075fe63:
  uVar25 = *(uint *)((longlong)puVar26 + 0x70);
  uVar19 = (ulonglong)uVar25;
  if (((*(byte *)((longlong)unaff_RBP + 0x409) & 1) == 0) ||
     (iVar17 = *(int *)((ulonglong)(uint)unaff_RBP[0x10c] + 0x78),
     *(int *)((longlong)puVar26 + 0x60) = iVar17, iVar17 == 0)) {
    if (*(int *)(uVar19 + 0x14a8) == 0) {
      *(undefined4 *)((longlong)puVar26 + 0x60) = 0;
    }
    else {
      *(undefined4 *)((longlong)puVar26 + 0x60) =
           *(undefined4 *)
            (((ulonglong)*(uint *)(uVar19 + 0x14b0) - 0x70) +
            (ulonglong)(uint)(*(int *)(uVar19 + 0x14a8) * 0x70));
    }
  }
  if (*(int *)((longlong)puVar26 + 0x30) == iVar15) {
    iVar15 = unaff_RBP[0xe8];
  }
  else {
    iVar15 = 0;
    if ((*(uint *)((longlong)puVar26 + 0x14) & 0x7000000) != 0) {
      iVar15 = *(int *)((longlong)puVar26 + 0x60);
    }
  }
  if (unaff_RBP[0x4e] == 0) {
    if (unaff_RBP[0x4f] == 0) {
      *(undefined8 *)((longlong)puVar26 + -8) = 0x20;
      *(undefined8 *)((longlong)puVar26 + -0x10) = 0x14075fee6;
      uVar24 = FUN_1407520ca();
      puVar26 = (uint *)(ulonglong)((int)(undefined1 *)((longlong)puVar26 + -8) + 4);
      uVar21 = (ulonglong)uVar24;
      uVar16 = unaff_RBP[0x50];
      if (uVar16 != 0) {
        *(ulonglong *)((longlong)puVar26 + -8) = (ulonglong)(uint)(unaff_RBP[0x4e] << 2);
        *(ulonglong *)((longlong)puVar26 + -0x10) = (ulonglong)uVar16;
        *(ulonglong *)((longlong)puVar26 + -0x18) = uVar21;
        *(undefined8 *)((longlong)puVar26 + -0x20) = 0x14075ff06;
        FUN_1408b31a0();
        *(undefined8 *)((ulonglong)((int)(undefined1 *)((longlong)puVar26 + -0x18) + 0xc) - 8) =
             *(undefined8 *)(unaff_RBP + 0x50);
                    /* WARNING: Subroutine does not return */
        *(undefined **)((ulonglong)((int)(undefined1 *)((longlong)puVar26 + -0x18) + 0xc) - 0x10) =
             &UNK_14075ff14;
        FUN_14075219b();
      }
      unaff_RBP[0x50] = uVar24;
      unaff_RBP[0x4f] = 8;
      uVar20 = (ulonglong)(uint)unaff_RBP[0x4e];
    }
    else {
      uVar21 = (ulonglong)(uint)unaff_RBP[0x50];
      uVar20 = 0;
    }
    *(int *)(uVar21 + uVar20 * 4) = unaff_RBP[2];
    unaff_RBP[0x4e] = unaff_RBP[0x4e] + 1;
  }
  *(int *)((longlong)puVar26 + 0xc) = iVar15;
  *(int *)(uVar19 + 0x14cc) = iVar36;
  iVar15 = *(int *)(uVar19 + 0x14a8);
  iVar17 = *(int *)(uVar19 + 0x14ac);
  iVar38 = iVar15 + 1;
  *(int *)((longlong)puVar26 + 8) = iVar36;
  if (iVar15 < iVar17) {
    uVar16 = *(uint *)(uVar19 + 0x14b0);
  }
  else {
    if (iVar17 == 0) {
      iVar17 = 8;
    }
    else {
      iVar17 = iVar17 / 2 + iVar17;
    }
    if (iVar17 <= iVar38) {
      iVar17 = iVar38;
    }
    *(ulonglong *)((longlong)puVar26 + -8) = (ulonglong)(uint)(iVar17 * 0x70);
    *(undefined8 *)((longlong)puVar26 + -0x10) = 0x14075ff86;
    uVar16 = FUN_1407520ca();
    puVar26 = (uint *)(ulonglong)((int)(undefined1 *)((longlong)puVar26 + -8) + 4);
    uVar24 = *(uint *)(uVar19 + 0x14b0);
    if (uVar24 != 0) {
      *(ulonglong *)((longlong)puVar26 + -8) = (ulonglong)(uint)(*(int *)(uVar19 + 0x14a8) * 0x70);
      *(ulonglong *)((longlong)puVar26 + -0x10) = (ulonglong)uVar24;
      *(ulonglong *)((longlong)puVar26 + -0x18) = (ulonglong)uVar16;
      *(undefined8 *)((longlong)puVar26 + -0x20) = 0x14075ffa4;
      FUN_1408b31a0();
      *(undefined8 *)((ulonglong)((int)(undefined1 *)((longlong)puVar26 + -0x18) + 0xc) - 8) =
           *(undefined8 *)(uVar19 + 0x14b0);
                    /* WARNING: Subroutine does not return */
      *(undefined **)((ulonglong)((int)(undefined1 *)((longlong)puVar26 + -0x18) + 0xc) - 0x10) =
           &UNK_14075ffb2;
      FUN_14075219b();
    }
    *(uint *)(uVar19 + 0x14b0) = uVar16;
    *(int *)(uVar19 + 0x14ac) = iVar17;
    unaff_RBP = (int *)(ulonglong)*(uint *)((longlong)puVar26 + 8);
  }
  *(int *)(uVar19 + 0x14a8) = iVar38;
  uVar24 = uVar16 + iVar38 * 0x70;
  puVar39 = (undefined4 *)(ulonglong)((uVar16 + iVar38 * 0x70) - 0x6c);
  iVar15 = (int)unaff_RBP;
  puVar39[-1] = iVar15;
  puVar37 = (undefined4 *)(ulonglong)(uVar25 + 0x1e80);
  for (lVar23 = 0x14; lVar23 != 0; lVar23 = lVar23 + -1) {
    *puVar39 = *puVar37;
    puVar37 = puVar37 + 1;
    puVar39 = puVar39 + 1;
  }
  if ((puVar26[5] >> 0x19 & 1) == 0) {
    bVar14 = 0;
  }
  else {
    bVar14 = *(byte *)(uVar19 + 0x1e40) >> 6 & 1;
  }
  *(byte *)((ulonglong)uVar24 - 6) = bVar14;
  *(undefined4 *)((ulonglong)uVar24 - 4) = 0;
  *puVar26 = uVar24;
  *(ulonglong *)(puVar26 + -2) = (ulonglong)(uVar24 - 0x1c);
  puVar26[-4] = 0x40760014;
  puVar26[-3] = 1;
  FUN_14076236b();
  puVar27 = (undefined1 *)(ulonglong)((int)(puVar26 + -2) + 4);
  *(uint *)(uVar19 + 0x27ac) = uVar24 - 0x1c;
  if ((*(uint *)(puVar27 + 0x14) >> 0x1c & 1) != 0) {
    *(int *)(uVar19 + 0x2558) = *(int *)(uVar19 + 0x2558) + 1;
  }
  uVar16 = *(uint *)(puVar27 + 0x28);
  if (*(uint *)(puVar27 + 0x30) != uVar16) {
    *(undefined8 *)(puVar27 + -8) = *(undefined8 *)(puVar27 + 0xc);
    *(undefined8 *)(puVar27 + -0x10) = *(undefined8 *)(puVar27 + 0x10);
    *(int **)(puVar27 + -0x18) = unaff_RBP;
    *(undefined8 *)(puVar27 + -0x20) = 0x14076004a;
    FUN_140765368();
    puVar27 = (undefined1 *)(ulonglong)((int)(puVar27 + -0x18) + 0xc);
    iVar17 = *(int *)(puVar27 + 0x60);
    unaff_RBP[0xe9] = iVar17;
    iVar38 = 0;
    if (unaff_RBP[0xea] != iVar15) {
      iVar38 = iVar17;
    }
    unaff_RBP[0xef] = iVar38;
    if (((iVar38 == 0) && (uVar24 = unaff_RBP[0x10c], uVar24 != 0)) &&
       ((*(byte *)((ulonglong)uVar24 + 0x12) & 4) != 0)) {
      unaff_RBP[0xef] = *(int *)((ulonglong)uVar24 + 0x78);
    }
    if (unaff_RBP[8] != 0) {
      *(ulonglong *)(puVar27 + -8) = (ulonglong)(uint)unaff_RBP[8];
      *(undefined8 *)(puVar27 + -0x10) = 0x140760079;
      iVar17 = FUN_140764a95();
      puVar27 = (undefined1 *)(ulonglong)((int)(puVar27 + -8) + 4);
      unaff_RBP[0xef] = iVar17;
    }
    uVar24 = *(uint *)(puVar27 + 0xc);
    fVar41 = _DAT_1509eb4ef;
    if (uVar24 != 0) {
      fVar41 = *(float *)((ulonglong)uVar24 + 0x2dc) * *(float *)((ulonglong)uVar24 + 0x2d8);
    }
    unaff_RBP[0xb7] = (int)fVar41;
  }
  uVar24 = unaff_RBP[5];
  *(uint *)(puVar27 + 0x94) = iVar15 + 8U;
  uVar8 = uVar25 + 0x1e3c;
  if ((uVar24 >> 8 & 1) == 0) {
    uVar8 = iVar15 + 8U;
  }
  *(undefined8 *)(puVar27 + -8) = *(undefined8 *)(ulonglong)uVar8;
  *(undefined8 *)(puVar27 + -0x10) = 0x1407600e3;
  FUN_140765b41();
  puVar28 = (undefined1 *)(ulonglong)((int)(puVar27 + -8) + 4);
  unaff_RBP[0xff] = *(int *)(uVar19 + 0x1e3c);
  if ((*(uint *)(puVar28 + 0x14) >> 0x1a & 1) != 0) {
    piVar18 = (int *)(ulonglong)(uint)(*(int *)(uVar19 + 0x1fc4) + *(int *)(uVar19 + 0x1fc8) * 0x28)
    ;
    piVar18[1] = iVar15;
    piVar18[3] = *(int *)((ulonglong)*(uint *)(puVar28 + 0x60) + 0x19c);
    iVar15 = *(int *)(uVar19 + 0x1fc8);
    if (iVar15 == *(int *)(uVar19 + 0x1fcc)) {
      if (iVar15 == 0) {
        iVar17 = 8;
      }
      else {
        iVar17 = iVar15 / 2 + iVar15;
      }
      iVar38 = iVar15 + 1;
      if (iVar15 + 1 < iVar17) {
        iVar38 = iVar17;
      }
      *(ulonglong *)(puVar28 + -8) = (ulonglong)(uint)(iVar38 * 0x28);
      *(undefined8 *)(puVar28 + -0x10) = 0x140760164;
      uVar24 = FUN_1407520ca();
      puVar28 = (undefined1 *)(ulonglong)((int)(puVar28 + -8) + 4);
      uVar21 = (ulonglong)uVar24;
      uVar16 = *(uint *)(uVar19 + 0x1fd0);
      if (uVar16 != 0) {
        *(ulonglong *)(puVar28 + -8) = (ulonglong)(uint)(*(int *)(uVar19 + 0x1fc8) * 0x28);
        *(ulonglong *)(puVar28 + -0x10) = (ulonglong)uVar16;
        *(ulonglong *)(puVar28 + -0x18) = uVar21;
        *(undefined8 *)(puVar28 + -0x20) = 0x140760187;
        FUN_1408b31a0();
        *(undefined8 *)((ulonglong)((int)(puVar28 + -0x18) + 0xc) - 8) =
             *(undefined8 *)(uVar19 + 0x1fd0);
                    /* WARNING: Subroutine does not return */
        *(undefined **)((ulonglong)((int)(puVar28 + -0x18) + 0xc) - 0x10) = &UNK_140760195;
        FUN_14075219b();
      }
      *(uint *)(uVar19 + 0x1fd0) = uVar24;
      *(int *)(uVar19 + 0x1fcc) = iVar38;
      iVar15 = *(int *)(uVar19 + 0x1fc8);
      unaff_RBP = (int *)(ulonglong)*(uint *)(puVar28 + 8);
    }
    else {
      uVar21 = (ulonglong)*(uint *)(uVar19 + 0x1fd0);
    }
    uVar20 = (ulonglong)(uint)(iVar15 * 5);
    *(undefined8 *)(uVar21 + 0x20 + uVar20 * 8) = *(undefined8 *)(piVar18 + 8);
    uVar6 = *(undefined8 *)piVar18;
    uVar11 = *(undefined8 *)(piVar18 + 2);
    uVar12 = *(undefined8 *)(piVar18 + 6);
    puVar3 = (undefined8 *)(uVar21 + 0x10 + uVar20 * 8);
    *puVar3 = *(undefined8 *)(piVar18 + 4);
    puVar3[1] = uVar12;
    puVar3 = (undefined8 *)(uVar21 + uVar20 * 8);
    *puVar3 = uVar6;
    puVar3[1] = uVar11;
    *(int *)(uVar19 + 0x1fc8) = *(int *)(uVar19 + 0x1fc8) + 1;
    unaff_RBP[0x30] = *piVar18;
    uVar16 = *(uint *)(puVar28 + 0x28);
  }
  if ((*(byte *)(uVar19 + 0x1ed0) & 1) == 0) {
    *(undefined4 *)(puVar28 + 0x80) = 0;
  }
  else {
    uVar24 = unaff_RBP[0x48];
    cVar13 = (char)(uVar24 >> 8);
    uVar8 = *(uint *)(uVar19 + 0x1ed4);
    bVar40 = ((int)cVar13 & uVar8) == 0;
    *(uint *)(puVar28 + 0x80) = CONCAT31(cVar13 >> 7,!bVar40);
    if ((bVar40) ||
       (*(float *)(uVar19 + 0x1eec) * *(float *)(uVar19 + 0x1eec) +
        *(float *)(uVar19 + 0x1ef0) * *(float *)(uVar19 + 0x1ef0) <= _DAT_150a18e90)) {
      *(ulonglong *)(puVar28 + -8) = (ulonglong)uVar8;
      *(ulonglong *)(puVar28 + -0x10) = (ulonglong)(uVar25 + 0x1ee4);
      *(int **)(puVar28 + -0x18) = unaff_RBP;
      *(undefined8 *)(puVar28 + -0x20) = 0x14076028a;
      FUN_14075bb34();
      puVar28 = (undefined1 *)(ulonglong)((int)(puVar28 + -0x18) + 0xc);
    }
    else {
      *(undefined8 *)(unaff_RBP + 0x4a) = *(undefined8 *)(uVar19 + 0x1ee4);
      iVar15 = *(int *)(uVar19 + 0x1eec);
      unaff_RBP[0x4d] = *(int *)(uVar19 + 0x1ef0);
      unaff_RBP[0x4c] = iVar15;
      uVar24 = uVar24 & 0xfffff1ff;
      unaff_RBP[0x48] = uVar24;
      *(int *)(puVar28 + 0x80) = (int)CONCAT71((uint7)(uint3)(uVar24 >> 8),1);
    }
  }
  cVar13 = (char)*(uint *)(uVar19 + 0x1ed0);
  if ((*(uint *)(uVar19 + 0x1ed0) & 2) == 0) {
    *(undefined4 *)(puVar28 + 0x34) = 0;
    *(undefined4 *)(puVar28 + 0x50) = 0;
  }
  else {
    uVar25 = unaff_RBP[0x48];
    cVar13 = (char)(uVar25 >> 0x10);
    uVar24 = *(uint *)(uVar19 + 0x1ed8);
    if (((int)cVar13 & uVar24) == 0) {
      *(undefined4 *)(puVar28 + 0x50) = 0;
      *(undefined4 *)(puVar28 + 0x34) = 0;
    }
    else {
      fVar41 = *(float *)(uVar19 + 0x1ef8);
      iVar10 = (int3)(cVar13 >> 7);
      *(uint *)(puVar28 + 0x50) = CONCAT31(iVar10,0.0 < *(float *)(uVar19 + 0x1ef4));
      *(uint *)(puVar28 + 0x34) = CONCAT31(iVar10,0.0 < fVar41);
    }
    uVar7 = unaff_RBP[5];
    uVar8 = *(uint *)(puVar28 + 0x70);
    uVar19 = (ulonglong)uVar8;
    if ((uVar25 >> 0x12 & 1) == 0 && (uVar7 & 4) != 0) {
      *(int *)(uVar19 + 0x1ef4) = unaff_RBP[0x18];
      uVar7 = unaff_RBP[5];
    }
    if (((uVar7 & 8) != 0) && ((*(byte *)((longlong)unaff_RBP + 0x122) & 4) == 0)) {
      *(int *)(uVar19 + 0x1ef8) = unaff_RBP[0x19];
    }
    *(ulonglong *)(puVar28 + -8) = (ulonglong)uVar24;
    *(ulonglong *)(puVar28 + -0x10) = (ulonglong)(uVar8 + 0x1ef4);
    *(int **)(puVar28 + -0x18) = unaff_RBP;
    *(undefined8 *)(puVar28 + -0x20) = 0x14076034d;
    FUN_140765bf8();
    puVar28 = (undefined1 *)(ulonglong)((int)(puVar28 + -0x18) + 0xc);
    cVar13 = (char)*(undefined4 *)(uVar19 + 0x1ed0);
  }
  if (cVar13 < '\0') {
    if (0.0 <= *(float *)(uVar19 + 0x1f04)) {
      unaff_RBP[0x35] = (int)*(float *)(uVar19 + 0x1f04);
      unaff_RBP[0x37] = 0;
    }
    if (0.0 <= *(float *)(uVar19 + 0x1f08)) {
      unaff_RBP[0x36] = (int)*(float *)(uVar19 + 0x1f08);
      unaff_RBP[0x38] = 0;
    }
  }
  if ((*(byte *)(uVar19 + 0x1ed0) & 4) == 0) {
    if (*(uint *)(puVar28 + 0x30) != uVar16) {
      unaff_RBP[0x1e] = 0;
      unaff_RBP[0x1f] = 0;
    }
  }
  else {
    *(undefined8 *)(unaff_RBP + 0x1e) = *(undefined8 *)(uVar19 + 0x1efc);
  }
  uVar25 = *(uint *)(uVar19 + 0x1ed0);
  if ((uVar25 >> 0xd & 1) != 0) {
    unaff_RBP[0xe] = *(int *)(uVar19 + 0x1f5c);
    uVar6 = *(undefined8 *)(uVar19 + 0x1f3c);
    uVar11 = *(undefined8 *)(uVar19 + 0x1f44);
    uVar12 = *(undefined8 *)(uVar19 + 0x1f54);
    *(undefined8 *)(unaff_RBP + 10) = *(undefined8 *)(uVar19 + 0x1f4c);
    *(undefined8 *)(unaff_RBP + 0xc) = uVar12;
    *(undefined8 *)(unaff_RBP + 6) = uVar6;
    *(undefined8 *)(unaff_RBP + 8) = uVar11;
    uVar25 = *(uint *)(uVar19 + 0x1ed0);
  }
  if ((uVar25 & 8) != 0) {
    bVar14 = *(byte *)(uVar19 + 0x1f15);
    *(undefined8 *)(puVar28 + -8) = *(undefined8 *)(uVar19 + 0x1edc);
    *(ulonglong *)(puVar28 + -0x10) = (ulonglong)bVar14;
    *(int **)(puVar28 + -0x18) = unaff_RBP;
    *(undefined8 *)(puVar28 + -0x20) = 0x14076040a;
    FUN_140765cf6();
    puVar28 = (undefined1 *)(ulonglong)((int)(puVar28 + -0x18) + 0xc);
    uVar25 = *(uint *)(uVar19 + 0x1ed0);
  }
  if ((uVar25 & 0x20) != 0) {
    *(undefined8 *)(puVar28 + -8) = 0;
    *(int **)(puVar28 + -0x10) = unaff_RBP;
    *(undefined8 *)(puVar28 + -0x18) = 0x14076041f;
    FUN_14075b3b2();
    puVar28 = (undefined1 *)(ulonglong)((int)(puVar28 + -0x10) + 8);
  }
  iVar15 = (int)unaff_RBP;
  if ((char)unaff_RBP[0x40] == '\x01') {
    *(undefined8 *)(puVar28 + -8) = 0;
    *(undefined8 *)(puVar28 + -0x10) = 0x140760439;
    FUN_140765779((ulonglong)unaff_RBP & 0xffffffff,8);
    puVar28 = (undefined1 *)(ulonglong)((int)(puVar28 + -8) + 4);
  }
  *(int **)(puVar28 + -8) = unaff_RBP;
  *(undefined8 *)(puVar28 + -0x10) = 0x140760442;
  FUN_14076542d();
  uVar25 = (int)(puVar28 + -8) + 4;
  puVar29 = (uint *)(ulonglong)uVar25;
  if ((*(char *)((ulonglong)*puVar29 - 6) == '\x01') && (unaff_RBP[0xea] == iVar15)) {
    puVar29[-2] = 0x4076045b;
    puVar29[-1] = 1;
    FUN_140765d45();
  }
  *(undefined4 *)(uVar19 + 0x14cc) = 0;
  if (puVar29[0xc] == uVar16) {
    if (*(char *)((longlong)unaff_RBP + 0xff) != '\0') goto LAB_14076047b;
  }
  else {
    if (*(char *)((longlong)unaff_RBP + 0xff) == '\0') {
      *(char *)(puVar29 + 0x13) = (char)unaff_RBP[0x47];
      *(char *)((longlong)unaff_RBP + 0xf9) = '\x01';
      *(bool *)(unaff_RBP + 0x41) = puVar29[0x53] != 0;
      uVar6 = uRam0000000150a19172;
      *(undefined8 *)(unaff_RBP + 0xa3) = _DAT_150a1916a;
      *(undefined8 *)(unaff_RBP + 0xa5) = uVar6;
      if (unaff_RBP[0x4f] < 1) {
        iVar17 = 8;
        if ((param_3 & unaff_RBP[0x4f]) != 0) {
          iVar17 = 0;
        }
        *(ulonglong *)(puVar29 + -2) = (ulonglong)(uint)(iVar17 * 4);
        puVar29[-4] = 0x40760535;
        puVar29[-3] = 1;
        uVar16 = FUN_1407520ca();
        puVar29 = (uint *)(ulonglong)((int)(puVar29 + -2) + 4);
        uVar25 = unaff_RBP[0x50];
        if (uVar25 != 0) {
          *(ulonglong *)((longlong)puVar29 + -8) = (ulonglong)(uint)(unaff_RBP[0x4e] << 2);
          *(ulonglong *)((longlong)puVar29 + -0x10) = (ulonglong)uVar25;
          *(ulonglong *)((longlong)puVar29 + -0x18) = (ulonglong)uVar16;
          *(undefined8 *)((longlong)puVar29 + -0x20) = 0x140760555;
          FUN_1408b31a0();
          *(undefined8 *)((ulonglong)((int)(undefined1 *)((longlong)puVar29 + -0x18) + 0xc) - 8) =
               *(undefined8 *)(unaff_RBP + 0x50);
                    /* WARNING: Subroutine does not return */
          *(undefined **)((ulonglong)((int)(undefined1 *)((longlong)puVar29 + -0x18) + 0xc) - 0x10)
               = &UNK_140760563;
          FUN_14075219b();
        }
        unaff_RBP[0x50] = uVar16;
        unaff_RBP[0x4f] = iVar17;
      }
      unaff_RBP[0x4e] = 1;
      iVar17 = unaff_RBP[0xba];
      *(undefined8 *)((longlong)puVar29 + -8) = 0x140760587;
      FUN_1407df542(iVar17);
      unaff_RBP[0x7b] = -1;
      puVar32 = (undefined1 *)puVar29;
      if ((*(uint *)((longlong)puVar29 + 0x14) >> 0x17 & 1) != 0) {
        uVar25 = unaff_RBP[0xba];
        *(undefined8 *)((longlong)puVar29 + -8) = 2;
        *(ulonglong *)((longlong)puVar29 + -0x10) = (ulonglong)uVar25;
        *(undefined8 *)((longlong)puVar29 + -0x18) = 0x1407605aa;
        FUN_1407e5b62(uVar25 + 0x70);
        uVar25 = unaff_RBP[0xba];
        *(undefined8 *)((longlong)puVar29 + -0x18) = 1;
        puVar32 = (undefined1 *)((longlong)puVar29 + -0x20);
        *(ulonglong *)((longlong)puVar29 + -0x20) = (ulonglong)uVar25;
        *(undefined8 *)((longlong)puVar29 + -0x28) = 0x1407605bb;
        FUN_1407e5d3c(uVar25 + 0x70);
      }
      if ((char)unaff_RBP[0x102] == '\x01') {
        *(int **)(puVar32 + -8) = unaff_RBP;
        *(undefined8 *)(puVar32 + -0x10) = 0x1407605ca;
        FUN_14075a4cb();
        puVar32 = (undefined1 *)(ulonglong)((int)(puVar32 + -8) + 4);
      }
      if ((((unaff_RBP[0xf] == 0) || (*(int *)((ulonglong)(uint)unaff_RBP[0xf] + 0x58) != iVar15))
          && ((*(byte *)((longlong)unaff_RBP + 0x409) & 1) == 0)) &&
         (((*(uint *)(uVar19 + 0x2224) == 0 ||
           (*(char *)((ulonglong)*(uint *)(uVar19 + 0x2224) + 0xfa) != '\x01')) ||
          ((*(uint *)(puVar32 + 0x14) & 0x20000) != 0)))) {
        bVar14 = (puVar32[7] ^ 1) & (*(uint *)(puVar32 + 0x14) >> 0x1c & 1) == 0;
      }
      else {
        bVar14 = 0;
      }
      if ((*(int *)(puVar32 + 0x2c) != 0) && (bVar14 == 0)) {
        uVar25 = unaff_RBP[1];
        *(ulonglong *)(puVar32 + -8) = (ulonglong)uVar25;
        *(undefined8 *)(puVar32 + -0x10) = *(undefined8 *)(puVar32 + 0x144);
        *(undefined8 *)(puVar32 + -0x18) = 0x140760630;
        iVar17 = FUN_1408c84e0();
        puVar32 = (undefined1 *)(ulonglong)((int)(puVar32 + -0x10) + 8);
        if (iVar17 != 0) {
          piVar18 = (int *)((ulonglong)(puVar32 + 0x110) & 0xffffffff);
          *piVar18 = unaff_RBP[0x2c];
          *(undefined8 *)(puVar32 + -8) = *(undefined8 *)(puVar32 + 0x148);
          *(int **)(puVar32 + -0x10) = piVar18;
          *(ulonglong *)(puVar32 + -0x18) = (ulonglong)uVar25;
          *(undefined8 *)(puVar32 + -0x20) = 0x140760654;
          iVar17 = FUN_140752137();
          puVar32 = (undefined1 *)(ulonglong)((int)(puVar32 + -0x18) + 0xc);
          unaff_RBP[1] = iVar17;
          unaff_RBP[0x2c] = *piVar18;
        }
      }
      *(int *)(puVar32 + 0x90) = iVar15 + 0x68;
      *(ulonglong *)(puVar32 + -8) = (ulonglong)(iVar15 + 0x70);
      *(undefined8 *)(puVar32 + -0x10) = 0x140760677;
      FUN_140764b34((ulonglong)unaff_RBP & 0xffffffff);
      iVar17 = (int)(puVar32 + -8);
      uVar33 = (ulonglong)(iVar17 + 4);
      if ('\0' < *(char *)((longlong)unaff_RBP + 0x11b)) {
        *(char *)((longlong)unaff_RBP + 0x11b) = *(char *)((longlong)unaff_RBP + 0x11b) + -1;
      }
      if ('\0' < (char)unaff_RBP[0x47]) {
        *(char *)(unaff_RBP + 0x47) = (char)unaff_RBP[0x47] + -1;
      }
      if ('\0' < *(char *)((longlong)unaff_RBP + 0x11d)) {
        *(char *)((longlong)unaff_RBP + 0x11d) = *(char *)((longlong)unaff_RBP + 0x11d) + -1;
      }
      if ((*(int *)(uVar33 + 0x2c) == 0) &&
         (((byte)*(undefined4 *)(uVar33 + 0x50) & *(byte *)(uVar33 + 0x34)) == 0)) {
        *(char *)(unaff_RBP + 0x47) = '\x01';
      }
      if ((((*(uint *)(uVar33 + 0x14) & 0x6000000) != 0 & *(byte *)(uVar33 + 7)) == 1) &&
         (*(char *)(unaff_RBP + 0x47) = '\x01', (*(byte *)(uVar33 + 0x14) & 0x40) != 0)) {
        if (*(char *)(uVar33 + 0x50) == '\0') {
          unaff_RBP[0x18] = 0;
          unaff_RBP[0x16] = 0;
        }
        if (*(char *)(uVar33 + 0x34) == '\0') {
          unaff_RBP[0x19] = 0;
          unaff_RBP[0x17] = 0;
        }
        *(undefined8 *)(ulonglong)(iVar15 + 0x68) = 0;
        ((undefined8 *)(ulonglong)(iVar15 + 0x68))[1] = 0;
      }
      *(undefined8 *)(uVar33 - 8) = 0x140760717;
      FUN_140765e26((ulonglong)unaff_RBP & 0xffffffff);
      *(int *)((ulonglong)(iVar17 - 4) + 4) = unaff_RBP[0xf];
      *(undefined8 *)((ulonglong)(iVar17 - 4) - 8) = 0x140760726;
      FUN_140762f77();
      puVar34 = (uint *)(ulonglong)(iVar17 + 4);
      puVar34[-2] = 0x40760730;
      puVar34[-1] = 1;
      FUN_1407662ab((ulonglong)unaff_RBP & 0xffffffff);
      uVar25 = unaff_RBP[3];
      bVar40 = (uVar25 >> 0x18 & 1) == 0;
      bVar14 = *(byte *)((longlong)unaff_RBP + 0x409);
      lVar23 = 0xd00;
      if (bVar40 || (bVar14 & 1) != 0) {
        lVar23 = 0xd08;
        if ((uVar25 >> 0x1b & 1) != 0) {
          lVar23 = 0xce0;
        }
        if ((uVar25 & 0x6000000) == 0) {
          lVar23 = 0xce0;
        }
      }
      fVar41 = *(float *)(uVar19 + lVar23);
      unaff_RBP[0x23] = (int)fVar41;
      iVar15 = *(int *)(uVar19 + 0xcd4);
      unaff_RBP[0x21] = *(int *)(uVar19 + 0xcd8);
      unaff_RBP[0x20] = iVar15;
      *puVar34 = uVar25;
      if ((((((uVar25 >> 0x1a & 1) == 0 & ~(bVar40 | bVar14)) == 1) &&
           ((*(byte *)(unaff_RBP + 5) & 2) == 0)) && (fVar41 == 0.0)) && (!NAN(fVar41))) {
        iVar15 = 0;
        if ((*puVar34 >> 10 & 1) != 0) {
          iVar15 = *(int *)(uVar19 + 0xcd8);
        }
        unaff_RBP[0x20] = 0;
        unaff_RBP[0x21] = iVar15;
        iVar15 = 0;
      }
      puVar34[9] = *(uint *)(uVar19 + 0x1f60);
      piVar35 = (int *)(ulonglong)(iVar17 - 4);
      piVar35[1] = *(int *)(uVar19 + 0xd1c);
      *piVar35 = iVar15;
                    /* WARNING: Subroutine does not return */
      *(undefined **)(piVar35 + -2) = &UNK_1407607fb;
      FUN_140755a9a();
    }
LAB_14076047b:
    puVar29[-2] = 0x40760482;
    puVar29[-1] = 1;
    FUN_140769276((ulonglong)unaff_RBP & 0xffffffff);
  }
  uVar30 = (ulonglong)((int)(puVar28 + -8) - 4);
  *(int *)(uVar30 + 4) = unaff_RBP[0xf];
  *(undefined8 *)(uVar30 - 8) = 0x140760491;
  FUN_140762f77();
  puVar31 = (undefined1 *)(ulonglong)uVar25;
  *(undefined8 *)(puVar31 + -8) = 0x14076049b;
  FUN_1407662ab((ulonglong)unaff_RBP & 0xffffffff);
  *(undefined4 *)(uVar19 + 0x1ed0) = 0;
  iVar17 = unaff_RBP[0x14];
  uVar6 = *(undefined8 *)(unaff_RBP + 0x14);
  fVar41 = (float)unaff_RBP[0x18];
  fVar5 = (float)unaff_RBP[0x24];
  piVar18 = (int *)((longlong)puVar31 + 0x110U & 0xffffffff);
  piVar18[1] = unaff_RBP[0x15];
  *piVar18 = iVar17;
  *(ulonglong *)(piVar18 + 2) =
       CONCAT44(fVar5 + (float)((ulonglong)uVar6 >> 0x20),fVar41 + (float)uVar6);
  *(undefined8 *)(puVar31 + -8) = 0x1407604da;
  uVar21 = FUN_140769139((ulonglong)unaff_RBP & 0xffffffff);
  uVar25 = *(uint *)(puVar31 + 0x14);
  if (((uVar25 >> 0x17 & 1) == 0) && (*(char *)((longlong)unaff_RBP + 0xff) == '\0')) {
    *(undefined8 *)(puVar31 + -8) = 1;
    *(ulonglong *)(puVar31 + -0x10) = (ulonglong)(iVar15 + 0x264);
    *(ulonglong *)(puVar31 + -0x18) = (ulonglong)(iVar15 + 0x25c);
    *(undefined8 *)(puVar31 + -0x20) = 0x14076210f;
    uVar21 = FUN_1407623fa();
    puVar31 = (undefined1 *)(ulonglong)((int)(puVar31 + -0x18) + 0xc);
  }
  *(short *)(unaff_RBP + 0x42) = (short)unaff_RBP[0x42] + 1;
  *(char *)((longlong)unaff_RBP + 0xfb) = '\0';
  if (*(uint *)(puVar31 + 0x30) == uVar16) goto LAB_1407622a9;
  if (*(char *)((longlong)unaff_RBP + 0xff) != '\0') {
    *(char *)((longlong)unaff_RBP + 0xfe) = '\x01';
    goto LAB_1407622a9;
  }
  uVar21 = CONCAT71((int7)(uVar21 >> 8),*(char *)((longlong)unaff_RBP + 0x409)) & 0xffffffffffffff05
  ;
  if ((char)uVar21 == '\x01') {
    uVar21 = (ulonglong)(uint)unaff_RBP[0xae];
    if (unaff_RBP[0xae] == *(uint *)(uVar19 + 4)) {
      *(char *)(unaff_RBP + 0x47) = '\x01';
    }
    else {
      *(char *)((longlong)unaff_RBP + 0x11b) = '\x01';
    }
  }
  if ((uVar25 & 0x11000000) == 0x1000000) {
    if ((((*(byte *)((longlong)unaff_RBP + 0x15) & 1) == 0) ||
        (*(char *)(uVar19 + 0x2099) != '\x01')) || (*(uint *)(uVar19 + 0x2048) == 0)) {
      bVar40 = false;
    }
    else {
      bVar40 = *(int *)((ulonglong)*(uint *)(uVar19 + 0x2048) + 0x3b8) == unaff_RBP[0xee];
    }
    if (((*(char *)(uVar19 + 0x2748) == '\0') && (!bVar40)) &&
       (((float)unaff_RBP[0x91] <= (float)unaff_RBP[0x8f] ||
        ((float)unaff_RBP[0x92] <= (float)unaff_RBP[0x90])))) {
      if (((char)unaff_RBP[0x46] < '\x01') && (*(char *)((longlong)unaff_RBP + 0x119) < '\x01')) {
        *(char *)((longlong)unaff_RBP + 0x11b) = '\x01';
      }
      else {
        *(char *)(unaff_RBP + 0x47) = '\x01';
      }
    }
    uVar21 = (ulonglong)*(uint *)(puVar31 + 0xc);
    if (*(uint *)(puVar31 + 0xc) != 0) {
      if ((*(char *)(uVar21 + 0xfc) != '\0') || ('\0' < *(char *)(uVar21 + 0x11b))) {
        *(char *)((longlong)unaff_RBP + 0x11b) = '\x01';
      }
      if ('\0' < *(char *)(uVar21 + 0x11c)) {
        *(char *)(unaff_RBP + 0x47) = '\x01';
      }
    }
  }
  if (*(float *)(uVar19 + 0xccc) <= 0.0) {
    *(char *)((longlong)unaff_RBP + 0x11b) = '\x01';
LAB_14076225a:
    bVar40 = true;
    uVar21 = 0;
  }
  else {
    if (('\0' < *(char *)((longlong)unaff_RBP + 0x11b)) || ('\0' < (char)unaff_RBP[0x47]))
    goto LAB_14076225a;
    bVar40 = '\0' < *(char *)((longlong)unaff_RBP + 0x11d);
    uVar21 = CONCAT71((int7)(uVar21 >> 8),1);
  }
  *(bool *)((longlong)unaff_RBP + 0x101) = bVar40;
  if ('\0' < *(char *)((longlong)unaff_RBP + 0x11e)) {
    *(char *)((longlong)unaff_RBP + 0x11e) = *(char *)((longlong)unaff_RBP + 0x11e) + -1;
    unaff_RBP[3] = unaff_RBP[3] | 0x30200;
  }
  if (((((char)unaff_RBP[0x3f] == '\0') &&
       ((*(byte *)((longlong)unaff_RBP + 0xf9) & (byte)uVar21) != 0)) ||
      ('\0' < (char)unaff_RBP[0x46])) || ('\0' < *(char *)((longlong)unaff_RBP + 0x119))) {
    *(char *)((longlong)unaff_RBP + 0xfe) = '\0';
  }
  else {
    *(bool *)((longlong)unaff_RBP + 0xfe) = (char)unaff_RBP[0x47] < '\x01';
    if ((char)unaff_RBP[0x47] < '\x01') {
      uVar21 = (ulonglong)*(ushort *)(unaff_RBP + 0x68);
      *(ushort *)((longlong)unaff_RBP + 0x1a2) = *(ushort *)(unaff_RBP + 0x68);
    }
  }
LAB_1407622a9:
  if ((*(char *)((longlong)unaff_RBP + 0x102) == '\0') &&
     (((*(int *)(puVar31 + 0x2c) == 0 && (*(char *)(uVar19 + 0xa3) != '\0')) ||
      ((*(char *)(uVar19 + 0xa4) == '\x01' &&
       (uVar21 = (ulonglong)(uint)(int)*(char *)(uVar19 + 0x27e4),
       *(uint *)(uVar19 + 0x14a8) == (int)*(char *)(uVar19 + 0x27e4))))))) {
    if ('\0' < (char)unaff_RBP[0x46]) {
      *(char *)(unaff_RBP + 0x46) = (char)unaff_RBP[0x46] + '\x01';
    }
    if ('\0' < *(char *)((longlong)unaff_RBP + 0x119)) {
      *(char *)((longlong)unaff_RBP + 0x119) = *(char *)((longlong)unaff_RBP + 0x119) + '\x01';
    }
    uVar19 = 0;
  }
  else {
    uVar19 = CONCAT71((int7)(uVar21 >> 8),*(char *)((longlong)unaff_RBP + 0xfe)) ^ 1;
  }
  if (_DAT_150aeb001 != (*(uint *)(puVar31 + 0x130) ^ (uint)puVar31)) {
                    /* WARNING: Subroutine does not return */
    *(code **)(puVar31 + -8) = FUN_14076236b;
    FUN_1408802b0(*(uint *)(puVar31 + 0x130) ^ (uint)puVar31);
  }
  return uVar19;
}

