/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100286cd */

undefined8 FUN_100286cd(uint param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  bool bVar18;
  uint local_34;
  uint local_30;
  int local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_34;
  uVar9 = param_1 & 0x7fffff;
  uVar14 = param_1 >> 0x17 & 0xff;
  if (uVar14 == 0) {
    iVar15 = -0x95;
    if (uVar9 == 0) {
      iVar16 = 0;
      uVar9 = 0;
      goto LAB_10028a10;
    }
LAB_10028719:
    iVar16 = iVar15 * 0x4d105 >> 0x14;
    iVar6 = 1 - iVar16;
    uVar14 = *(uint *)(&DAT_10290cd4 + iVar6 * 8);
    local_30 = *(uint *)(&DAT_10290cd0 + iVar6 * 8);
    local_2c = (iVar6 * 0x1a934f >> 0x13) + iVar15;
    bVar8 = (byte)local_2c;
    uVar17 = uVar9 * 2 + 1 << (bVar8 & 0x1f);
    uVar10 = (uint)((ulonglong)uVar17 * (ulonglong)local_30 >> 0x20);
    lVar2 = (ulonglong)uVar17 * (ulonglong)uVar14;
    lVar4 = lVar2 + (ulonglong)uVar10;
    uVar17 = (uint)((ulonglong)lVar4 >> 0x20) / 100;
    uVar13 = (uint)lVar4;
    local_24 = uVar17 * -100 + (int)((ulonglong)lVar2 >> 0x20) + (uint)CARRY4((uint)lVar2,uVar10);
    bVar7 = 0x3f - bVar8;
    uVar10 = uVar14 >> (bVar7 & 0x1f);
    if ((bVar7 & 0x20) == 0) {
      uVar10 = local_30 >> (bVar7 & 0x1f) | uVar14 << 0x20 - (bVar7 & 0x1f);
    }
    uVar3 = uVar9 * 2;
    local_34 = uVar14;
    local_28 = uVar9;
    if (local_24 < uVar10) {
      bVar18 = local_24 != 0;
      local_24 = uVar13;
      if (((bVar18) || (uVar13 != 0)) || (local_28 = uVar9 & 1, local_28 == 0)) {
LAB_1002892b:
        iVar16 = iVar16 + -1;
        do {
          uVar14 = uVar17;
          uVar17 = uVar14 * 0x40000000 | uVar14 * -0x3d70a3d7 >> 2;
          iVar16 = iVar16 + 2;
        } while (uVar17 < 0x28f5c29);
        goto LAB_10028964;
      }
      uVar17 = uVar17 - 1;
      local_24 = 100;
    }
    else if (local_24 <= uVar10) {
      lVar2 = (ulonglong)local_30 * (ulonglong)(uVar3 - 1);
      local_1c = (uint)lVar2;
      uVar11 = (int)((ulonglong)lVar2 >> 0x20) + uVar14 * (uVar3 - 1);
      bVar7 = 0x40 - bVar8;
      uVar13 = uVar11 >> (bVar7 & 0x1f);
      if ((bVar7 & 0x20) == 0) {
        uVar13 = local_1c >> (bVar7 & 0x1f) | uVar11 << 0x20 - (bVar7 & 0x1f);
      }
      bVar8 = 0x20 - bVar8;
      uVar12 = uVar11 >> (bVar8 & 0x1f);
      if ((bVar8 & 0x20) == 0) {
        uVar12 = local_1c >> (bVar8 & 0x1f) | uVar11 << 0x20 - (bVar8 & 0x1f);
      }
      local_20 = uVar3;
      if (((uint)(uVar12 == 0) & ~uVar9) != 0 || (uVar13 & 1) != 0) goto LAB_1002892b;
    }
    local_24 = local_24 - (uVar10 >> 1);
    local_18 = local_24 + 5;
    local_20 = uVar3;
    cVar5 = FUN_10028e48(&local_18);
    uVar9 = local_18 + uVar17 * 10;
    if (cVar5 != '\0') {
      local_34 = local_18;
      uVar1 = (ulonglong)local_30;
      local_30 = (uint)(uVar1 * local_20);
      uVar10 = uVar14 * local_20 + (int)(uVar1 * local_20 >> 0x20);
      bVar7 = 0x40 - (char)local_2c;
      uVar14 = uVar10 >> (bVar7 & 0x1f);
      if ((bVar7 & 0x20) == 0) {
        uVar14 = local_30 >> (bVar7 & 0x1f) | uVar10 << 0x20 - (bVar7 & 0x1f);
      }
      if (((local_24 ^ uVar14) & 1) == 0) {
        bVar7 = 0x20 - (char)local_2c;
        uVar14 = uVar10 >> (bVar7 & 0x1f);
        if ((bVar7 & 0x20) == 0) {
          uVar14 = local_30 >> (bVar7 & 0x1f) | uVar10 << 0x20 - (bVar7 & 0x1f);
        }
        uVar9 = uVar9 - ((byte)local_18 & uVar14 == 0);
      }
      else {
        uVar9 = uVar9 - 1;
      }
    }
  }
  else {
    iVar15 = uVar14 - 0x96;
    if (uVar9 != 0) {
      uVar9 = uVar9 | 0x800000;
      goto LAB_10028719;
    }
    iVar16 = iVar15 * 0x9a209 + -0x3fe1f >> 0x15;
    uVar9 = *(uint *)(&DAT_10290cd4 + iVar16 * -8);
    local_30 = *(uint *)(&DAT_10290cd0 + iVar16 * -8);
    uVar14 = uVar9 << 7 | local_30 >> 0x19;
    local_2c = (iVar16 * -0x1a934f >> 0x13) + iVar15;
    local_34 = (uVar9 - (uVar9 >> 0x19)) - (uint)(local_30 < uVar14);
    bVar7 = 0x28 - (char)local_2c;
    local_28 = local_30 - uVar14 >> (bVar7 & 0x1f) | local_34 << 0x20 - (bVar7 & 0x1f);
    local_34 = local_34 >> (bVar7 & 0x1f);
    uVar10 = uVar9 << 8 | local_30 >> 0x18;
    uVar17 = (uVar9 >> 0x18) + uVar9 + (uint)CARRY4(uVar10,local_30);
    uVar14 = uVar17 >> (bVar7 & 0x1f);
    if ((bVar7 & 0x20) == 0) {
      uVar14 = uVar10 + local_30 >> (bVar7 & 0x1f) | uVar17 << 0x20 - (bVar7 & 0x1f);
      local_34 = local_28;
    }
    bVar7 = FUN_10028e63(iVar15);
    uVar10 = (bVar7 ^ 1) + local_34;
    if ((uVar14 / 10) * 10 < uVar10) {
      bVar7 = 0x27 - (char)local_2c;
      uVar14 = uVar9 >> (bVar7 & 0x1f);
      if ((bVar7 & 0x20) == 0) {
        uVar14 = local_30 >> (bVar7 & 0x1f) | uVar9 << 0x20 - (bVar7 & 0x1f);
      }
      uVar9 = uVar14 + 1 >> 1;
      if (iVar15 == -0x23) {
        uVar9 = uVar9 & 0xfffffffe;
      }
      else {
        uVar9 = uVar9 + (uVar9 < uVar10);
      }
      goto LAB_10028a10;
    }
    iVar16 = iVar16 + -1;
    uVar9 = uVar14 / 10;
    do {
      uVar14 = uVar9;
      uVar9 = uVar14 * 0x40000000 | uVar14 * -0x3d70a3d7 >> 2;
      iVar16 = iVar16 + 2;
    } while (uVar9 < 0x28f5c29);
LAB_10028964:
    uVar10 = uVar14 * -0x33333333 >> 1 | (uint)((uVar14 * -0x33333333 & 1) != 0) << 0x1f;
    uVar9 = uVar10;
    if (uVar10 >= 0x1999999a) {
      uVar9 = uVar14;
    }
    iVar16 = iVar16 + (uint)(uVar10 < 0x1999999a);
  }
LAB_10028a10:
  if (DAT_10388d00 == (local_14 ^ (uint)&local_34)) {
    return CONCAT44(iVar16,uVar9);
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

