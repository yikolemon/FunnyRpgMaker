/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18010b4b2 */

void FUN_18010b4b2(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  char cVar5;
  undefined1 uVar6;
  byte bVar7;
  byte bVar8;
  undefined4 uVar9;
  int iVar10;
  byte bVar11;
  longlong lVar12;
  byte bVar13;
  byte bVar14;
  bool bVar15;
  bool bVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_8c;
  float local_88;
  float local_84;
  ulonglong local_80;
  
  lVar4 = DAT_180419160;
  local_80 = DAT_180402640 ^ (ulonglong)auStack_b8;
  *(undefined1 *)(DAT_180419160 + 0xeb) = 0;
  uVar1 = *(uint *)(lVar4 + 0x30);
  if (((uVar1 & 2) == 0) || ((*(byte *)(lVar4 + 0x34) & 1) == 0)) {
    bVar14 = 0;
  }
  else {
    bVar14 = 1;
    if (*(int *)(lVar4 + 0x2250) != 3) {
      lVar12 = 0;
      do {
        cVar5 = FUN_180118a7b(*(undefined4 *)((longlong)&DAT_1802de0f0 + lVar12));
        if (cVar5 != '\0') {
          *(undefined4 *)(lVar4 + 0x2250) = 3;
        }
        lVar12 = lVar12 + 4;
      } while (lVar12 != 0x20);
    }
  }
  if (((uVar1 & 1) != 0) && (*(int *)(lVar4 + 0x2250) != 2)) {
    lVar12 = 0;
    do {
      cVar5 = FUN_180118a7b(*(undefined4 *)((longlong)&DAT_1802de110 + lVar12));
      if (cVar5 != '\0') {
        *(undefined4 *)(lVar4 + 0x2250) = 2;
      }
      lVar12 = lVar12 + 4;
    } while (lVar12 != 0x1c);
  }
  *(undefined8 *)(lVar4 + 0x23c8) = 0;
  *(undefined4 *)(lVar4 + 0x23d0) = 0;
  if (*(int *)(lVar4 + 0x2270) != 0) {
    FUN_18011c35d();
  }
  *(undefined2 *)(lVar4 + 0x2262) = 0;
  *(undefined4 *)(lVar4 + 0x2270) = 0;
  if (*(char *)(lVar4 + 0x22a0) == '\x01') {
    FUN_18011c441();
  }
  *(undefined4 *)(lVar4 + 0x22e4) = 0;
  *(undefined2 *)(lVar4 + 0x22a0) = 0;
  if (('\0' < *(char *)(lVar4 + 0x2260)) &&
     (cVar5 = *(char *)(lVar4 + 0x2260) + -1, *(char *)(lVar4 + 0x2260) = cVar5, cVar5 == '\0')) {
    *(undefined1 *)(lVar4 + 0x21f4) = 1;
  }
  if ((((*(char *)(lVar4 + 0x21f6) == '\x01') && (*(char *)(lVar4 + 0x21f7) == '\x01')) &&
      (*(char *)(lVar4 + 0x21f4) == '\x01')) && (*(char *)(lVar4 + 0x21f5) == '\x01')) {
    bVar15 = *(longlong *)(lVar4 + 0x2200) != 0;
  }
  else {
    bVar15 = false;
  }
  *(undefined1 *)(lVar4 + 0x21f6) = 0;
  if (*(longlong *)(lVar4 + 0x2200) != 0) {
    FUN_18012d5ed();
    lVar12 = *(longlong *)(lVar4 + 0x2200);
    if (((lVar12 != 0) && (*(longlong *)(lVar12 + 0x448) != 0)) && (*(int *)(lVar4 + 0x220c) == 0))
    {
      *(undefined8 *)(lVar12 + 0x448) = 0;
    }
  }
  FUN_18012d619();
  if (((uVar1 & 1) == 0 && bVar14 == 0) || (*(longlong *)(lVar4 + 0x2200) == 0)) {
    *(undefined1 *)(lVar4 + 0xed) = 0;
LAB_18010b689:
    bVar16 = *(longlong *)(lVar4 + 0x23e8) != 0;
  }
  else {
    bVar16 = (*(uint *)(*(longlong *)(lVar4 + 0x2200) + 0x14) & 0x10000) == 0;
    *(bool *)(lVar4 + 0xed) = bVar16;
    if (((!bVar16) || (*(int *)(lVar4 + 0x21f8) == 0)) ||
       (bVar16 = true, *(char *)(lVar4 + 0x21f4) == '\0')) goto LAB_18010b689;
  }
  *(bool *)(lVar4 + 0xee) = bVar16;
  FUN_18012de12();
  FUN_18012e05f();
  *(undefined8 *)(lVar4 + 0x2214) = 0;
  *(undefined8 *)(lVar4 + 0x221c) = 0;
  iVar2 = *(int *)(lVar4 + 0x21f8);
  if (((iVar2 == 0) || (*(char *)(lVar4 + 0x21f4) != '\x01')) ||
     (*(longlong *)(lVar4 + 0x23e8) != 0)) goto LAB_18010b6d3;
  if (*(longlong *)(lVar4 + 0x2200) == 0) {
LAB_18010b6e5:
    if ((*(char *)(lVar4 + 0x7f) == '\x01') && (*(char *)(lVar4 + 0x2260) == '\0')) {
      uVar6 = 1;
      goto LAB_18010b6fc;
    }
  }
  else {
    if ((*(byte *)(*(longlong *)(lVar4 + 0x2200) + 0x16) & 1) != 0) goto LAB_18010b6d3;
    if ((uVar1 & 1) == 0) {
      if (bVar14 != 0) {
        iVar10 = (*(byte *)(lVar4 + 0x79) ^ 1) * 2 + 0x27b;
        cVar5 = FUN_180118a82(iVar10,0xffffffff);
        if (cVar5 != '\0') {
          bVar7 = 0;
          uVar9 = FUN_180118b8a(iVar10,0,0xffffffff);
          bVar13 = 1;
          goto LAB_18010bb52;
        }
      }
      iVar10 = *(int *)(lVar4 + 0x167c);
      bVar8 = 0;
      bVar11 = 0;
      bVar13 = 0;
      bVar7 = 0;
LAB_18010bbf4:
      if (iVar10 == 0) goto LAB_18010bc07;
      if (((bVar8 | bVar7) == 1) && (iVar10 == iVar2)) goto LAB_18010bc10;
LAB_18010bc2d:
      if (((byte)(bVar13 | bVar7 | bVar8) == 1) && (iVar10 == iVar2)) goto LAB_18010bc4c;
LAB_18010bc5e:
      if (((byte)(bVar7 | bVar11 | bVar8) == 1) && (iVar10 == iVar2)) goto LAB_18010bc87;
    }
    else {
      cVar5 = FUN_180118a82(0x20c,0xffffffff);
      if (cVar5 == '\0' && (bVar14 ^ 1) == 0) {
        cVar5 = FUN_180118a82((*(byte *)(lVar4 + 0x79) ^ 1) * 2 + 0x27b,0xffffffff);
      }
      if (cVar5 == '\0') {
        uVar9 = 0;
        bVar13 = 0;
      }
      else {
        uVar9 = FUN_180118b8a(0x20c,0,0xffffffff);
        bVar13 = 1;
        if ((bVar14 ^ 1) == 0 && (char)uVar9 == '\0') {
          uVar9 = FUN_180118b8a((*(byte *)(lVar4 + 0x79) ^ 1) * 2 + 0x27b,0,0xffffffff);
        }
      }
      cVar5 = FUN_180118b8a(0x20d,0,0xffffffff);
      bVar7 = 1;
      if (cVar5 == '\0') {
        bVar7 = FUN_180118b8a(0x273,0,0xffffffff);
      }
LAB_18010bb52:
      if ((bVar14 & bVar13) == 1) {
        iVar10 = (*(byte *)(lVar4 + 0x79) ^ 1) * 2 + 0x27b;
        local_8c = uVar9;
        cVar5 = FUN_180118a82(iVar10,0xffffffff);
        if (((cVar5 == '\0') || ((*(byte *)(lVar4 + 0x2212) & 0x10) == 0)) ||
           (lVar12 = FUN_1800fdb8a(DAT_180419160,iVar10),
           DAT_1802dc418 < *(float *)(lVar12 + 8) || DAT_1802dc418 == *(float *)(lVar12 + 8))) {
          bVar8 = 0;
          bVar11 = (byte)local_8c;
        }
        else {
          bVar11 = (byte)local_8c;
          uVar9 = local_8c;
          if (*(float *)(lVar12 + 4) < DAT_1802dc418) goto LAB_18010bbbb;
          bVar8 = 1;
        }
      }
      else {
LAB_18010bbbb:
        bVar11 = (byte)uVar9;
        bVar8 = 0;
      }
      iVar10 = *(int *)(lVar4 + 0x167c);
      if (bVar11 != 1 || iVar10 != 0) goto LAB_18010bbf4;
      *(int *)(lVar4 + 0x2214) = iVar2;
      *(undefined4 *)(lVar4 + 0x2220) = 2;
      bVar11 = 1;
LAB_18010bc07:
      if ((bVar8 | bVar7) == 1) {
LAB_18010bc10:
        *(int *)(lVar4 + 0x2214) = iVar2;
        *(undefined4 *)(lVar4 + 0x2220) = 1;
        iVar10 = *(int *)(lVar4 + 0x167c);
        if (iVar10 != 0) goto LAB_18010bc2d;
      }
      if ((bVar8 != 0) || ((bVar13 != 0 || (bVar7 != 0)))) {
LAB_18010bc4c:
        *(int *)(lVar4 + 0x2218) = iVar2;
        iVar10 = *(int *)(lVar4 + 0x167c);
        if (iVar10 != 0) goto LAB_18010bc5e;
      }
      if ((bVar8 != 0) || ((bVar11 != 0 || (bVar7 != 0)))) {
LAB_18010bc87:
        *(int *)(lVar4 + 0x221c) = iVar2;
        FUN_18011bfa8(iVar2);
      }
    }
LAB_18010b6d3:
    if ((*(longlong *)(lVar4 + 0x2200) == 0) ||
       ((*(byte *)(*(longlong *)(lVar4 + 0x2200) + 0x16) & 1) == 0)) goto LAB_18010b6e5;
    uVar6 = 0;
LAB_18010b6fc:
    *(undefined1 *)(lVar4 + 0x21f4) = uVar6;
  }
  fVar17 = *(float *)(lVar4 + 0x223c);
  if (0.0 < fVar17) {
    fVar17 = (float)FUN_180102463(0,fVar17 - *(float *)(lVar4 + 0x48));
    *(float *)(lVar4 + 0x223c) = fVar17;
  }
  if ((fVar17 == 0.0) && (!NAN(fVar17))) {
    *(undefined4 *)(lVar4 + 0x2238) = 0;
  }
  iVar2 = *(int *)(lVar4 + 0x2248);
  if (iVar2 != 0) {
    *(int *)(lVar4 + 0x221c) = iVar2;
    *(int *)(lVar4 + 0x2218) = iVar2;
    *(int *)(lVar4 + 0x2214) = iVar2;
    *(undefined4 *)(lVar4 + 0x2220) = *(undefined4 *)(lVar4 + 0x224c);
  }
  *(undefined4 *)(lVar4 + 0x2248) = 0;
  FUN_18012e166();
  if (*(int *)(lVar4 + 0x22b0) == -1) {
    FUN_18012e80c();
  }
  uVar6 = 1;
  if (*(char *)(DAT_180419160 + 0x22a1) == '\0') {
    uVar6 = *(undefined1 *)(DAT_180419160 + 0x2262);
  }
  *(undefined1 *)(DAT_180419160 + 0x2261) = uVar6;
  *(undefined1 *)(lVar4 + 0x21f7) = 0;
  lVar12 = *(longlong *)(lVar4 + 0x2200);
  if (((lVar12 == 0) || ((*(byte *)(lVar12 + 0x16) & 1) != 0)) ||
     (*(longlong *)(lVar4 + 0x23e8) != 0)) {
LAB_18010b8d8:
    if ((uVar1 & 1) == 0 && bVar14 == 0) {
      *(undefined2 *)(lVar4 + 0x21f4) = 0;
      goto LAB_18010b917;
    }
  }
  else {
    fVar17 = (float)(int)(*(float *)(lVar12 + 0x318) * DAT_1802dbb34 * *(float *)(lVar4 + 0x48) +
                         DAT_1802dbb2c);
    if ((*(short *)(lVar12 + 0x1b4) == 0) &&
       (uVar3 = *(uint *)(lVar4 + 0x22b0), (uVar3 != 0xffffffff & *(byte *)(lVar12 + 0x1ba)) == 1))
    {
      if (uVar3 < 2) {
        FUN_18011a757(lVar12,(float)(int)(*(float *)(&DAT_1802de750 + (ulonglong)(uVar3 == 0) * 4) *
                                          fVar17 + *(float *)(lVar12 + 0xd4)));
      }
      if ((uVar3 & 0xfffffffe) == 2) {
        FUN_18011a76e(lVar12,(float)(int)(*(float *)(&DAT_1802de750 + (ulonglong)(uVar3 == 2) * 4) *
                                          fVar17 + *(float *)(lVar12 + 0xd8)));
      }
    }
    if (bVar14 == 0) goto LAB_18010b8d8;
    local_98 = 0x28b;
    FUN_1801185ab(&local_88,0x288,0x289,0x28a);
    cVar5 = FUN_180118a7b(0x282);
    fVar18 = DAT_1802dc268;
    if ((cVar5 == '\0') && (cVar5 = FUN_180118a7b(0x283), fVar18 = DAT_1802dc2dc, cVar5 == '\0')) {
      fVar18 = DAT_1802ac570;
    }
    if (((local_88 != 0.0) || (NAN(local_88))) && (*(char *)(lVar12 + 0x104) == '\x01')) {
      FUN_18011a757(lVar12,(float)(int)(local_88 * fVar17 * fVar18 + *(float *)(lVar12 + 0xd4)));
    }
    if ((local_84 != 0.0) || (NAN(local_84))) {
      FUN_18011a76e(lVar12,(float)(int)(local_84 * fVar17 * fVar18 + *(float *)(lVar12 + 0xd8)));
    }
  }
  if (((bVar15) && (*(char *)(lVar4 + 0x7a) == '\x01')) && ((*(byte *)(lVar4 + 0x34) & 4) != 0)) {
    FUN_18011aef2(&local_88,0x4000000);
    FUN_180118e20(&local_88);
  }
LAB_18010b917:
  *(undefined4 *)(lVar4 + 0x22dc) = 0;
  if (DAT_180402640 != (local_80 ^ (ulonglong)auStack_b8)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_80 ^ (ulonglong)auStack_b8);
  }
  return;
}

