/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14078285c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14078285c(ulonglong param_1,undefined4 param_2,ulonglong param_3)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  byte bVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  int *piVar10;
  undefined8 *puVar11;
  float *pfVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  undefined4 *puVar15;
  float *pfVar16;
  longlong lVar17;
  int iVar18;
  int iVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  undefined8 *puVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  undefined8 *puVar26;
  undefined4 *puVar27;
  undefined8 *puVar28;
  undefined1 *puVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  undefined1 *puVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  undefined8 *puVar36;
  uint uVar37;
  longlong in_R11;
  int unaff_R14D;
  float fVar38;
  float fVar39;
  float fVar40;
  
  puVar24 = (undefined1 *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0x110);
  *(undefined4 *)(puVar24 + 0x10) = param_2;
  puVar36 = (undefined8 *)(param_1 & 0xffffffff);
  piVar10 = (int *)((ulonglong)_DAT_8489e03110388d00 & 0xffffffffffffff0c);
  *piVar10 = *piVar10 + (int)piVar10;
  *(char *)(param_1 + 0x1039d74c) =
       *(char *)(param_1 + 0x1039d74c) + (char)((ulonglong)piVar10 >> 8);
  *(undefined4 *)(puVar24 + 0x2c) = *(undefined4 *)(param_1 + 0x90);
  *(int *)(puVar24 + 0xc) = (int)piVar10;
  *(int *)(puVar24 + 0x34) = piVar10[1];
  bVar3 = *(byte *)((longlong)puVar36 + 0xac);
  *(byte *)((longlong)puVar36 + 0xac) = bVar3 & 0xbf;
  *(undefined4 *)(puVar36 + 0x14) = 0;
  puVar23 = puVar36;
  do {
    puVar11 = puVar23;
    puVar23 = (undefined8 *)(ulonglong)*(uint *)(puVar11 + 3);
  } while (*(uint *)(puVar11 + 3) != 0);
  *(undefined8 *)(puVar24 + -8) = 0x1407828c2;
  cVar5 = FUN_140783522(param_1 & 0xffffffff,puVar11);
  uVar9 = *(uint *)(puVar36 + 2);
  if ((uVar9 & 0x3000) != 0) {
    if (*(int *)((longlong)puVar36 + 0x24) < 1) {
      *(undefined4 *)((longlong)puVar36 + 0x7c) = 0;
      *(byte *)((longlong)puVar36 + 0xac) = bVar3 & 0xbd | cVar5 * '\x02';
      if (cVar5 != '\0') {
        *(undefined4 *)((longlong)puVar36 + 0x94) =
             *(undefined4 *)((ulonglong)*(uint *)(puVar24 + 0xc) + 4);
      }
      goto LAB_1407831e7;
    }
    iVar6 = *(int *)(ulonglong)*(uint *)((longlong)puVar36 + 0x2c);
    *(int *)((longlong)puVar36 + 0x7c) = iVar6;
    *(byte *)((longlong)puVar36 + 0xac) = bVar3 & 0xbd | cVar5 * '\x02';
    if (cVar5 == '\0') {
      if (iVar6 == 0) goto LAB_1407831e7;
      if (*(int *)((longlong)puVar11 + 0x7c) == 0) goto LAB_140782a3a;
    }
    else {
      *(undefined4 *)((longlong)puVar36 + 0x94) =
           *(undefined4 *)((ulonglong)*(uint *)(puVar24 + 0xc) + 4);
      if (iVar6 == 0) goto LAB_1407831e7;
LAB_140782a3a:
      *(int *)((longlong)puVar11 + 0x7c) = iVar6;
    }
    if (*(uint *)(puVar36 + 6) != 0) {
      *(undefined4 *)((ulonglong)*(uint *)(puVar36 + 6) + 0x24) =
           *(undefined4 *)((ulonglong)*(uint *)((longlong)puVar36 + 0x7c) + 0xb8);
    }
    goto LAB_1407831e7;
  }
  puVar24[3] = cVar5;
  *(int *)(puVar24 + 0x28) = (int)puVar11;
  uVar20 = (ulonglong)*(uint *)(puVar24 + 0x10);
  puVar24[0x1b] = *(undefined1 *)(uVar20 + 0xfe);
  if ((uVar9 >> 10 & 1) == 0) {
    *(undefined1 *)(uVar20 + 0xfe) = 0;
    *(undefined4 *)(uVar20 + 0x19c) = 1;
  }
  *(undefined8 *)(puVar24 + -8) = *puVar36;
  *(undefined8 *)(puVar24 + -0x10) = 0x140782945;
  FUN_14076b2d6();
  puVar25 = (undefined1 *)(ulonglong)((int)(puVar24 + -8) + 4);
  iVar6 = *(int *)(puVar36 + 6);
  *(int *)(puVar25 + 4) = iVar6;
  *(int *)(puVar25 + 0x24) = iVar6;
  uVar9 = *(uint *)(puVar25 + 0xc);
  if (iVar6 == 0) {
    *(undefined8 *)(puVar25 + -8) = 0x140782962;
    FUN_140781934(param_1 & 0xffffffff);
    iVar6 = *(int *)(puVar36 + 6);
    *(int *)(puVar25 + 4) = iVar6;
  }
  uVar20 = (ulonglong)CONCAT31((int3)((uint)iVar6 >> 8),*(undefined1 *)((longlong)puVar36 + 0xac)) &
           0xfffffffffffffffd;
  *(byte *)((longlong)puVar36 + 0xac) = (byte)uVar20 | puVar25[3] * '\x02';
  if ((*(byte *)((longlong)puVar36 + 0x11) & 0x40) == 0) {
    *(undefined4 *)(puVar25 + 0x1c) = 0;
    if (*(int *)((ulonglong)uVar9 + 0xcf8) == -1) {
      *(undefined4 *)(puVar25 + 8) = 0;
      goto LAB_140782a73;
    }
    *(int *)(puVar25 + 8) = (int)CONCAT71((int7)(uVar20 >> 8),1);
    *(undefined8 *)(puVar25 + -8) = 0;
    *(undefined8 *)(puVar25 + -0x10) = 0x10330ec7;
    *(undefined8 *)(puVar25 + -0x18) = 0x1407829b0;
    cVar5 = FUN_14076dc89();
    puVar25 = (undefined1 *)(ulonglong)((int)(puVar25 + -0x10) + 8);
    uVar20 = (ulonglong)*(uint *)(puVar25 + 4);
    if (cVar5 != '\0') {
      iVar6 = *(int *)((ulonglong)*(uint *)(puVar25 + 4) + 0x1c);
      *(undefined8 *)(puVar25 + -8) = 0x1407829d1;
      FUN_1407835a1(param_1 & 0xffffffff,*(undefined4 *)(puVar25 + 4));
      iVar19 = *(int *)((ulonglong)*(uint *)(puVar25 + 4) + 0x1c);
      uVar20 = (ulonglong)*(uint *)(puVar25 + 4);
      iVar18 = 0;
      if (iVar19 != iVar6) {
        iVar18 = iVar19;
      }
      if (iVar19 == 0) {
        iVar18 = iVar19;
      }
      *(int *)(puVar25 + 0x1c) = iVar18;
      puVar25[3] = puVar25[3] | (*(byte *)((longlong)puVar36 + 0xac) & 2) >> 1;
    }
  }
  else {
    *(undefined4 *)(puVar25 + 8) = 0;
    *(undefined4 *)(puVar25 + 0x1c) = 0;
LAB_140782a73:
    uVar20 = (ulonglong)*(uint *)(puVar25 + 4);
  }
  *(undefined8 *)((ulonglong)(puVar25 + 0x6c) & 0xffffffff) = 0;
  ((undefined8 *)((ulonglong)(puVar25 + 0x6c) & 0xffffffff))[1] = 0;
  puVar23 = (undefined8 *)((ulonglong)(puVar25 + 0x5c) & 0xffffffff);
  *puVar23 = 0;
  puVar23[1] = 0;
  *(undefined8 *)((ulonglong)(puVar25 + 0x54) & 0xffffffff) = 0;
  *(undefined8 *)((ulonglong)(puVar25 + 0x4c) & 0xffffffff) = 0;
  *(undefined8 **)(puVar25 + -8) = (undefined8 *)((ulonglong)(puVar25 + 0x4c) & 0xffffffff);
  *(undefined8 **)(puVar25 + -0x10) = (undefined8 *)((ulonglong)(puVar25 + 0x54) & 0xffffffff);
  *(undefined8 **)(puVar25 + -0x18) = puVar23;
  *(undefined8 *)(puVar25 + -0x20) = 0x140782aa5;
  FUN_1407836ab(param_1 & 0xffffffff);
  puVar26 = (undefined8 *)(ulonglong)((int)(puVar25 + -0x18) + 0xc);
  *(undefined4 *)((longlong)puVar26 + 0x20) = *(undefined4 *)(uVar20 + 4);
  if (0 < *(int *)((longlong)puVar36 + 0x24)) {
    do {
      uVar9 = *(uint *)(ulonglong)*(uint *)((longlong)puVar36 + 0x2c);
      puVar26[-1] = *(undefined8 *)((ulonglong)uVar9 + 0xb8);
      puVar26[-2] = *puVar26;
      puVar26[-3] = 0x140782acc;
      iVar6 = FUN_1407a7515();
      puVar26 = (undefined8 *)(ulonglong)((int)(puVar26 + -2) + 8);
      if (iVar6 == 0) {
        *(ulonglong *)((longlong)puVar26 + -8) = (ulonglong)uVar9;
        *(undefined8 *)((longlong)puVar26 + -0x10) = 0x800000;
        *(undefined8 *)((longlong)puVar26 + -0x18) = *(undefined8 *)((longlong)puVar26 + -4);
        *(undefined8 *)((longlong)puVar26 + -0x20) = 0x140782ae2;
        FUN_1407a75a0();
        puVar26 = (undefined8 *)(ulonglong)((int)(undefined1 *)((longlong)puVar26 + -0x18) + 0xc);
      }
    } while (unaff_R14D < *(int *)((longlong)puVar36 + 0x24));
  }
  uVar37 = 10;
  uVar9 = *(uint *)((longlong)puVar26 + 0xc);
  if (*(char *)((longlong)puVar26 + 3) != '\0') {
    *(undefined4 *)((longlong)puVar36 + 0x94) = *(undefined4 *)((ulonglong)uVar9 + 4);
    uVar37 = 0xb;
  }
  uVar21 = (ulonglong)*(uint *)((longlong)puVar26 + 0x10);
  uVar20 = 0xc;
  if (*(char *)(uVar21 + 0xfc) == '\0') {
    uVar20 = (ulonglong)uVar37;
  }
  *(undefined8 *)((longlong)puVar26 + -8) = 0x3f800000;
  *(ulonglong *)((longlong)puVar26 + -0x10) = uVar20;
  *(undefined8 *)((longlong)puVar26 + -0x18) = 0x140782b27;
  uVar7 = FUN_140754a09();
  iVar6 = (int)(undefined1 *)((longlong)puVar26 + -0x10);
  *(undefined4 *)((ulonglong)(iVar6 + 8) + 0x14) = uVar7;
  uVar7 = *(undefined4 *)((ulonglong)uVar9 + 0xdec);
  fVar38 = *(float *)(uVar21 + 0x50);
  fVar39 = *(float *)(uVar21 + 0x54);
  uVar13 = *(undefined8 *)(uVar21 + 0x58);
  uVar20 = (ulonglong)(iVar6 + 8) + 0x7c;
  pfVar12 = (float *)(uVar20 & 0xffffffff);
  *pfVar12 = fVar38;
  pfVar12[1] = fVar39;
  pfVar12[2] = (float)uVar13 + fVar38;
  pfVar12[3] = (float)((ulonglong)uVar13 >> 0x20) + fVar39;
  puVar27 = (undefined4 *)(ulonglong)(iVar6 - 4);
  puVar27[2] = uVar7;
  puVar27[1] = (int)uVar20;
  *puVar27 = (int)(puVar27 + 0x1e);
  *(undefined8 *)(puVar27 + -2) = 0x140782b68;
  uVar8 = FUN_1407ecddc();
  uVar4 = *(undefined4 *)(uVar21 + 0x2e8);
  uVar7 = *(undefined4 *)(uVar21 + 0x88);
  puVar28 = (undefined8 *)(ulonglong)(iVar6 - 0xc);
  *(undefined4 *)((longlong)puVar28 + 0x10) = uVar8;
  *(undefined4 *)((longlong)puVar28 + 0xc) = uVar7;
  *(undefined4 *)((longlong)puVar28 + 8) = *(undefined4 *)((longlong)puVar28 + 0x28);
  *(int *)((longlong)puVar28 + 4) = iVar6 + 0x7c;
  *(int *)puVar28 = (int)(puVar27 + 0x1e);
  *(undefined8 *)((longlong)puVar28 + -8) = 0x140782b9e;
  FUN_1407e372a(uVar4);
  if (*(char *)((longlong)puVar28 + 8) == '\0') {
    uVar20 = (ulonglong)*(uint *)((longlong)puVar28 + 4);
  }
  else {
    *(undefined8 *)((longlong)puVar28 + -8) = 0;
    *(undefined8 *)((longlong)puVar28 + -0x10) = 0x1033c930;
    *(undefined8 *)((longlong)puVar28 + -0x18) = 0x140782bb7;
    uVar13 = FUN_14075a0a4(uVar21);
    *(undefined8 **)((longlong)puVar28 + -0x18) = puVar36;
    *(ulonglong *)((longlong)puVar28 + -0x20) = (ulonglong)((longlong)puVar28 + 0x40) & 0xffffffff;
    *(undefined8 *)((longlong)puVar28 + -0x28) = uVar13;
    *(undefined8 *)((longlong)puVar28 + -0x30) = 0x140782bc3;
    cVar5 = FUN_14078678b();
    puVar29 = (undefined1 *)(ulonglong)((int)(undefined4 *)((longlong)puVar28 + -0x28) + 0xc);
    if (cVar5 != '\0') {
      *(undefined8 *)(puVar29 + -8) = 0;
      *(undefined8 *)(puVar29 + -0x10) = 0x10330ec7;
      *(undefined8 *)(puVar29 + -0x18) = 0x140782bd6;
      FUN_14076dd74();
      puVar29 = (undefined1 *)(ulonglong)((int)(puVar29 + -0x10) + 8);
    }
    *(undefined8 *)(puVar29 + -8) = 0x140782bde;
    cVar5 = FUN_140763db1();
    uVar20 = (ulonglong)*(uint *)(puVar29 + 4);
    if (cVar5 != '\0') {
      *(undefined4 *)(puVar29 + 0x1c) = *(undefined4 *)(uVar20 + 0x18);
    }
    *(undefined8 *)(puVar29 + -8) = 0x11000;
    *(undefined8 *)(puVar29 + -0x10) = 0x140782bf9;
    cVar5 = FUN_14075a8ea();
    uVar37 = _DAT_2744808b1039d74c;
    puVar28 = (undefined8 *)(ulonglong)((int)(puVar29 + -8) + 4);
    if ((cVar5 != '\0') && (_DAT_150a39cef < *(float *)((ulonglong)uVar9 + 0x151c))) {
      *(char *)(ulonglong)_DAT_2744808b1039d74c =
           *(char *)(ulonglong)_DAT_2744808b1039d74c + (char)_DAT_2744808b1039d74c;
      uVar21 = 0x103471b9;
      if (uVar37 != 0) {
        uVar21 = (ulonglong)uVar37;
      }
      *(ulonglong *)((longlong)puVar28 + -8) = uVar21;
      *(undefined8 *)((longlong)puVar28 + -0x10) = 0x103344e9;
      *(undefined8 *)((longlong)puVar28 + -0x18) = 0x140782c31;
      FUN_14075aef2();
      puVar28 = (undefined8 *)(ulonglong)((int)(undefined1 *)((longlong)puVar28 + -0x10) + 8);
    }
  }
  uVar21 = (ulonglong)uVar9;
  iVar6 = *(int *)(uVar20 + 4);
  *(int *)((longlong)puVar28 + 8) = (int)param_1;
  if (0 < iVar6) {
    uVar9 = iVar6 * 0x30 - 0x2c;
    do {
      uVar37 = *(uint *)((ulonglong)*(uint *)(uVar20 + 0xc) + (ulonglong)uVar9);
      if ((uVar37 >> 0x17 & 1) == 0) goto LAB_140782c77;
      *(uint *)((ulonglong)*(uint *)(uVar20 + 0xc) + (ulonglong)uVar9) = uVar37;
      uVar9 = uVar9 - 0x30;
    } while (1 < iVar6 + 1U);
    iVar6 = 0;
LAB_140782c77:
    uVar9 = *(uint *)(uVar20 + 4);
    if (uVar9 - iVar6 != 0 && iVar6 <= (int)uVar9) {
      if ((*(byte *)(uVar21 + 0x27b5) & 4) != 0) {
        uVar13 = 0x10356101;
        if (iVar6 + 1U < uVar9) {
          uVar13 = 0x103477e9;
        }
        *(undefined8 *)((longlong)puVar28 + -8) = uVar13;
        *(ulonglong *)((longlong)puVar28 + -0x10) = (ulonglong)(uVar9 - iVar6);
        *(undefined8 *)((longlong)puVar28 + -0x18) = *puVar36;
        *(undefined8 *)((longlong)puVar28 + -0x20) = 0x1034c9a8;
        *(undefined8 *)((longlong)puVar28 + -0x28) = 0x140782cae;
        FUN_1407518b6();
        puVar28 = (undefined8 *)(ulonglong)((int)(undefined1 *)((longlong)puVar28 + -0x20) + 0x10);
        uVar9 = *(uint *)(uVar20 + 4);
      }
      if (iVar6 < (int)uVar9) {
        do {
          if ((*(byte *)(uVar21 + 0x27b5) & 4) != 0) {
            uVar9 = *(uint *)((ulonglong)*(uint *)((longlong)puVar28 + 4) + 0xc);
            uVar20 = (ulonglong)*(uint *)((ulonglong)uVar9 + 8 + (ulonglong)(uint)(iVar6 * 0x30));
            iVar19 = 0;
            if ((param_3 & uVar20) != 0) {
              iVar19 = (int)*(short *)(uVar20 + 0x40a);
            }
            *(int *)((longlong)puVar28 + 0x14) = iVar19;
            puVar23 = (undefined8 *)(ulonglong)(uVar9 + iVar6 * 0x30);
            puVar28[-1] = puVar23;
            puVar28[-2] = *puVar28;
            puVar28[-3] = 0x140782cf4;
            uVar13 = FUN_1407a7578();
            uVar30 = (ulonglong)((int)(puVar28 + -2) + 8);
            *(undefined8 *)(uVar30 - 8) = *(undefined8 *)(uVar30 + 0x14);
            *(undefined8 *)(uVar30 - 0x10) = uVar13;
            *(undefined8 *)(uVar30 - 0x18) = *puVar23;
            *(undefined8 *)(uVar30 - 0x20) = 0x1034ceaa;
            *(undefined8 *)(uVar30 - 0x28) = 0x140782d08;
            FUN_1407518b6();
            puVar28 = (undefined8 *)(ulonglong)((int)(uVar30 - 0x20) + 0x10);
            uVar9 = *(uint *)((ulonglong)*(uint *)((longlong)puVar28 + 4) + 4);
            uVar21 = (ulonglong)*(uint *)((longlong)puVar28 + 0xc);
          }
        } while (iVar6 < (int)uVar9);
      }
      puVar36 = (undefined8 *)(ulonglong)*(uint *)((longlong)puVar28 + 8);
      uVar20 = (ulonglong)*(uint *)((longlong)puVar28 + 4);
      if ((*(byte *)(uVar21 + 0x27b5) & 4) != 0) {
        if (*(uint *)(uVar21 + 0x2048) == 0) {
          *(undefined8 *)((longlong)puVar28 + -8) = 0;
        }
        else {
          *(ulonglong *)((longlong)puVar28 + -8) =
               (ulonglong)*(uint *)((ulonglong)*(uint *)(uVar21 + 0x2048) + 0xb8);
        }
        *(undefined8 *)((longlong)puVar28 + -0x10) = *(undefined8 *)((longlong)puVar36 + 0x9c);
        *(undefined8 *)((longlong)puVar28 + -0x18) = 0x1034d79f;
        *(undefined8 *)((longlong)puVar28 + -0x20) = 0x140782d55;
        FUN_1407518b6();
        puVar28 = (undefined8 *)(ulonglong)((int)(undefined1 *)((longlong)puVar28 + -0x18) + 0xc);
        uVar9 = *(uint *)(uVar20 + 4);
      }
      if ((iVar6 + 1 < (int)uVar9) && (1 < uVar9 - iVar6)) {
        iVar19 = *(int *)(uVar20 + 0xc);
        *(undefined8 *)((longlong)puVar28 + -8) = 0x1012b90e;
        *(undefined8 *)((longlong)puVar28 + -0x10) = 0x30;
        *(ulonglong *)((longlong)puVar28 + -0x18) = (ulonglong)(uVar9 - iVar6);
        *(ulonglong *)((longlong)puVar28 + -0x20) = (ulonglong)(uint)(iVar6 * 0x30 + iVar19);
        *(undefined8 *)((longlong)puVar28 + -0x28) = 0x140782d80;
        FUN_1408c79d0();
        puVar28 = (undefined8 *)(ulonglong)((int)(undefined1 *)((longlong)puVar28 + -0x20) + 0x10);
      }
    }
  }
  if ((*(uint *)(uVar21 + 0x2048) != 0) &&
     (uVar14 = (ulonglong)*(uint *)((ulonglong)*(uint *)(uVar21 + 0x2048) + 0x3a8),
     *(int *)(uVar14 + 0x430) == (int)puVar36)) {
    *(undefined4 *)(uVar20 + 0x18) = *(undefined4 *)(uVar14 + 0xb8);
  }
  if (*(int *)((longlong)puVar28 + 0x24) == 0) {
    *(undefined8 *)((longlong)puVar28 + -8) = *(undefined8 *)((longlong)puVar36 + 0x9c);
    *(ulonglong *)((longlong)puVar28 + -0x10) = uVar20;
    *(undefined8 *)((longlong)puVar28 + -0x18) = 0x140782dd4;
    iVar6 = FUN_1407a7515();
    puVar28 = (undefined8 *)(ulonglong)((int)(undefined1 *)((longlong)puVar28 + -0x10) + 8);
    if (iVar6 == 0) goto LAB_140782dab;
    uVar9 = (int)puVar36 + 0x9c;
LAB_140782de1:
    uVar7 = *(undefined4 *)(ulonglong)uVar9;
    *(undefined4 *)(uVar20 + 0x1c) = uVar7;
    *(undefined4 *)(uVar20 + 0x18) = uVar7;
  }
  else {
LAB_140782dab:
    if (*(int *)((longlong)puVar28 + 0x20) < *(int *)(uVar20 + 4)) {
      uVar9 = *(int *)(((ulonglong)*(uint *)(uVar20 + 0xc) - 0x28) +
                      (ulonglong)(uint)(*(int *)(uVar20 + 4) * 0x30)) + 0xb8;
      goto LAB_140782de1;
    }
  }
  *(int *)((longlong)puVar28 + 0x2c) = *(int *)((longlong)puVar28 + 0x2c) + 1;
  uVar14 = (ulonglong)*(uint *)((longlong)puVar28 + 0x10);
  uVar9 = (*(byte *)(uVar14 + 0xfc) ^ 1) << 0x15 | 0x5000c3;
  if (*(char *)((longlong)puVar28 + 3) == '\0') {
    uVar9 = 0x5000c3;
  }
  *(undefined4 *)(uVar20 + 0x14) = *(undefined4 *)puVar36;
  *(float *)(uVar20 + 0x6c) = *(float *)((longlong)puVar36 + 0x34) + *(float *)(uVar14 + 0x8c);
  *(float *)(uVar20 + 0x70) =
       (*(float *)((longlong)puVar36 + 0x34) + *(float *)((longlong)puVar36 + 0x3c)) -
       *(float *)(uVar14 + 0x8c);
  *(ulonglong *)((longlong)puVar28 + -8) = (ulonglong)uVar9;
  *(ulonglong *)((longlong)puVar28 + -0x10) = (ulonglong)((longlong)puVar28 + 0x58) & 0xffffffff;
  *(ulonglong *)((longlong)puVar28 + -0x18) = uVar20;
  *(undefined8 *)((longlong)puVar28 + -0x20) = 0x140782e48;
  FUN_1407a62fd();
  uVar31 = (ulonglong)((int)(undefined1 *)((longlong)puVar28 + -0x18) + 0xc);
  *(undefined8 *)(uVar31 - 8) = 0x90;
  *(undefined8 *)(uVar31 - 0x10) = 0;
  *(ulonglong *)(uVar31 - 0x18) = uVar31 + 0x74 & 0xffffffff;
  *(undefined8 *)(uVar31 - 0x20) = 0x140782e5f;
  FUN_1408b3720();
  puVar32 = (undefined1 *)(ulonglong)((int)(uVar31 - 0x18) + 0xc);
  pfVar12 = (float *)(ulonglong)((int)uVar21 + 0xe00);
  uVar14 = 0;
  do {
    puVar15 = (undefined4 *)
              ((longlong)pfVar12 + (ulonglong)(uint)(*(int *)(&DAT_102b86b8 + uVar14) << 4));
    uVar7 = puVar15[1];
    uVar4 = puVar15[2];
    uVar8 = puVar15[3];
    puVar2 = (undefined4 *)(puVar32 + uVar14 * 4 + 0x7c);
    *puVar2 = *puVar15;
    puVar2[1] = uVar7;
    puVar2[2] = uVar4;
    puVar2[3] = uVar8;
    uVar9 = (int)uVar14 + 4;
    uVar14 = (ulonglong)uVar9;
  } while (uVar9 != 0x24);
  *(undefined4 *)((longlong)puVar36 + 0x7c) = 0;
  iVar6 = *(int *)((longlong)puVar36 + 0x24);
  if (0 < iVar6) {
    *(int *)(puVar32 + 0x30) = (int)uVar21 + 0x1e8c;
    uVar14 = 0;
    do {
      uVar9 = *(uint *)((ulonglong)*(uint *)((longlong)puVar36 + 0x2c) + uVar14 * 4);
      uVar22 = (ulonglong)uVar9;
      if ((*(int *)(in_R11 + 4) <= *(int *)(uVar22 + 0x2b4)) ||
         (*(int *)(puVar32 + 0x2c) != *(int *)(puVar32 + 0x34))) {
        *(int *)(puVar32 + 0x14) = (int)uVar14;
        *(undefined4 *)(puVar32 + 0x20) = *(undefined4 *)(uVar22 + 0xc);
        *(undefined4 *)(puVar32 + 0x38) = *(undefined4 *)(uVar22 + 0x2c);
        *(undefined4 *)(puVar32 + 0x24) = *(undefined4 *)(uVar20 + 0x10);
        uVar20 = 0x40c;
        puVar1 = puVar32 + 0x3c;
        do {
          *(undefined8 *)(puVar32 + -8) = *(undefined8 *)(uVar22 + uVar20);
          *(ulonglong *)(puVar32 + -0x10) = (ulonglong)puVar1 & 0xffffffff;
          *(undefined8 *)(puVar32 + -0x18) = 0x140782eee;
          FUN_140752bbd();
          puVar32 = (undefined1 *)(ulonglong)((int)(puVar32 + -0x10) + 8);
          uVar7 = *(undefined4 *)(puVar32 + 0x40);
          uVar4 = *(undefined4 *)(puVar32 + 0x44);
          uVar8 = *(undefined4 *)(puVar32 + 0x48);
          puVar15 = (undefined4 *)
                    ((longlong)pfVar12 + (ulonglong)(uint)(*(int *)(uVar20 + 0x102b82ac) << 4));
          *puVar15 = *(undefined4 *)(puVar32 + 0x3c);
          puVar15[1] = uVar7;
          puVar15[2] = uVar4;
          puVar15[3] = uVar8;
          uVar37 = (int)uVar20 + 4;
          uVar20 = (ulonglong)uVar37;
        } while (uVar37 != 0x430);
        puVar32[0x3c] = 1;
        uVar20 = 0;
        if (*(char *)(uVar22 + 0x104) != '\0') {
          uVar20 = (ulonglong)puVar1 & 0xffffffff;
        }
        *(ulonglong *)(puVar32 + -8) = uVar22;
        *(ulonglong *)(puVar32 + -0x10) =
             (ulonglong)
             (*(uint *)(puVar32 + 0x24) >> 1 & 4 |
             *(uint *)(puVar32 + 0x20) >> 0x12 & 1 | *(uint *)(puVar32 + 0x38));
        *(ulonglong *)(puVar32 + -0x18) = uVar20;
        *(undefined8 *)(puVar32 + -0x20) = *(undefined8 *)(uVar22 + 4);
        uVar20 = (ulonglong)*(uint *)(puVar32 + -0xc);
        *(ulonglong *)(puVar32 + -0x28) = (ulonglong)*(uint *)(puVar32 + -0xc);
        *(undefined8 *)(puVar32 + -0x30) = 0x140782f4d;
        FUN_1407a7a44();
        puVar32 = (undefined1 *)(ulonglong)((int)(puVar32 + -0x28) + 0x14);
        iVar6 = *(int *)(uVar22 + 0xb8);
        if (puVar32[0x3c] == '\0') {
          *(int *)((ulonglong)*(uint *)(puVar32 + 8) + 0xa0) = iVar6;
        }
        uVar21 = (ulonglong)*(uint *)(puVar32 + 0xc);
        if (*(int *)(uVar20 + 0x24) == iVar6) {
          *(uint *)((ulonglong)*(uint *)(puVar32 + 8) + 0x7c) = uVar9;
        }
        *(undefined4 *)(uVar22 + 0x204) = *(undefined4 *)(uVar21 + 0x1e88);
        puVar15 = (undefined4 *)(ulonglong)*(uint *)(puVar32 + 0x30);
        uVar7 = puVar15[1];
        uVar4 = puVar15[2];
        uVar8 = puVar15[3];
        *(undefined4 *)(uVar22 + 0x208) = *puVar15;
        *(undefined4 *)(uVar22 + 0x20c) = uVar7;
        *(undefined4 *)(uVar22 + 0x210) = uVar4;
        *(undefined4 *)(uVar22 + 0x214) = uVar8;
        uVar14 = (ulonglong)*(uint *)(puVar32 + 0x14);
        if (((*(uint *)(uVar21 + 0x2048) != 0) &&
            (*(uint *)((ulonglong)*(uint *)(uVar21 + 0x2048) + 0x3a8) == uVar9)) &&
           ((*(byte *)(uVar22 + 0x1a0) & 2) == 0)) {
          *(undefined4 *)((ulonglong)*(uint *)(puVar32 + 0x10) + 0x3c8) =
               *(undefined4 *)(uVar22 + 0xb8);
        }
        iVar6 = *(int *)((ulonglong)*(uint *)(puVar32 + 8) + 0x24);
      }
      puVar36 = (undefined8 *)(ulonglong)*(uint *)(puVar32 + 8);
    } while ((int)uVar14 < iVar6);
  }
  uVar14 = 0;
  do {
    uVar22 = (ulonglong)(uint)(*(int *)(&DAT_102b86b8 + uVar14) << 4);
    puVar2 = (undefined4 *)(puVar32 + uVar14 * 4 + 0x7c);
    uVar7 = puVar2[1];
    uVar4 = puVar2[2];
    uVar8 = puVar2[3];
    puVar15 = (undefined4 *)((longlong)pfVar12 + uVar22);
    *puVar15 = *puVar2;
    puVar15[1] = uVar7;
    puVar15[2] = uVar4;
    puVar15[3] = uVar8;
    uVar9 = (int)uVar14 + 4;
    uVar14 = (ulonglong)uVar9;
  } while (uVar9 != 0x24);
  if ((*(int *)((longlong)puVar36 + 0x7c) != 0) &&
     ((puVar32[3] != '\0' ||
      (uVar22 = (ulonglong)*(uint *)(puVar32 + 0x28), *(int *)(uVar22 + 0x7c) == 0)))) {
    uVar22 = (ulonglong)*(uint *)(puVar32 + 0x28);
    *(int *)(uVar22 + 0x7c) = *(int *)((longlong)puVar36 + 0x7c);
  }
  if ((*(byte *)((longlong)puVar36 + 0xac) & 8) != 0) {
    if ((*(uint *)((longlong)puVar36 + 0x7c) == 0) ||
       (uVar7 = (undefined4)CONCAT71((int7)(uVar22 >> 8),1),
       *(char *)((ulonglong)*(uint *)((longlong)puVar36 + 0x7c) + 0x104) == '\0')) {
      *(undefined8 *)(puVar32 + -8) = 1;
      *(undefined8 *)(puVar32 + -0x10) = 0x40;
      *(undefined8 *)(puVar32 + -0x18) = 0x140783037;
      FUN_14076964d();
      uVar33 = (ulonglong)((int)(puVar32 + -0x10) + 8);
      fVar38 = pfVar12[1] * fRam0000000150a3c188;
      fVar39 = pfVar12[2] * fRam0000000150a3c18c;
      fVar40 = pfVar12[3] * fRam0000000150a3c190;
      pfVar16 = (float *)(uVar33 + 0x3c & 0xffffffff);
      *pfVar16 = *pfVar12 * _DAT_150a3c184;
      pfVar16[1] = fVar38;
      pfVar16[2] = fVar39;
      pfVar16[3] = fVar40;
      *(float **)(uVar33 - 8) = pfVar16;
      *(undefined8 *)(uVar33 - 0x10) = 0;
      *(undefined8 *)(uVar33 - 0x18) = 0x140783053;
      FUN_140754c50();
      puVar32 = (undefined1 *)(ulonglong)((int)(uVar33 - 0x10) + 8);
      uVar7 = 0;
    }
    *(undefined4 *)(puVar32 + 0x14) = uVar7;
    *(undefined8 *)(puVar32 + -8) = 0;
    *(undefined8 *)(puVar32 + -0x10) = 0x1033c951;
    *(undefined8 *)(puVar32 + -0x18) = 0x14078306c;
    uVar13 = FUN_14075a0a4(*(undefined4 *)(puVar32 + 0x10));
    *(ulonglong *)(puVar32 + -0x18) = (ulonglong)(puVar32 + 0x3c) & 0xffffffff;
    *(undefined8 *)(puVar32 + -0x20) = uVar13;
    *(undefined8 *)(puVar32 + -0x28) = 0x140783077;
    cVar5 = FUN_140786509();
    puVar32 = (undefined1 *)(ulonglong)((int)(puVar32 + -0x20) + 8);
    uVar9 = *(uint *)(puVar32 + 4);
    uVar20 = (ulonglong)uVar9;
    if (cVar5 != '\0') {
      *(byte *)((longlong)puVar36 + 0xac) = *(byte *)((longlong)puVar36 + 0xac) | 0x40;
      iVar6 = *(int *)(uVar20 + 4);
      while (0 < iVar6) {
        *(ulonglong *)(puVar32 + -8) = (ulonglong)*(uint *)(uVar20 + 0xc);
        *(ulonglong *)(puVar32 + -0x10) = uVar20;
        *(undefined8 *)(puVar32 + -0x18) = 0x14078309f;
        FUN_1407a771b();
        puVar32 = (undefined1 *)(ulonglong)((int)(puVar32 + -0x10) + 8);
        iVar6 = *(int *)(uVar20 + 4);
      }
    }
    uVar20 = (ulonglong)uVar9;
    uVar21 = (ulonglong)*(uint *)(puVar32 + 0xc);
    if (puVar32[0x14] == '\0') {
      *(undefined8 *)(puVar32 + -8) = 1;
      *(undefined8 *)(puVar32 + -0x10) = 0x1407830c1;
      FUN_140754d5e();
      puVar32 = (undefined1 *)(ulonglong)((int)(puVar32 + -8) + 4);
      *(undefined8 *)(puVar32 + -8) = 0x1407830c9;
      FUN_140769709();
    }
  }
  *(undefined8 *)(puVar32 + -8) = 0;
  puVar24 = puVar32 + -0x10;
  *(undefined8 *)(puVar32 + -0x10) = 0x1033c2b8;
  *(undefined8 *)(puVar32 + -0x18) = 0x1407830d9;
  uVar9 = FUN_14075a0a4(*(undefined4 *)(puVar32 + 0x10));
  if (((*(uint *)(uVar21 + 0x1510) == 0) || (*(uint *)(uVar21 + 0x1510) == uVar9)) ||
     (*(uint *)(uVar21 + 0x1528) == uVar9)) {
    *(ulonglong *)(puVar32 + -0x18) = (ulonglong)uVar9;
    *(undefined8 *)(puVar32 + -0x20) = 0x1407830f7;
    FUN_14075bad9();
    uVar34 = (ulonglong)((int)(puVar32 + -0x18) + 4);
    *(undefined8 *)(uVar34 - 8) = 0x1000;
    *(ulonglong *)(uVar34 - 0x10) = uVar34 + 0x3c & 0xffffffff;
    *(undefined8 *)(uVar34 - 0x18) = 0;
    *(ulonglong *)(uVar34 - 0x20) = (ulonglong)uVar9;
    *(ulonglong *)(uVar34 - 0x28) = uVar34 + 0x5c & 0xffffffff;
    *(undefined8 *)(uVar34 - 0x30) = 0x140783111;
    FUN_14078564e();
    puVar24 = (undefined1 *)(ulonglong)((int)(uVar34 - 0x28) + 0x14);
    if (*(uint *)(uVar21 + 0x1510) == uVar9) {
      *(uint *)(uVar21 + 0x1e80) = uVar9;
    }
    if (puVar24[0x3c] != '\x01') goto LAB_14078316b;
    *(undefined8 *)(puVar24 + -8) = 0;
    *(undefined8 *)(puVar24 + -0x10) = 0;
    *(undefined8 *)(puVar24 + -0x18) = 0x140783132;
    cVar5 = FUN_14075b64a();
    uVar35 = (ulonglong)((int)(puVar24 + -0x10) + 8);
    uVar9 = *(uint *)(uVar35 + 0x1c);
    if (cVar5 != '\0') {
      uVar9 = *(uint *)(uVar20 + 0x18);
    }
    uVar21 = (ulonglong)uVar9;
    *(ulonglong *)(uVar35 - 8) = (ulonglong)*(uint *)(uVar20 + 0x18);
    *(ulonglong *)(uVar35 - 0x10) = uVar20;
    *(undefined8 *)(uVar35 - 0x18) = 0x140783148;
    lVar17 = FUN_1407a7515();
    puVar24 = (undefined1 *)(ulonglong)((int)(uVar35 - 0x10) + 8);
    uVar20 = (ulonglong)*(uint *)(puVar24 + 8);
    if ((int)lVar17 != 0) {
      uVar9 = *(uint *)(lVar17 + 8);
      if (uVar9 == 0) {
        uVar9 = *(uint *)(uVar20 + 0x78);
      }
      *(undefined8 *)(puVar24 + -8) = 0;
      *(ulonglong *)(puVar24 + -0x10) = uVar20;
      *(ulonglong *)(puVar24 + -0x18) = (ulonglong)uVar9;
      *(undefined8 *)(puVar24 + -0x20) = 0x140783166;
      FUN_14075b58b();
      puVar24 = (undefined1 *)(ulonglong)((int)(puVar24 + -0x18) + 0xc);
    }
  }
  else {
LAB_14078316b:
    uVar20 = (ulonglong)*(uint *)(puVar24 + 8);
    uVar21 = (ulonglong)*(uint *)(puVar24 + 0x1c);
  }
  uVar9 = *(uint *)((ulonglong)*(uint *)(puVar24 + 4) + 0x1c);
  if (uVar9 != 0) {
    uVar21 = (ulonglong)uVar9;
  }
  if ((int)uVar21 != 0) {
    *(ulonglong *)(puVar24 + -8) = uVar21;
    *(ulonglong *)(puVar24 + -0x10) = (ulonglong)*(uint *)(puVar24 + 4);
    *(undefined8 *)(puVar24 + -0x18) = 0x14078318a;
    uVar21 = FUN_1407a7515();
    puVar24 = (undefined1 *)(ulonglong)((int)(puVar24 + -0x10) + 8);
    if ((int)uVar21 != 0) {
      uVar9 = *(uint *)(uVar21 + 8);
      if (uVar9 != 0) {
        *(undefined8 *)(puVar24 + -8) = 0;
        *(ulonglong *)(puVar24 + -0x10) = (ulonglong)uVar9;
        *(undefined8 *)(puVar24 + -0x18) = 0x1407831a2;
        FUN_14075b3b2();
        puVar24 = (undefined1 *)(ulonglong)((int)(puVar24 + -0x10) + 8);
        if (*(int *)((ulonglong)*(uint *)(puVar24 + 0xc) + 0x2044) == 0) {
          *(undefined8 *)(puVar24 + -8) = 0;
          *(undefined8 *)(puVar24 + -0x10) = *(undefined8 *)((uVar21 & 0xffffffff) + 8);
          *(undefined8 *)(puVar24 + -0x18) = 0x1407831bc;
          FUN_14076440d();
          puVar24 = (undefined1 *)(ulonglong)((int)(puVar24 + -0x10) + 8);
        }
      }
    }
  }
  *(undefined8 *)(puVar24 + -8) = 0x1407831c4;
  FUN_1407a65fb();
  *(undefined8 *)(puVar24 + -8) = 0x1407831c9;
  FUN_14076b438();
  if ((*(byte *)(uVar20 + 0x11) & 4) == 0) {
    uVar9 = *(uint *)(puVar24 + 0x10);
    *(undefined4 *)((ulonglong)uVar9 + 0x19c) = 0;
    *(undefined1 *)((ulonglong)uVar9 + 0xfe) = puVar24[0x1b];
  }
LAB_1407831e7:
  if (_DAT_150b0bef6 == (*(uint *)(puVar24 + 0x10c) ^ (uint)puVar24)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(code **)(puVar24 + -8) = FUN_140783213;
  FUN_1408802b0(*(uint *)(puVar24 + 0x10c) ^ (uint)puVar24);
}

