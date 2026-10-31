/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140765e26 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140765e26(ulonglong param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  bool bVar17;
  
  uVar2 = _DAT_150b0358c;
  puVar13 = (uint *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0x18);
  uVar16 = param_1 & 0xffffffff;
  uVar12 = (ulonglong)_DAT_150b0358c;
  uVar14 = *(uint *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  *(undefined8 *)((longlong)puVar13 + -8) = 0x140765e4f;
  uVar6 = FUN_140762c06();
  if ((*(byte *)(uVar12 + 0x120d) & 4) == 0) {
    *(ulonglong *)((longlong)puVar13 + -8) = (ulonglong)uVar6;
    *(ulonglong *)((longlong)puVar13 + -0x10) = uVar16;
    *(undefined8 *)((longlong)puVar13 + -0x18) = 0x140765e61;
    FUN_140770bfd();
    puVar13 = (uint *)(ulonglong)((int)(undefined1 *)((longlong)puVar13 + -0x10) + 8);
    goto LAB_140766209;
  }
  *(undefined1 *)(uVar16 + 0xf8) = 0;
  if (((uVar14 & 0x6000000) != 0) && (*(char *)(uVar16 + 0x100) == '\x01')) {
    *(undefined4 *)(uVar16 + 0x3c) = 0;
    *(undefined4 *)(uVar16 + 0x40) = 0;
  }
  uVar15 = (uint)param_1;
  if (((((*(byte *)(uVar12 + 0x1ed1) & 8) == 0) && (*(int *)(uVar16 + 0x3c) == 0)) &&
      ((uVar10 = (ulonglong)*(uint *)(uVar16 + 0x3a0), *(uint *)(uVar16 + 0x3a0) == 0 ||
       (((*(char *)(uVar10 + 0x102) == '\x01' && (*(char *)(uVar10 + 0xfa) != '\x01')) ||
        (iVar8 = *(int *)(uVar10 + 0x3c), *(int *)(uVar16 + 0x3c) = iVar8, iVar8 == 0)))))) &&
     (*(uint *)(uVar16 + 0x40) != 0)) {
    *(ulonglong *)((longlong)puVar13 + -8) = (ulonglong)*(uint *)(uVar16 + 0x40);
    *(undefined8 *)((longlong)puVar13 + -0x10) = 0x140765f5f;
    iVar8 = FUN_140762bd3();
    puVar13 = (uint *)(ulonglong)((int)(undefined1 *)((longlong)puVar13 + -8) + 4);
    *(int *)(uVar16 + 0x3c) = iVar8;
    if (iVar8 == 0) {
      if ((*(float *)(uVar16 + 0x44) != _DAT_150a1e92f) ||
         (NAN(*(float *)(uVar16 + 0x44)) || NAN(_DAT_150a1e92f))) {
        if ((*(float *)(uVar16 + 0x48) != _DAT_150a1e943) ||
           (NAN(*(float *)(uVar16 + 0x48)) || NAN(_DAT_150a1e943))) {
          uVar7 = *(undefined4 *)(uVar16 + 8);
          *(undefined8 *)((longlong)puVar13 + -8) = 0;
          *(ulonglong *)((longlong)puVar13 + -0x10) = (ulonglong)(uVar15 + 0x58);
          *(ulonglong *)((longlong)puVar13 + -0x18) = (ulonglong)(uVar15 + 0x44);
          *(undefined8 *)((longlong)puVar13 + -0x20) = 0x140765fab;
          uVar7 = FUN_140766662(uVar16,uVar7);
          puVar13 = (uint *)(ulonglong)((int)(undefined1 *)((longlong)puVar13 + -0x18) + 0xc);
          *(undefined4 *)(uVar16 + 0x3c) = uVar7;
        }
      }
    }
  }
  uVar1 = *(uint *)(uVar12 + 0x1ed0);
  if ((uVar1 >> 0xb & 1) == 0) {
    if ((uVar14 & 0x11000000) == 0) {
      if ((*(uint *)(uVar16 + 0x430) != 0) &&
         (uVar2 = *(uint *)((ulonglong)*(uint *)(uVar16 + 0x430) + 0x78), uVar2 != 0))
      goto LAB_140765eba;
      if ((uVar14 >> 0x19 & 1) == 0) {
        *puVar13 = uVar6;
        puVar13[-2] = 0x40765fdd;
        puVar13[-1] = 1;
        cVar4 = FUN_140781193(uVar16);
        if (cVar4 == '\0') {
          if ((*(uint *)(uVar12 + 0x14dc) != 0) &&
             (*(uint *)((ulonglong)*(uint *)(uVar12 + 0x14dc) + 0x3b0) == uVar15)) {
            puVar13[-2] = 0;
            puVar13[-1] = 0;
            puVar13[-4] = 0x40766024;
            puVar13[-3] = 1;
            cVar4 = FUN_14075bb00();
            puVar13 = (uint *)(ulonglong)((int)(puVar13 + -2) + 4);
            if (cVar4 != '\0') {
              uVar6 = *puVar13;
              if ((*(uint *)(uVar16 + 0x3c) == 0) ||
                 (*(uint *)((ulonglong)*(uint *)(uVar16 + 0x3c) + 0x58) != uVar15))
              goto LAB_14076606d;
              uVar7 = *(undefined4 *)(uVar16 + 8);
              puVar13[-2] = 0;
              puVar13[-1] = 0;
              *(ulonglong *)(puVar13 + -4) = (ulonglong)(uVar15 + 0x58);
              *(ulonglong *)(puVar13 + -6) = (ulonglong)(uVar15 + 0x50);
              puVar13[-8] = 0x4076604e;
              puVar13[-7] = 1;
              uVar7 = FUN_140766662(param_1 & 0xffffffff,uVar7);
              uVar6 = puVar13[-3];
              puVar13 = (uint *)(ulonglong)((int)(puVar13 + -6) + 0xc);
              goto LAB_140765ebd;
            }
          }
          uVar6 = *puVar13;
          if (((*(uint *)(uVar16 + 0x3c) == 0) ||
              (uVar15 != *(uint *)((ulonglong)*(uint *)(uVar16 + 0x3c) + 0x58))) ||
             ((*(int *)(uVar12 + 0x1528) != 0 && (*(char *)(uVar12 + 0x1535) != '\x01'))))
          goto LAB_14076606d;
          puVar13[-2] = 0x4076629b;
          puVar13[-1] = 1;
          FUN_1407815a8(uVar16,uVar6);
        }
        else {
          uVar7 = *(undefined4 *)(uVar16 + 8);
          puVar13[-2] = 0;
          puVar13[-1] = 0;
          *(ulonglong *)(puVar13 + -4) = (ulonglong)(uVar15 + 0x58);
          *(ulonglong *)(puVar13 + -6) = (ulonglong)(uVar15 + 0x50);
          puVar13[-8] = 0x40765ff5;
          puVar13[-7] = 1;
          uVar7 = FUN_140766662(uVar16,uVar7);
          puVar13 = (uint *)(ulonglong)((int)(puVar13 + -6) + 0xc);
          *(undefined4 *)(uVar16 + 0x3c) = uVar7;
        }
        uVar6 = *puVar13;
        goto LAB_14076606d;
      }
      uVar7 = *(undefined4 *)(uVar12 + 0x1ff0);
    }
    else {
      uVar2 = *(uint *)(uVar16 + 0x3a0);
LAB_140765eba:
      uVar7 = *(undefined4 *)((ulonglong)uVar2 + 0x3c);
    }
LAB_140765ebd:
    *(undefined4 *)(uVar16 + 0x3c) = uVar7;
  }
  else {
    *(undefined8 *)(puVar13 + -2) = *(undefined8 *)(uVar12 + 0x1f34);
    puVar13[-1] = uVar2;
    puVar13[-4] = 0x40765eda;
    puVar13[-3] = 1;
    lVar9 = FUN_140762bd3();
    uVar12 = (ulonglong)puVar13[-1];
    puVar13 = (uint *)(ulonglong)((int)(puVar13 + -2) + 4);
    *(int *)(uVar16 + 0x3c) = (int)lVar9;
    *(undefined4 *)(uVar16 + 0x40) = *(undefined4 *)(uVar12 + 0x1f34);
    if ((((int)lVar9 != 0) && ((*(byte *)(uVar16 + 0xe) & 0x80) != 0)) &&
       (*(int *)(lVar9 + 0x58) != 0)) {
      *(uint *)(lVar9 + 0x58) = uVar15;
      *(undefined4 *)(uVar16 + 0x40) = *(undefined4 *)(uVar16 + 8);
      *(undefined4 *)(ulonglong)*(uint *)(uVar16 + 0x3c) = *(undefined4 *)(uVar16 + 8);
    }
  }
LAB_14076606d:
  if (*(int *)(uVar16 + 0x3c) == 0) {
    *(undefined8 *)((longlong)puVar13 + -8) = 0x14076607a;
    cVar4 = FUN_14075b751(uVar16,uVar6);
    if (cVar4 == '\0') {
      uVar7 = *(undefined4 *)(uVar16 + 8);
      *(undefined8 *)((longlong)puVar13 + -8) = 0;
      *(ulonglong *)((longlong)puVar13 + -0x10) = (ulonglong)(uVar15 + 0x58);
      *(ulonglong *)((longlong)puVar13 + -0x18) = (ulonglong)(uVar15 + 0x50);
      *(undefined8 *)((longlong)puVar13 + -0x20) = 0x140766092;
      uVar7 = FUN_140766662(uVar16,uVar7);
      puVar13 = (uint *)(ulonglong)((int)(undefined1 *)((longlong)puVar13 + -0x18) + 0xc);
      *(undefined4 *)(uVar16 + 0x3c) = uVar7;
    }
  }
  if ((uVar1 >> 0xb & 1) == 0) {
    if ((uVar14 & 0x6000000) == 0) {
      puVar11 = (undefined8 *)(ulonglong)*(uint *)(uVar16 + 0x3c);
      if (*(uint *)(uVar16 + 0x3c) == 0) {
        uVar14 = uVar14 & 0x1000000;
      }
      else {
        uVar6 = *(uint *)(puVar11 + 0xb);
        uVar14 = uVar14 & 0x1000000;
        if ((uVar14 == 0 && (uVar6 != 0 && uVar15 != uVar6)) &&
           (uVar14 = 0, *(int *)(uVar16 + 0x430) == 0)) {
          if ((((*(byte *)(uVar16 + 0xe) & 0x80) == 0) || ((*(byte *)(uVar16 + 0x409) & 5) == 1)) ||
             (*(int *)(uVar12 + 4) <= *(int *)(puVar11 + 0xc))) {
            *(undefined8 *)(puVar13 + -2) = 0x14076611b;
            cVar4 = FUN_1407815a8(uVar16);
            if (cVar4 == '\0') {
              uVar7 = *(undefined4 *)(uVar16 + 8);
              *(undefined8 *)(puVar13 + -2) = 0x20;
              *(ulonglong *)(puVar13 + -4) = (ulonglong)(uVar15 + 0x58);
              *(ulonglong *)(puVar13 + -6) = (ulonglong)(uVar15 + 0x50);
              *(undefined8 *)(puVar13 + -8) = 0x140766137;
              uVar7 = FUN_140766662(uVar16,uVar7);
              puVar13 = (uint *)(ulonglong)((int)(puVar13 + -6) + 0xc);
              *(undefined4 *)(uVar16 + 0x3c) = uVar7;
            }
          }
          else {
            if ((*(byte *)(uVar12 + 0x27b5) & 8) != 0) {
              *(undefined8 *)(puVar13 + -2) = *(undefined8 *)((ulonglong)uVar6 + 4);
              *(undefined8 *)(puVar13 + -4) = *puVar11;
              *(undefined8 *)(puVar13 + -6) = *(undefined8 *)(uVar16 + 4);
              *(undefined8 *)(puVar13 + -8) = 0x10355acd;
              *(undefined8 *)(puVar13 + -10) = 0x14076625e;
              FUN_1407518b6();
              puVar13 = (uint *)(ulonglong)((int)(puVar13 + -8) + 0x10);
              puVar11 = (undefined8 *)(ulonglong)*(uint *)(uVar16 + 0x3c);
            }
            *(uint *)(puVar11 + 0xb) = uVar15;
            *(undefined4 *)(ulonglong)*(uint *)(uVar16 + 0x3c) = *(undefined4 *)(uVar16 + 8);
            *(undefined4 *)((ulonglong)*(uint *)(uVar16 + 0x3c) + 0x68) = 0;
          }
          goto LAB_1407661f7;
        }
      }
      if (uVar14 == 0 && *(int *)(uVar16 + 0x4c) < 0) goto LAB_1407661ed;
    }
    else {
      if ((uVar14 >> 0x19 & 1) == 0) {
        uVar6 = (*(int *)(uVar12 + 0x1fd0) + *(int *)(uVar12 + 0x1fc8) * 0x28) - 8;
      }
      else {
        uVar6 = (int)uVar12 + 0xe4;
      }
      uVar7 = *(undefined4 *)(ulonglong)uVar6;
      uVar3 = ((undefined4 *)(ulonglong)uVar6)[1];
      *puVar13 = uVar3;
      puVar13[4] = uVar3;
      puVar13[3] = uVar7;
      bVar17 = true;
      if ((*(char *)(uVar12 + 0x2040) == '\x01') && (*(char *)(uVar12 + 0x2041) == '\x01')) {
        bVar17 = *(int *)(uVar12 + 0x2048) == 0;
      }
      *(ulonglong *)(puVar13 + -2) = (ulonglong)(puVar13 + 3) & 0xffffffff;
      *(undefined8 *)(puVar13 + -4) = 0x140766182;
      bVar5 = FUN_14075bb00();
      puVar13 = (uint *)(ulonglong)((int)(puVar13 + -2) + 4);
      if ((((uVar14 & 0x12000000) != 0 | *(byte *)(uVar16 + 0x100)) == 1) &&
         (bVar17 != true || bVar5 != 0)) {
        if ((bVar17 & bVar5) == 1) {
          puVar13[1] = uVar7;
          puVar13[2] = *puVar13;
        }
        else {
          uVar7 = *(undefined4 *)(uVar16 + 0xc);
          *(undefined8 *)(puVar13 + -2) = 0x1407661c9;
          FUN_14076dfd8((ulonglong)(puVar13 + 1) & 0xffffffff,uVar7);
        }
        *(undefined8 *)(puVar13 + -2) = 0x1407661d2;
        iVar8 = FUN_1407815ba((ulonglong)(puVar13 + 1) & 0xffffffff);
      }
      else {
        puVar11 = (undefined8 *)(ulonglong)*(uint *)(uVar16 + 0x3c);
LAB_1407661ed:
        iVar8 = (int)*(short *)((longlong)puVar11 + 0x86);
      }
      *(int *)(uVar16 + 0x4c) = iVar8;
    }
  }
LAB_1407661f7:
  *(bool *)(uVar16 + 0xf8) = uVar15 == ((undefined4 *)(ulonglong)*(uint *)(uVar16 + 0x3c))[0x16];
  *(undefined4 *)(uVar16 + 0x40) = *(undefined4 *)(ulonglong)*(uint *)(uVar16 + 0x3c);
LAB_140766209:
  if (_DAT_150aeef15 == (*(uint *)((longlong)puVar13 + 0x14) ^ (uint)puVar13)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(code **)((longlong)puVar13 + -8) = FUN_1407662ab;
  FUN_1408802b0(*(uint *)((longlong)puVar13 + 0x14) ^ (uint)puVar13);
}

