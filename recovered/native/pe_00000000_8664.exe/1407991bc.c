/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407991bc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1407991bc(void)

{
  uint uVar1;
  uint uVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined1 uVar10;
  uint uVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  ulonglong uVar16;
  undefined4 *puVar18;
  ulonglong uVar19;
  undefined1 *puVar20;
  undefined4 *puVar21;
  ulonglong uVar22;
  uint uVar23;
  undefined4 *puVar24;
  ulonglong uVar25;
  float10 in_ST0;
  float10 in_ST1;
  float fVar26;
  ulonglong uVar17;
  
  uVar23 = _DAT_150b36920;
  puVar12 = (undefined8 *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0x6c);
  uVar25 = (ulonglong)_DAT_150b36920;
  *(undefined1 *)((ulonglong)*(uint *)(uVar25 + 0x14cc) + 0xfb) = 1;
  if (*(char *)((ulonglong)*(uint *)(uVar25 + 0x14cc) + 0xfe) != '\0') {
    uVar3 = 0;
    goto LAB_1407995d6;
  }
  uVar11 = *(uint *)((longlong)puVar12 + 0x98);
  uVar7 = *(uint *)((longlong)puVar12 + 0x94);
  if (uVar7 == 0) {
    *(undefined8 *)((longlong)puVar12 + -8) = *(undefined8 *)((longlong)puVar12 + 0x84);
    *(undefined8 *)((longlong)puVar12 + -0x10) = 0x140799215;
    lVar8 = FUN_14078bd99();
    puVar12 = (undefined8 *)(ulonglong)((int)(undefined1 *)((longlong)puVar12 + -8) + 4);
    uVar7 = *(uint *)(lVar8 + 8);
  }
  uVar1 = *(uint *)((longlong)puVar12 + 0x88);
  uVar2 = uVar23 + 0x1e6e;
  if ((*(byte *)(uVar25 + 0x1e48) & 8) == 0) {
    uVar2 = uVar23 + 0x2550;
  }
  *(uint *)((longlong)puVar12 + 4) = uVar7;
  if ((uVar11 >> 0xe & 1) == 0) {
LAB_14079925f:
    *(ulonglong *)((longlong)puVar12 + -8) = (ulonglong)uVar7;
    *(ulonglong *)((longlong)puVar12 + -0x10) = (ulonglong)uVar1;
    *(undefined8 *)((longlong)puVar12 + -0x18) = *(undefined8 *)((longlong)puVar12 + 0x7c);
    *(undefined8 *)((longlong)puVar12 + -0x20) = 0x40;
    *(ulonglong *)((longlong)puVar12 + -0x28) = (ulonglong)((longlong)puVar12 + 0x28) & 0xffffffff;
    *(undefined8 *)((longlong)puVar12 + -0x30) = 0x140799274;
    FUN_14078bda7();
    puVar12 = (undefined8 *)(ulonglong)((int)(undefined1 *)((longlong)puVar12 + -0x28) + 0x14);
  }
  else {
    *(ulonglong *)((longlong)puVar12 + -8) = (ulonglong)uVar2;
    *(ulonglong *)((longlong)puVar12 + -0x10) = (ulonglong)uVar1;
    *(undefined8 *)((longlong)puVar12 + -0x18) = *(undefined8 *)((longlong)puVar12 + 0x7c);
    *(undefined8 *)((longlong)puVar12 + -0x20) = 0x140799250;
    iVar5 = FUN_14078c6b7();
    uVar7 = *(uint *)((longlong)puVar12 + -8);
    puVar12 = (undefined8 *)(ulonglong)((int)(undefined1 *)((longlong)puVar12 + -0x18) + 0xc);
    if (iVar5 != 0) goto LAB_14079925f;
    *(undefined1 *)((longlong)puVar12 + 0x28) = 0;
  }
  *(byte *)(uVar25 + 0x1e4e) = *(byte *)(uVar25 + 0x1e4e) | 1;
  uVar7 = *(uint *)((longlong)puVar12 + 0x80);
  if (*(int *)((longlong)puVar12 + 0x8c) != 0) {
    *(undefined8 *)((longlong)puVar12 + -8) = 0x14079929e;
    FUN_14076d4c9();
    *(float *)((longlong)puVar12 + 0x1c) = (float)in_ST0;
    *(undefined4 *)((longlong)puVar12 + 0xc) = *(undefined4 *)((longlong)puVar12 + 0x1c);
    *(undefined8 *)((longlong)puVar12 + -8) = 0x1407992b3;
    FUN_14076d519();
    *(ulonglong *)((longlong)puVar12 + -8) = (ulonglong)uVar7;
    *(undefined8 *)((longlong)puVar12 + -0x10) = 0x1407992b9;
    FUN_14076b0ca();
    uVar13 = (ulonglong)((int)(undefined1 *)((longlong)puVar12 + -8) + 4);
    *(undefined8 *)(uVar13 - 8) = 0x1407992c1;
    FUN_14076d403();
    *(float *)(uVar13 + 0x18) = (float)in_ST1;
    fVar26 = *(float *)(uVar25 + 0xd24) + *(float *)(uVar13 + 0xc);
    puVar14 = (undefined4 *)(ulonglong)((int)(undefined1 *)((longlong)puVar12 + -8) - 4);
    puVar14[1] = *(float *)(uVar13 + 0x18) - (fVar26 + fVar26);
    *puVar14 = 0x3f800000;
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar14 + -2) = &UNK_1407992f6;
    FUN_140755a9a();
  }
  *(undefined8 *)((longlong)puVar12 + -8) = 0;
  *(undefined8 *)((longlong)puVar12 + -0x10) = 0;
  *(ulonglong *)((longlong)puVar12 + -0x18) = (ulonglong)(uVar11 | 0x10001000);
  *(undefined8 *)((longlong)puVar12 + -0x20) = 0x40;
  *(ulonglong *)((longlong)puVar12 + -0x28) = (ulonglong)((longlong)puVar12 + 0x28) & 0xffffffff;
  *(ulonglong *)((longlong)puVar12 + -0x30) = (ulonglong)uVar7;
  *(undefined8 *)((longlong)puVar12 + -0x38) = 0x140799356;
  uVar3 = FUN_1407995f9();
  puVar12 = (undefined8 *)(ulonglong)((int)(undefined1 *)((longlong)puVar12 + -0x30) + 0x18);
  if ((*(byte *)(uVar25 + 0x1e89) & 8) == 0) {
    *(byte *)(uVar25 + 0x1e86) = *(byte *)(uVar25 + 0x1e86) & 0xfe;
    uVar10 = 0;
    uVar11 = *(uint *)(puVar12 + 0x13);
  }
  else {
    *(undefined1 *)((longlong)puVar12 + 3) = uVar3;
    uVar23 = uVar23 + 0x1e80;
    *(undefined4 *)((longlong)puVar12 + 0xc) = 0;
    uVar11 = *(uint *)(puVar12 + 0x13);
    puVar12[-1] = (ulonglong)((int)(uVar11 << 0x12) >> 0x1f & uVar2);
    puVar12[-2] = *puVar12;
    puVar12[-3] = (ulonglong)*(uint *)(puVar12 + 0x10);
    puVar12[-4] = puVar12[0xf];
    puVar12[-5] = (ulonglong)(puVar12 + 5) & 0xffffffff;
    puVar12[-6] = 0x1407993c3;
    uVar6 = FUN_14078c4ea();
    puVar12 = (undefined8 *)(ulonglong)((int)(puVar12 + -5) + 0x14);
    if (*(int *)((longlong)puVar12 + 0x8c) == 0) {
      *(byte *)(uVar25 + 0x1e86) = *(byte *)(uVar25 + 0x1e86) & 0xfe;
      if ((char)uVar6 == '\0') goto LAB_1407995c4;
LAB_1407995b6:
      *(undefined8 *)((longlong)puVar12 + -8) = *(undefined8 *)(ulonglong)uVar23;
      *(undefined8 *)((longlong)puVar12 + -0x10) = 0x1407995bd;
      FUN_14075a7e3();
      puVar12 = (undefined8 *)(ulonglong)((int)(undefined1 *)((longlong)puVar12 + -8) + 4);
      uVar10 = 1;
    }
    else {
      *(undefined4 *)((longlong)puVar12 + 8) = uVar6;
      *(uint *)((longlong)puVar12 + 0x10) = uVar23;
      *(undefined4 *)((longlong)puVar12 + 4) = *(undefined4 *)(uVar25 + 0xd0c);
      uVar6 = *(undefined4 *)(uVar25 + 0xd10);
      *(undefined4 *)((longlong)puVar12 + 0x14) = uVar6;
      *(undefined4 *)(uVar25 + 0xd0c) = uVar6;
      if ((uVar11 >> 9 & 1) != 0) {
        *(undefined8 *)((longlong)puVar12 + -8) = 1;
        *(undefined8 *)((longlong)puVar12 + -0x10) = 0x140799403;
        FUN_140769741();
        puVar12 = (undefined8 *)(ulonglong)((int)(undefined1 *)((longlong)puVar12 + -8) + 4);
      }
      uVar23 = *(uint *)((longlong)puVar12 + 0x90);
      *(undefined8 *)((longlong)puVar12 + -8) = 1;
      *(undefined8 *)((longlong)puVar12 + -0x10) = 8;
      *(undefined8 *)((longlong)puVar12 + -0x18) = 0x140799416;
      FUN_14076964d();
      puVar15 = (undefined4 *)((ulonglong)((longlong)puVar12 + -0x10) & 0xffffffff);
      puVar15[1] = *(undefined4 *)(uVar25 + 0xd24);
      *puVar15 = 0;
      *(undefined8 *)(puVar15 + -2) = 0x140799434;
      FUN_14076c8de();
      uVar16 = (ulonglong)((int)(undefined1 *)((longlong)puVar12 + -0x10) + 8);
      puVar24 = (undefined4 *)(uVar16 + 0x20 & 0xffffffff);
      uVar6 = *(undefined4 *)(uVar16 + 0xc);
      *puVar24 = uVar6;
      puVar24[1] = uVar6;
      *(undefined8 *)(uVar16 - 8) = 0;
      *(undefined4 **)(uVar16 - 0x10) = puVar24;
      *(undefined8 *)(uVar16 - 0x18) = 0x10347065;
      *(undefined8 *)(uVar16 - 0x20) = 0x140799456;
      cVar4 = FUN_140785e29();
      uVar11 = (int)(uVar16 - 0x18) + 0xc;
      uVar17 = (ulonglong)uVar11;
      if (cVar4 != '\0') {
        uVar11 = *(uint *)(uVar17 + 0x8c);
        if (*(char *)(uVar25 + 0x104) != '\0') {
          uVar11 = uVar23;
        }
        if (uVar23 == 0) {
          uVar11 = *(uint *)(uVar17 + 0x8c);
        }
        *(ulonglong *)(uVar17 - 8) = (ulonglong)uVar11;
        uVar11 = *(uint *)(uVar17 + 0x84);
        *(ulonglong *)(uVar17 - 0x10) = (ulonglong)uVar11;
        *(ulonglong *)(uVar17 - 0x18) = (ulonglong)uVar11;
        *(undefined8 *)(uVar17 - 0x20) = 0x2d;
        *(undefined8 *)(uVar17 - 0x28) = *(undefined8 *)(uVar17 + 0x74);
        *(undefined8 *)(uVar17 - 0x30) = 0x14079948d;
        uVar9 = FUN_14078be35();
        uVar11 = (int)(uVar17 - 0x28) + 0x14;
        *(undefined1 *)((ulonglong)uVar11 + 3) = 1;
        *(int *)((ulonglong)uVar11 + 8) = (int)CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
      }
      puVar18 = (undefined4 *)(ulonglong)(uVar11 - 8);
      puVar18[1] = *(undefined4 *)(uVar25 + 0xd24);
      *puVar18 = 0;
      *(undefined8 *)(puVar18 + -2) = 0x1407994b4;
      FUN_14076c8de();
      uVar19 = (ulonglong)uVar11;
      *(undefined4 *)(uVar19 + 0x20) = *(undefined4 *)(uVar19 + 0xc);
      *(undefined4 *)(uVar19 + 0x24) = *(undefined4 *)(uVar19 + 0xc);
      *(undefined8 *)(uVar19 - 8) = 0;
      *(undefined4 **)(uVar19 - 0x10) = puVar24;
      *(undefined8 *)(uVar19 - 0x18) = 0x103471b7;
      *(undefined8 *)(uVar19 - 0x20) = 0x1407994d5;
      cVar4 = FUN_140785e29();
      puVar20 = (undefined1 *)(ulonglong)((int)(uVar19 - 0x18) + 0xc);
      if (cVar4 != '\0') {
        uVar11 = *(uint *)(puVar20 + 0x8c);
        if (*(char *)(uVar25 + 0x104) != '\0') {
          uVar11 = uVar23;
        }
        if (uVar23 == 0) {
          uVar11 = *(uint *)(puVar20 + 0x8c);
        }
        *(ulonglong *)(puVar20 + -8) = (ulonglong)uVar11;
        *(ulonglong *)(puVar20 + -0x10) = (ulonglong)*(uint *)(puVar20 + 0x84);
        *(ulonglong *)(puVar20 + -0x18) = (ulonglong)*(uint *)(puVar20 + 0x84);
        *(undefined8 *)(puVar20 + -0x20) = 0x2b;
        *(undefined8 *)(puVar20 + -0x28) = *(undefined8 *)(puVar20 + 0x74);
        *(undefined8 *)(puVar20 + -0x30) = 0x14079950c;
        uVar9 = FUN_14078be35();
        puVar20 = (undefined1 *)(ulonglong)((int)(puVar20 + -0x28) + 0x14);
        puVar20[3] = 1;
        *(int *)(puVar20 + 8) = (int)CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
      }
      *(undefined8 *)(puVar20 + -8) = 0x14079951f;
      FUN_140769709();
      uVar11 = *(uint *)(puVar20 + 0x98);
      if ((uVar11 >> 9 & 1) != 0) {
        *(undefined8 *)(puVar20 + -8) = 0x140799531;
        FUN_140769831();
      }
      *(undefined8 *)(puVar20 + -8) = 0;
      uVar23 = *(uint *)(puVar20 + 0x7c);
      *(ulonglong *)(puVar20 + -0x10) = (ulonglong)uVar23;
      *(undefined8 *)(puVar20 + -0x18) = 0x140799540;
      uVar7 = FUN_14075544d();
      puVar12 = (undefined8 *)(ulonglong)((int)(puVar20 + -0x10) + 8);
      if (uVar23 != uVar7) {
        puVar21 = (undefined4 *)((ulonglong)(puVar20 + -0x10) & 0xffffffff);
        puVar21[1] = *(undefined4 *)(uVar25 + 0xd24);
        *puVar21 = 0;
        *(undefined8 *)(puVar21 + -2) = 0x140799564;
        FUN_14076c8de();
        uVar22 = (ulonglong)((int)(puVar20 + -0x10) + 8);
        *(undefined8 *)(uVar22 - 8) = 0;
        uVar11 = *(uint *)(uVar22 + 0x94);
        *(ulonglong *)(uVar22 - 0x10) = (ulonglong)uVar7;
        *(ulonglong *)(uVar22 - 0x18) = (ulonglong)uVar23;
        *(undefined8 *)(uVar22 - 0x20) = 0x140799576;
        FUN_140784a9c();
        puVar12 = (undefined8 *)(ulonglong)((int)(uVar22 - 0x18) + 0xc);
      }
      *(undefined4 *)(uVar25 + 0xd0c) = *(undefined4 *)((longlong)puVar12 + 4);
      *(undefined4 *)(uVar25 + 0xd10) = *(undefined4 *)((longlong)puVar12 + 0x14);
      *(undefined8 *)((longlong)puVar12 + -8) = 0x140799592;
      FUN_14076b438();
      *(undefined8 *)((longlong)puVar12 + -8) = 0x140799597;
      FUN_14076c4ff();
      *(byte *)(uVar25 + 0x1e86) = *(byte *)(uVar25 + 0x1e86) & 0xfe;
      if (*(char *)((longlong)puVar12 + 8) != '\0') {
        uVar23 = *(uint *)((longlong)puVar12 + 0x10);
        goto LAB_1407995b6;
      }
LAB_1407995c4:
      uVar10 = 0;
    }
    uVar3 = *(undefined1 *)((longlong)puVar12 + 3);
  }
  if ((uVar11 & 0x40) == 0) {
    uVar3 = uVar10;
  }
LAB_1407995d6:
  if (_DAT_150b222e2 == (*(uint *)((longlong)puVar12 + 0x68) ^ (uint)puVar12)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  *(code **)((longlong)puVar12 + -8) = FUN_1407995f9;
  FUN_1408802b0(*(uint *)((longlong)puVar12 + 0x68) ^ (uint)puVar12);
}

