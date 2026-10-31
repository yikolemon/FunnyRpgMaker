/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14075a8ea */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14075a8ea(void)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  uint unaff_EBX;
  uint *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 uVar13;
  float fVar14;
  undefined8 uStack_30;
  undefined1 auStack_28 [8];
  
  uVar4 = _DAT_150af8045;
  puVar10 = (uint *)auStack_28;
  uVar12 = (ulonglong)_DAT_150af8045;
  uVar1 = *(uint *)(uVar12 + 0x14cc);
  uVar11 = (ulonglong)uVar1;
  if ((unaff_EBX & 0xfffc005f) != 0) {
    uStack_30 = 0x1034b6e7;
    FUN_140754dc5();
    puVar10 = (uint *)(ulonglong)((int)&uStack_30 + 4);
  }
  uVar9 = (ulonglong)unaff_EBX;
  if (((*(char *)(uVar12 + 0x2041) == '\x01') && ((unaff_EBX >> 0xb & 1) == 0)) &&
     (*(char *)(uVar12 + 0x2040) != '\0')) {
    *(undefined8 *)((longlong)puVar10 + -8) = 0x14075a937;
    cVar5 = FUN_14075ab14();
    if (cVar5 == '\0') {
      return 0;
    }
    if (((unaff_EBX >> 10 & 1) == 0) && ((*(uint *)(uVar12 + 0x1e84) & 0x40) != 0)) {
      return 0;
    }
    uVar13 = (unaff_EBX >> 0xc & 1) != 0;
    if ((bool)uVar13) {
      uVar2 = *(undefined4 *)(uVar12 + 0x1200);
      *(undefined8 *)((longlong)puVar10 + -8) = 0x14075a96b;
      unaff_EBX = FUN_14075ab48(uVar9,uVar2);
    }
  }
  else {
    uVar3 = *(uint *)(uVar12 + 0x1e88);
    if ((uVar3 & 1) == 0) {
      return 0;
    }
    if ((unaff_EBX >> 0xc & 1) != 0) {
      uVar2 = *(undefined4 *)(uVar12 + 0x11fc);
      *(undefined8 *)((longlong)puVar10 + -8) = 0x14075a992;
      uVar7 = FUN_14075ab48(uVar9,uVar2);
      uVar9 = (ulonglong)uVar7;
    }
    if ((*(uint *)(uVar12 + 0x14d0) != uVar1) && ((uVar9 & 0x200) == 0 && (uVar3 & 0x80) == 0)) {
      return 0;
    }
    uVar1 = *(uint *)(uVar12 + 0x1e80);
    if (((((-1 < (char)uVar9) && (uVar3 = *(uint *)(uVar12 + 0x1528), uVar3 != 0)) &&
         ((uVar3 != uVar1 &&
          ((*(char *)(uVar12 + 0x1535) == '\0' && (*(char *)(uVar12 + 0x153a) == '\0')))))) &&
        ((uVar3 != *(uint *)(uVar11 + 0xb4) ||
         ((uVar1 != 0 && (*(uint *)(uVar12 + 0x153c) != uVar1)))))) &&
       (uVar3 != *(uint *)(uVar11 + 0xb8))) {
      return 0;
    }
    *(ulonglong *)((longlong)puVar10 + -8) = uVar9;
    *(ulonglong *)((longlong)puVar10 + -0x10) = uVar11;
    *(undefined8 *)((longlong)puVar10 + -0x18) = 0x14075aa06;
    bVar6 = FUN_14075a83d();
    puVar10 = (uint *)(ulonglong)((int)(undefined1 *)((longlong)puVar10 + -0x10) + 8);
    uVar3 = *(uint *)(uVar12 + 0x1e84);
    if (((byte)(uVar3 >> 0xd) & 1 | bVar6) != 1) {
      return 0;
    }
    *puVar10 = (uint)uVar9;
    if ((((uint)uVar9 >> 10 & 1) == 0 & (byte)((uVar3 & 0x40) >> 6)) != 0) {
      return 0;
    }
    if ((uVar1 == *(uint *)(uVar11 + 0xb4)) && (*(char *)(uVar11 + 0xfb) != '\0')) {
      return 0;
    }
    uVar13 = true;
    if (((*puVar10 >> 8 & 1) == 0) && (uVar13 = false, (uVar3 & 0x4000) != 0)) {
      uVar13 = false;
      unaff_EBX = *puVar10;
      if ((uVar1 != 0) &&
         (uVar13 = *(uint *)(uVar12 + 0x1514) < uVar1, *(uint *)(uVar12 + 0x1514) != uVar1)) {
        return 0;
      }
    }
    else {
      unaff_EBX = *puVar10;
    }
  }
  if ((bool)uVar13) {
    fVar14 = *(float *)((ulonglong)_DAT_10e1ba0f1039d74c + 0x11f8);
  }
  else {
    fVar14 = 0.0;
    if ((short)unaff_EBX < 0) {
      fVar14 = *(float *)((ulonglong)_DAT_10e1ba0f1039d74c + 0x11f4);
    }
  }
  if (((unaff_EBX >> 0xd & 1) != 0) || (0.0 < fVar14)) {
    iVar8 = *(int *)(uVar12 + 0x1e80);
    if (iVar8 == 0) {
      *(ulonglong *)((longlong)puVar10 + -8) = (ulonglong)(uVar4 + 0x1e8c);
      *(float *)((longlong)puVar10 + -4) = fVar14;
      *(undefined8 *)((longlong)puVar10 + -0x10) = 0x14075aaca;
      iVar8 = FUN_14075ab5c(uVar11);
      fVar14 = *(float *)((longlong)puVar10 + -8);
    }
    if (((unaff_EBX >> 0x11 & 1) != 0) && (*(int *)(uVar12 + 0x244c) != iVar8)) {
      *(undefined4 *)(uVar12 + 0x2450) = 0;
    }
    *(int *)(uVar12 + 0x2448) = iVar8;
    if ((((unaff_EBX >> 0xd & 1) != 0) && (*(int *)(uVar12 + 0x2458) != iVar8)) ||
       (*(float *)(uVar12 + 0x2450) <= fVar14 && fVar14 != *(float *)(uVar12 + 0x2450))) {
      return 0;
    }
  }
  return 1;
}

