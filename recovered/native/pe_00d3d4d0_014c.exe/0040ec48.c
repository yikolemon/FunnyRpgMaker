/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0040ec48 */

void __cdecl FUN_0040ec48(longlong *param_1,uint param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  bool bVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  byte bVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  char cVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  int iVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  int iVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  bool bVar39;
  bool bVar40;
  bool bVar41;
  uint local_5c;
  uint local_58;
  int local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  int local_44;
  uint local_2c;
  char local_20;
  
  uVar11 = param_3 | 0x100000;
  if (param_4 == 0) {
    uVar11 = param_3;
  }
  uVar28 = 0xfffffbcc;
  if (param_4 != 0) {
    uVar28 = param_4 - 0x435;
  }
  uVar33 = uVar11 << 2 | param_2 >> 0x1e;
  bVar41 = param_3 != 0;
  bVar40 = param_2 != 0;
  bVar39 = param_4 < 2;
  bVar7 = bVar39 || (bVar41 || bVar40);
  uVar20 = param_2 * 4;
  if ((int)uVar28 < 0) {
    uVar16 = (uVar28 * -0xb2efb >> 0x14) - (uint)(uVar28 != 0xffffffff);
    local_2c = uVar28 + uVar16;
    uVar30 = uVar11 << 1 | param_2 >> 0x1f;
    uVar18 = param_2 * 2;
    uVar11 = *(uint *)(&DAT_004b0df0 + local_2c * -0x10);
    uVar10 = (uint)((ulonglong)uVar11 * (ulonglong)uVar18 >> 0x20);
    uVar37 = (uint)((ulonglong)uVar11 * (ulonglong)uVar18);
    uVar28 = *(uint *)(&DAT_004b0df4 + local_2c * -0x10);
    uVar13 = (uint)((ulonglong)uVar28 * (ulonglong)uVar18 >> 0x20);
    uVar29 = (uint)((ulonglong)uVar28 * (ulonglong)uVar18);
    uVar15 = local_2c * -0x12934f >> 0x13;
    uVar23 = (uint)((ulonglong)uVar11 * (ulonglong)uVar30 >> 0x20);
    uVar31 = (uint)((ulonglong)uVar11 * (ulonglong)uVar30);
    uVar35 = (uint)((ulonglong)uVar28 * (ulonglong)uVar30);
    uVar22 = uVar31 + uVar10;
    uVar31 = (uint)CARRY4(uVar31,uVar10);
    uVar10 = uVar35 + uVar23;
    uVar24 = uVar10 + uVar31;
    uVar32 = uVar22 + uVar29;
    uVar29 = (uint)CARRY4(uVar22,uVar29);
    uVar22 = uVar24 + uVar13;
    uVar38 = uVar22 + uVar29;
    uVar19 = (int)((ulonglong)uVar28 * (ulonglong)uVar30 >> 0x20) +
             (uint)(CARRY4(uVar35,uVar23) || CARRY4(uVar10,uVar31)) +
             (uint)(CARRY4(uVar24,uVar13) || CARRY4(uVar22,uVar29));
    uVar31 = *(uint *)(&DAT_004b0df8 + local_2c * -0x10);
    uVar35 = (uint)((ulonglong)uVar31 * (ulonglong)uVar18 >> 0x20);
    uVar23 = (uint)((ulonglong)uVar31 * (ulonglong)uVar18);
    uVar29 = *(uint *)(&DAT_004b0dfc + local_2c * -0x10);
    uVar25 = (uint)((ulonglong)uVar29 * (ulonglong)uVar18 >> 0x20);
    uVar22 = (uint)((ulonglong)uVar29 * (ulonglong)uVar18);
    uVar26 = (uint)((ulonglong)uVar31 * (ulonglong)uVar30 >> 0x20);
    uVar10 = (uint)((ulonglong)uVar31 * (ulonglong)uVar30);
    uVar9 = (uint)((ulonglong)uVar29 * (ulonglong)uVar30);
    uVar18 = uVar10 + uVar35;
    uVar10 = (uint)CARRY4(uVar10,uVar35);
    uVar35 = uVar9 + uVar26;
    uVar12 = uVar35 + uVar10;
    uVar36 = uVar18 + uVar22;
    uVar22 = (uint)CARRY4(uVar18,uVar22);
    uVar13 = uVar12 + uVar25;
    uVar14 = uVar13 + uVar22;
    uVar24 = uVar23 + uVar38;
    uVar18 = (uint)CARRY4(uVar23,uVar38);
    uVar23 = uVar36 + uVar19;
    local_5c = uVar23 + uVar18;
    uVar18 = (uint)(CARRY4(uVar36,uVar19) || CARRY4(uVar23,uVar18));
    uVar23 = uVar14 + uVar18;
    iVar27 = (int)((ulonglong)uVar29 * (ulonglong)uVar30 >> 0x20) +
             (uint)(CARRY4(uVar9,uVar26) || CARRY4(uVar35,uVar10)) +
             (uint)(CARRY4(uVar12,uVar25) || CARRY4(uVar13,uVar22)) + (uint)CARRY4(uVar14,uVar18);
    uVar10 = (uint)(CARRY4(uVar32,uVar28) || CARRY4(uVar32 + uVar28,(uint)CARRY4(uVar37,uVar11)));
    local_4c = uVar24 + uVar31 + uVar10;
    iVar34 = (uVar16 + 0x78) - uVar15;
    local_48 = local_5c + uVar29 + (uint)CARRY4(uVar24,uVar31) +
               (uint)CARRY4(uVar24 + uVar31,uVar10);
    uVar10 = (uVar16 - uVar15) + 0x37;
    cVar21 = (char)iVar34;
    bVar8 = (byte)uVar10;
    if (uVar10 == 0) {
      if (!bVar39 && (!bVar41 && !bVar40)) goto LAB_0040f4c7;
      uVar11 = (uint)(uVar32 < uVar28 || uVar32 - uVar28 < (uint)(uVar37 < uVar11));
      local_50 = (uVar24 - uVar31) - uVar11;
      local_58 = ((local_5c - uVar29) - (uint)(uVar24 < uVar31)) - (uint)(uVar24 - uVar31 < uVar11);
    }
    else {
      uVar22 = (uint)(local_48 < local_5c || local_48 - local_5c < (uint)(local_4c < uVar24));
      uVar35 = uVar23 + uVar22;
      bVar17 = 0x81 - cVar21;
      uVar13 = uVar35 << (bVar17 & 0x1f);
      uVar18 = uVar13;
      uVar22 = iVar27 + (uint)CARRY4(uVar23,uVar22) << (bVar17 & 0x1f) |
               uVar35 >> 0x20 - (bVar17 & 0x1f);
      if ((bVar17 & 0x20) != 0) {
        uVar18 = 0;
        uVar22 = uVar13;
      }
      uVar13 = local_48 >> (bVar8 & 0x1f);
      uVar35 = uVar13;
      local_4c = local_4c >> (bVar8 & 0x1f) | local_48 << 0x20 - (bVar8 & 0x1f);
      if ((uVar10 & 0x20) != 0) {
        uVar35 = 0;
        local_4c = uVar13;
      }
      local_4c = local_4c | uVar18;
      local_48 = uVar35 | uVar22;
      if (bVar39 || (bVar41 || bVar40)) {
        uVar11 = (uint)(uVar32 < uVar28 || uVar32 - uVar28 < (uint)(uVar37 < uVar11));
        uVar18 = (uVar24 - uVar31) - uVar11;
        uVar31 = ((local_5c - uVar29) - (uint)(uVar24 < uVar31)) - (uint)(uVar24 - uVar31 < uVar11);
        uVar11 = (uint)(local_5c < uVar31 || local_5c - uVar31 < (uint)(uVar24 < uVar18));
        uVar29 = uVar23 - uVar11;
        bVar17 = 0x81 - cVar21;
        uVar22 = uVar29 << (bVar17 & 0x1f);
        uVar28 = uVar22;
        uVar11 = iVar27 - (uint)(uVar23 < uVar11) << (bVar17 & 0x1f) |
                 uVar29 >> 0x20 - (bVar17 & 0x1f);
        if ((bVar17 & 0x20) != 0) {
          uVar28 = 0;
          uVar11 = uVar22;
        }
        uVar29 = uVar31 >> (bVar8 & 0x1f);
        local_58 = uVar29;
        local_50 = uVar18 >> (bVar8 & 0x1f) | uVar31 << 0x20 - (bVar8 & 0x1f);
        if ((uVar10 & 0x20) != 0) {
          local_58 = 0;
          local_50 = uVar29;
        }
        local_50 = local_50 | uVar28;
        local_58 = local_58 | uVar11;
      }
      else {
LAB_0040f4c7:
        uVar18 = uVar24 * 2 | uVar32 >> 0x1f;
        uVar22 = uVar32 * 2 | uVar37 >> 0x1f;
        uVar35 = local_5c * 2 | uVar24 >> 0x1f;
        uVar11 = (uint)(uVar22 < uVar28 || uVar22 - uVar28 < (uint)(uVar37 * 2 < uVar11));
        local_50 = (uVar18 - uVar31) - uVar11;
        local_58 = ((uVar35 - uVar29) - (uint)(uVar18 < uVar31)) - (uint)(uVar18 - uVar31 < uVar11);
        uVar11 = iVar34 - 0x40;
        if (uVar11 != 0) {
          uVar28 = (uint)(uVar35 < local_5c || uVar35 - local_5c < (uint)(uVar18 < uVar24)) +
                   uVar23 * 2;
          uVar31 = (uint)(uVar35 < local_58 || uVar35 - local_58 < (uint)(uVar18 < local_50));
          uVar22 = uVar28 - uVar31;
          bVar17 = 0x80 - cVar21;
          uVar18 = uVar22 << (bVar17 & 0x1f);
          uVar29 = uVar18;
          uVar28 = (iVar27 * 2 | uVar23 >> 0x1f) - (uint)(uVar28 < uVar31) << (bVar17 & 0x1f) |
                   uVar22 >> 0x20 - (bVar17 & 0x1f);
          if ((bVar17 & 0x20) != 0) {
            uVar29 = 0;
            uVar28 = uVar18;
          }
          bVar17 = (byte)uVar11 & 0x1f;
          uVar22 = local_58 >> ((byte)uVar11 & 0x1f);
          uVar31 = uVar22;
          local_50 = local_50 >> bVar17 | local_58 << 0x20 - bVar17;
          if ((uVar11 & 0x20) != 0) {
            uVar31 = 0;
            local_50 = uVar22;
          }
          local_50 = local_50 | uVar29;
          local_58 = uVar31 | uVar28;
          if (uVar10 == 0) goto LAB_0040f5ca;
        }
      }
      bVar17 = 0x81 - cVar21;
      uVar31 = uVar23 << (bVar17 & 0x1f);
      uVar28 = uVar31;
      uVar11 = iVar27 << (bVar17 & 0x1f) | uVar23 >> 0x20 - (bVar17 & 0x1f);
      if ((bVar17 & 0x20) != 0) {
        uVar28 = 0;
        uVar11 = uVar31;
      }
      uVar29 = local_5c >> (bVar8 & 0x1f);
      uVar31 = uVar29;
      uVar24 = uVar24 >> (bVar8 & 0x1f) | local_5c << 0x20 - (bVar8 & 0x1f);
      if ((uVar10 & 0x20) != 0) {
        uVar31 = 0;
        uVar24 = uVar29;
      }
      local_5c = uVar31 | uVar11;
      uVar24 = uVar24 | uVar28;
    }
LAB_0040f5ca:
    if (uVar16 < 2) {
      bVar41 = (param_2 & 1) != 0;
      if (bVar41) {
        bVar40 = local_4c != 0;
        local_4c = local_4c - 1;
        local_48 = (local_48 - 1) + (uint)bVar40;
      }
      bVar7 = !bVar41 && bVar7;
      bVar41 = true;
      goto LAB_0040f646;
    }
    bVar41 = false;
    if (uVar16 < 0x3f) {
      bVar8 = (char)uVar16 - 1;
      uVar31 = -1 << (bVar8 & 0x1f);
      uVar28 = uVar31;
      uVar11 = 0xffffffff;
      if ((bVar8 & 0x20) != 0) {
        uVar28 = 0;
        uVar11 = uVar31;
      }
      bVar41 = (uVar20 & ~uVar28) == 0 && (uVar33 & ~uVar11) == 0;
    }
  }
  else {
    local_2c = ((uVar28 * 0x13441 >> 0x12) - 1) + (uint)(uVar28 < 4);
    iVar34 = local_2c * 0x10;
    uVar35 = param_2 * 2;
    uVar31 = *(uint *)(&DAT_004afbb0 + iVar34);
    uVar22 = (uint)((ulonglong)uVar31 * (ulonglong)uVar35 >> 0x20);
    uVar9 = (uint)((ulonglong)uVar31 * (ulonglong)uVar35);
    uVar29 = *(uint *)(&DAT_004afbb4 + iVar34);
    uVar23 = (uint)((ulonglong)uVar29 * (ulonglong)uVar35 >> 0x20);
    uVar10 = (uint)((ulonglong)uVar29 * (ulonglong)uVar35);
    uVar32 = uVar11 << 1 | param_2 >> 0x1f;
    uVar24 = (uint)((ulonglong)uVar31 * (ulonglong)uVar32 >> 0x20);
    uVar11 = (uint)((ulonglong)uVar31 * (ulonglong)uVar32);
    uVar12 = local_2c * 0x12934f >> 0x13;
    uVar13 = (uint)((ulonglong)uVar29 * (ulonglong)uVar32);
    uVar18 = uVar11 + uVar22;
    uVar11 = (uint)CARRY4(uVar11,uVar22);
    uVar22 = uVar13 + uVar24;
    uVar37 = uVar22 + uVar11;
    uVar19 = uVar18 + uVar10;
    uVar10 = (uint)CARRY4(uVar18,uVar10);
    uVar18 = uVar37 + uVar23;
    uVar38 = uVar18 + uVar10;
    uVar30 = (int)((ulonglong)uVar29 * (ulonglong)uVar32 >> 0x20) +
             (uint)(CARRY4(uVar13,uVar24) || CARRY4(uVar22,uVar11)) +
             (uint)(CARRY4(uVar37,uVar23) || CARRY4(uVar18,uVar10));
    uVar11 = *(uint *)(&DAT_004afbb8 + iVar34);
    uVar13 = (uint)((ulonglong)uVar11 * (ulonglong)uVar35 >> 0x20);
    uVar37 = (uint)((ulonglong)uVar11 * (ulonglong)uVar35);
    uVar10 = *(uint *)(&DAT_004afbbc + iVar34);
    uVar25 = (uint)((ulonglong)uVar10 * (ulonglong)uVar35 >> 0x20);
    uVar18 = (uint)((ulonglong)uVar10 * (ulonglong)uVar35);
    uVar26 = (uint)((ulonglong)uVar11 * (ulonglong)uVar32 >> 0x20);
    uVar22 = (uint)((ulonglong)uVar11 * (ulonglong)uVar32);
    uVar14 = (uint)((ulonglong)uVar10 * (ulonglong)uVar32);
    uVar35 = uVar22 + uVar13;
    uVar22 = (uint)CARRY4(uVar22,uVar13);
    uVar13 = uVar14 + uVar26;
    uVar15 = uVar13 + uVar22;
    uVar36 = uVar35 + uVar18;
    uVar18 = (uint)CARRY4(uVar35,uVar18);
    uVar23 = uVar15 + uVar25;
    uVar16 = uVar23 + uVar18;
    uVar24 = uVar37 + uVar38;
    uVar35 = (uint)CARRY4(uVar37,uVar38);
    uVar37 = uVar36 + uVar30;
    local_5c = uVar37 + uVar35;
    uVar35 = (uint)(CARRY4(uVar36,uVar30) || CARRY4(uVar37,uVar35));
    uVar37 = uVar16 + uVar35;
    iVar27 = (int)((ulonglong)uVar10 * (ulonglong)uVar32 >> 0x20) +
             (uint)(CARRY4(uVar14,uVar26) || CARRY4(uVar13,uVar22)) +
             (uint)(CARRY4(uVar15,uVar25) || CARRY4(uVar23,uVar18)) + (uint)CARRY4(uVar16,uVar35);
    uVar22 = (uint)(CARRY4(uVar19,uVar29) || CARRY4(uVar19 + uVar29,(uint)CARRY4(uVar9,uVar31)));
    local_4c = uVar24 + uVar11 + uVar22;
    iVar34 = (local_2c - uVar28) + 0x7a + uVar12;
    local_48 = local_5c + uVar10 + (uint)CARRY4(uVar24,uVar11) +
               (uint)CARRY4(uVar24 + uVar11,uVar22);
    uVar28 = (local_2c - uVar28) + uVar12 + 0x39;
    local_20 = (char)iVar34;
    bVar8 = (byte)uVar28;
    if (uVar28 == 0) {
      if (!bVar39 && (!bVar41 && !bVar40)) goto LAB_0040f1c4;
      uVar28 = (uint)(uVar19 < uVar29 || uVar19 - uVar29 < (uint)(uVar9 < uVar31));
      local_50 = (uVar24 - uVar11) - uVar28;
      local_58 = ((local_5c - uVar10) - (uint)(uVar24 < uVar11)) - (uint)(uVar24 - uVar11 < uVar28);
    }
    else {
      uVar22 = (uint)(local_48 < local_5c || local_48 - local_5c < (uint)(local_4c < uVar24));
      uVar35 = uVar37 + uVar22;
      bVar17 = 0x81 - local_20;
      uVar13 = uVar35 << (bVar17 & 0x1f);
      uVar18 = uVar13;
      uVar22 = iVar27 + (uint)CARRY4(uVar37,uVar22) << (bVar17 & 0x1f) |
               uVar35 >> 0x20 - (bVar17 & 0x1f);
      if ((bVar17 & 0x20) != 0) {
        uVar18 = 0;
        uVar22 = uVar13;
      }
      uVar13 = local_48 >> (bVar8 & 0x1f);
      uVar35 = uVar13;
      local_4c = local_4c >> (bVar8 & 0x1f) | local_48 << 0x20 - (bVar8 & 0x1f);
      if ((uVar28 & 0x20) != 0) {
        uVar35 = 0;
        local_4c = uVar13;
      }
      local_4c = local_4c | uVar18;
      local_48 = uVar35 | uVar22;
      if (bVar39 || (bVar41 || bVar40)) {
        uVar31 = (uint)(uVar19 < uVar29 || uVar19 - uVar29 < (uint)(uVar9 < uVar31));
        uVar18 = (uVar24 - uVar11) - uVar31;
        uVar29 = ((local_5c - uVar10) - (uint)(uVar24 < uVar11)) - (uint)(uVar24 - uVar11 < uVar31);
        uVar11 = (uint)(local_5c < uVar29 || local_5c - uVar29 < (uint)(uVar24 < uVar18));
        uVar10 = uVar37 - uVar11;
        bVar17 = 0x81 - local_20;
        uVar22 = uVar10 << (bVar17 & 0x1f);
        uVar31 = uVar22;
        uVar11 = iVar27 - (uint)(uVar37 < uVar11) << (bVar17 & 0x1f) |
                 uVar10 >> 0x20 - (bVar17 & 0x1f);
        if ((bVar17 & 0x20) != 0) {
          uVar31 = 0;
          uVar11 = uVar22;
        }
        uVar10 = uVar29 >> (bVar8 & 0x1f);
        local_58 = uVar10;
        local_50 = uVar18 >> (bVar8 & 0x1f) | uVar29 << 0x20 - (bVar8 & 0x1f);
        if ((uVar28 & 0x20) != 0) {
          local_58 = 0;
          local_50 = uVar10;
        }
        local_50 = local_50 | uVar31;
        local_58 = local_58 | uVar11;
      }
      else {
LAB_0040f1c4:
        uVar22 = uVar24 * 2 | uVar19 >> 0x1f;
        uVar18 = uVar19 * 2 | uVar9 >> 0x1f;
        uVar35 = local_5c * 2 | uVar24 >> 0x1f;
        uVar31 = (uint)(uVar18 < uVar29 || uVar18 - uVar29 < (uint)(uVar9 * 2 < uVar31));
        local_50 = (uVar22 - uVar11) - uVar31;
        local_58 = ((uVar35 - uVar10) - (uint)(uVar22 < uVar11)) - (uint)(uVar22 - uVar11 < uVar31);
        uVar11 = iVar34 - 0x40;
        if (uVar11 != 0) {
          uVar31 = (uint)(uVar35 < local_5c || uVar35 - local_5c < (uint)(uVar22 < uVar24)) +
                   uVar37 * 2;
          uVar29 = (uint)(uVar35 < local_58 || uVar35 - local_58 < (uint)(uVar22 < local_50));
          uVar22 = uVar31 - uVar29;
          bVar17 = 0x80 - local_20;
          uVar18 = uVar22 << (bVar17 & 0x1f);
          uVar10 = uVar18;
          uVar31 = (iVar27 * 2 | uVar37 >> 0x1f) - (uint)(uVar31 < uVar29) << (bVar17 & 0x1f) |
                   uVar22 >> 0x20 - (bVar17 & 0x1f);
          if ((bVar17 & 0x20) != 0) {
            uVar10 = 0;
            uVar31 = uVar18;
          }
          bVar17 = (byte)uVar11 & 0x1f;
          uVar22 = local_58 >> ((byte)uVar11 & 0x1f);
          uVar29 = uVar22;
          local_50 = local_50 >> bVar17 | local_58 << 0x20 - bVar17;
          if ((uVar11 & 0x20) != 0) {
            uVar29 = 0;
            local_50 = uVar22;
          }
          local_50 = local_50 | uVar10;
          local_58 = uVar29 | uVar31;
          if (uVar28 == 0) goto LAB_0040f2d7;
        }
      }
      bVar17 = 0x81 - local_20;
      uVar29 = uVar37 << (bVar17 & 0x1f);
      uVar31 = uVar29;
      uVar11 = iVar27 << (bVar17 & 0x1f) | uVar37 >> 0x20 - (bVar17 & 0x1f);
      if ((bVar17 & 0x20) != 0) {
        uVar31 = 0;
        uVar11 = uVar29;
      }
      uVar10 = local_5c >> (bVar8 & 0x1f);
      uVar29 = uVar10;
      uVar24 = uVar24 >> (bVar8 & 0x1f) | local_5c << 0x20 - (bVar8 & 0x1f);
      if ((uVar28 & 0x20) != 0) {
        uVar29 = 0;
        uVar24 = uVar10;
      }
      local_5c = uVar29 | uVar11;
      uVar24 = uVar24 | uVar31;
    }
LAB_0040f2d7:
    if (local_2c < 0x16) {
      lVar1 = (ulonglong)uVar33 * 0xcccccccd + ((ulonglong)uVar20 * 0xcccccccd >> 0x20);
      uVar29 = (uint)((ulonglong)lVar1 >> 0x20);
      uVar10 = (uint)((ulonglong)uVar20 * 0xcccccccc >> 0x20);
      uVar11 = (uint)CARRY4((uint)((ulonglong)uVar20 * 0xcccccccc),(uint)lVar1);
      uVar28 = uVar10 + uVar29;
      uVar22 = uVar28 + uVar11;
      uVar31 = (uint)((ulonglong)uVar33 * 0xcccccccc);
      if ((((int)((ulonglong)uVar33 * 0xcccccccc >> 0x20) +
            (uint)(CARRY4(uVar10,uVar29) || CARRY4(uVar28,uVar11)) + (uint)CARRY4(uVar31,uVar22)) *
           0x40000000 | uVar31 + uVar22 >> 2) * 5 == uVar20) {
        uVar11 = 0xffffffff;
        do {
          lVar1 = (ulonglong)uVar33 * 0xcccccccd + ((ulonglong)uVar20 * 0xcccccccd >> 0x20);
          uVar10 = (uint)((ulonglong)lVar1 >> 0x20);
          uVar22 = (uint)((ulonglong)uVar20 * 0xcccccccc >> 0x20);
          uVar28 = (uint)CARRY4((uint)((ulonglong)uVar20 * 0xcccccccc),(uint)lVar1);
          uVar31 = uVar22 + uVar10;
          uVar18 = uVar31 + uVar28;
          uVar29 = (uint)((ulonglong)uVar33 * 0xcccccccc);
          uVar28 = (int)((ulonglong)uVar33 * 0xcccccccc >> 0x20) +
                   (uint)(CARRY4(uVar22,uVar10) || CARRY4(uVar31,uVar28)) +
                   (uint)CARRY4(uVar29,uVar18);
          uVar33 = uVar28 >> 2;
          uVar28 = uVar28 * 0x40000000 | uVar29 + uVar18 >> 2;
          uVar11 = uVar11 + 1;
          bVar41 = uVar28 * 5 == uVar20;
          uVar20 = uVar28;
        } while (bVar41);
        bVar41 = local_2c <= uVar11;
        bVar7 = false;
      }
      else if ((param_2 & 1) == 0) {
        uVar11 = ~(uint)bVar7;
        uVar28 = (uVar33 - 1) + (uint)CARRY4(uVar11,uVar20);
        uVar33 = 0xffffffff;
        uVar11 = uVar11 + uVar20;
        do {
          lVar1 = (ulonglong)uVar28 * 0xcccccccd + ((ulonglong)uVar11 * 0xcccccccd >> 0x20);
          uVar18 = (uint)((ulonglong)lVar1 >> 0x20);
          uVar22 = (uint)((ulonglong)uVar11 * 0xcccccccc >> 0x20);
          uVar20 = (uint)CARRY4((uint)((ulonglong)uVar11 * 0xcccccccc),(uint)lVar1);
          uVar31 = uVar22 + uVar18;
          uVar10 = uVar31 + uVar20;
          uVar29 = (uint)((ulonglong)uVar28 * 0xcccccccc);
          uVar20 = (int)((ulonglong)uVar28 * 0xcccccccc >> 0x20) +
                   (uint)(CARRY4(uVar22,uVar18) || CARRY4(uVar31,uVar20)) +
                   (uint)CARRY4(uVar29,uVar10);
          uVar28 = uVar20 >> 2;
          uVar20 = uVar20 * 0x40000000 | uVar29 + uVar10 >> 2;
          uVar33 = uVar33 + 1;
          bVar41 = uVar20 * 5 == uVar11;
          uVar11 = uVar20;
        } while (bVar41);
        bVar7 = local_2c <= uVar33;
        bVar41 = false;
      }
      else {
        uVar28 = 0xffffffff;
        uVar11 = uVar20 | 2;
        do {
          lVar1 = (ulonglong)uVar33 * 0xcccccccd + ((ulonglong)uVar11 * 0xcccccccd >> 0x20);
          uVar10 = (uint)((ulonglong)lVar1 >> 0x20);
          uVar22 = (uint)((ulonglong)uVar11 * 0xcccccccc >> 0x20);
          uVar20 = (uint)CARRY4((uint)((ulonglong)uVar11 * 0xcccccccc),(uint)lVar1);
          uVar31 = uVar22 + uVar10;
          uVar18 = uVar31 + uVar20;
          uVar29 = (uint)((ulonglong)uVar33 * 0xcccccccc);
          uVar20 = (int)((ulonglong)uVar33 * 0xcccccccc >> 0x20) +
                   (uint)(CARRY4(uVar22,uVar10) || CARRY4(uVar31,uVar20)) +
                   (uint)CARRY4(uVar29,uVar18);
          uVar33 = uVar20 >> 2;
          uVar20 = uVar20 * 0x40000000 | uVar29 + uVar18 >> 2;
          uVar28 = uVar28 + 1;
          bVar41 = uVar20 * 5 == uVar11;
          uVar11 = uVar20;
        } while (bVar41);
        bVar41 = local_4c < (local_2c <= uVar28);
        local_4c = local_4c - (local_2c <= uVar28);
        local_48 = local_48 - bVar41;
        bVar41 = false;
        bVar7 = false;
      }
      goto LAB_0040f646;
    }
    bVar41 = false;
  }
  bVar7 = false;
LAB_0040f646:
  uVar3 = CONCAT44(local_58,local_50);
  uVar4 = CONCAT44(local_48,local_4c);
  uVar6 = CONCAT44(local_5c,uVar24);
  if (bVar7 || bVar41 != false) {
    local_44 = 0;
    bVar17 = 0;
    uVar6 = CONCAT44(local_5c,uVar24);
    while( true ) {
      local_5c = (uint)(uVar6 >> 0x20);
      uVar31 = (uint)(uVar4 >> 0x20);
      lVar2 = (ulonglong)uVar31 * 0xcccccccd + ((uVar4 & 0xffffffff) * 0xcccccccd >> 0x20);
      uVar20 = (uint)((ulonglong)lVar2 >> 0x20);
      lVar1 = (uVar4 & 0xffffffff) * 0xcccccccc;
      uVar33 = (uint)((ulonglong)lVar1 >> 0x20);
      uVar11 = (uint)CARRY4((uint)lVar1,(uint)lVar2);
      uVar28 = uVar33 + uVar20;
      uVar4 = (ulonglong)uVar31 * 0xcccccccc +
              (ulonglong)CONCAT14(CARRY4(uVar33,uVar20) || CARRY4(uVar28,uVar11),uVar28 + uVar11) >>
              3;
      uVar10 = (uint)(uVar4 >> 0x20);
      lVar1 = (ulonglong)local_58 * 0xcccccccd + ((ulonglong)local_50 * 0xcccccccd >> 0x20);
      uVar33 = (uint)((ulonglong)lVar1 >> 0x20);
      uVar31 = (uint)((ulonglong)local_50 * 0xcccccccc >> 0x20);
      uVar11 = (uint)CARRY4((uint)((ulonglong)local_50 * 0xcccccccc),(uint)lVar1);
      uVar28 = uVar31 + uVar33;
      uVar29 = uVar28 + uVar11;
      uVar20 = (uint)((ulonglong)local_58 * 0xcccccccc);
      uVar11 = (int)((ulonglong)local_58 * 0xcccccccc >> 0x20) +
               (uint)(CARRY4(uVar31,uVar33) || CARRY4(uVar28,uVar11)) + (uint)CARRY4(uVar20,uVar29);
      uVar28 = uVar11 >> 3;
      uVar11 = uVar11 * 0x20000000 | uVar20 + uVar29 >> 3;
      if (uVar10 <= uVar28 && (uint)(uVar11 < (uint)uVar4) <= uVar28 - uVar10) break;
      lVar2 = (ulonglong)local_5c * 0xcccccccd + ((uVar6 & 0xffffffff) * 0xcccccccd >> 0x20);
      uVar29 = (uint)((ulonglong)lVar2 >> 0x20);
      lVar1 = (uVar6 & 0xffffffff) * 0xcccccccc;
      uVar31 = (uint)((ulonglong)lVar1 >> 0x20);
      uVar20 = (uint)CARRY4((uint)lVar1,(uint)lVar2);
      uVar33 = uVar31 + uVar29;
      uVar3 = (ulonglong)local_5c * 0xcccccccc +
              (ulonglong)CONCAT14(CARRY4(uVar31,uVar29) || CARRY4(uVar33,uVar20),uVar33 + uVar20);
      local_54._0_1_ = (char)uVar6;
      bVar7 = bVar7 && uVar11 * 10 == local_50;
      bVar41 = bVar41 != false && bVar17 == 0;
      local_44 = local_44 + 1;
      local_58 = uVar28;
      local_50 = uVar11;
      bVar17 = ((byte)((uint)uVar3 >> 2) & 0xfe) * -5 + (char)local_54;
      uVar6 = uVar3 >> 3;
    }
    if ((bVar7) && (uVar11 * 10 == local_50)) {
      bVar41 = bVar41 != false;
      bVar8 = bVar17;
      uVar4 = uVar6;
      do {
        local_58 = uVar28;
        local_50 = uVar11;
        uVar20 = (uint)(uVar4 >> 0x20);
        lVar2 = (ulonglong)uVar20 * 0xcccccccd + ((uVar4 & 0xffffffff) * 0xcccccccd >> 0x20);
        uVar31 = (uint)((ulonglong)lVar2 >> 0x20);
        lVar1 = (uVar4 & 0xffffffff) * 0xcccccccc;
        uVar29 = (uint)((ulonglong)lVar1 >> 0x20);
        uVar11 = (uint)CARRY4((uint)lVar1,(uint)lVar2);
        uVar28 = uVar29 + uVar31;
        uVar10 = uVar28 + uVar11;
        lVar1 = (ulonglong)uVar20 * 0xcccccccc;
        uVar20 = (uint)lVar1;
        uVar33 = uVar20 + uVar10;
        uVar11 = (int)((ulonglong)lVar1 >> 0x20) +
                 (uint)(CARRY4(uVar29,uVar31) || CARRY4(uVar28,uVar11)) +
                 (uint)CARRY4(uVar20,uVar10);
        uVar6 = CONCAT44(uVar11 >> 3,uVar11 * 0x20000000 | uVar33 >> 3);
        local_5c._0_1_ = (char)uVar4;
        bVar17 = ((byte)(uVar33 >> 2) & 0xfe) * -5 + (char)local_5c;
        bVar41 = (bool)(bVar41 & bVar8 == 0);
        local_44 = local_44 + 1;
        lVar1 = (ulonglong)local_58 * 0xcccccccd + ((ulonglong)local_50 * 0xcccccccd >> 0x20);
        uVar33 = (uint)((ulonglong)lVar1 >> 0x20);
        uVar31 = (uint)((ulonglong)local_50 * 0xcccccccc >> 0x20);
        uVar11 = (uint)CARRY4((uint)((ulonglong)local_50 * 0xcccccccc),(uint)lVar1);
        uVar28 = uVar31 + uVar33;
        uVar29 = uVar28 + uVar11;
        uVar20 = (uint)((ulonglong)local_58 * 0xcccccccc);
        uVar28 = (int)((ulonglong)local_58 * 0xcccccccc >> 0x20) +
                 (uint)(CARRY4(uVar31,uVar33) || CARRY4(uVar28,uVar11)) +
                 (uint)CARRY4(uVar20,uVar29);
        uVar11 = uVar28 * 0x20000000 | uVar20 + uVar29 >> 3;
        uVar28 = uVar28 >> 3;
        bVar8 = bVar17;
        uVar4 = uVar6;
      } while (uVar11 * 10 == local_50);
    }
    if (((bool)(bVar7 & (param_2 & 1) == 0)) || (bVar8 = 1, uVar6 != CONCAT44(local_58,local_50))) {
      bVar8 = ((byte)uVar6 | ~bVar41 | bVar17 != 5) & 4 < bVar17;
    }
  }
  else {
    uVar11 = local_48 << 0x1e | local_4c >> 2;
    lVar2 = (ulonglong)(local_48 >> 2) * 0x5c28f5c3 + ((ulonglong)uVar11 * 0x5c28f5c3 >> 0x20);
    lVar1 = (ulonglong)uVar11 * 0x28f5c28f;
    uVar4 = (ulonglong)(local_48 >> 2) * 0x28f5c28f +
            (ulonglong)
            ((int)((ulonglong)lVar1 >> 0x20) + (int)((ulonglong)lVar2 >> 0x20) +
            (uint)CARRY4((uint)lVar1,(uint)lVar2)) >> 2;
    uVar11 = local_58 << 0x1e | local_50 >> 2;
    uVar28 = (uint)(uVar4 >> 0x20);
    lVar2 = (ulonglong)(local_58 >> 2) * 0x5c28f5c3 + ((ulonglong)uVar11 * 0x5c28f5c3 >> 0x20);
    lVar1 = (ulonglong)uVar11 * 0x28f5c28f;
    uVar5 = (ulonglong)(local_58 >> 2) * 0x28f5c28f +
            (ulonglong)
            ((int)((ulonglong)lVar1 >> 0x20) + (int)((ulonglong)lVar2 >> 0x20) +
            (uint)CARRY4((uint)lVar1,(uint)lVar2)) >> 2;
    uVar11 = (uint)(uVar5 >> 0x20);
    if (uVar11 < uVar28 || uVar11 - uVar28 < (uint)((uint)uVar5 < (uint)uVar4)) {
      uVar20 = local_5c << 0x1e | uVar24 >> 2;
      uVar28 = (uint)((ulonglong)uVar20 * 0x5c28f5c3 >> 0x20);
      lVar1 = (ulonglong)(local_5c >> 2) * 0x5c28f5c3;
      uVar11 = (uint)lVar1;
      lVar2 = (ulonglong)uVar20 * 0x28f5c28f;
      uVar6 = (ulonglong)(local_5c >> 2) * 0x28f5c28f +
              (ulonglong)
              ((int)((ulonglong)lVar2 >> 0x20) +
               (int)((ulonglong)lVar1 >> 0x20) + (uint)CARRY4(uVar11,uVar28) +
              (uint)CARRY4((uint)lVar2,uVar11 + uVar28)) >> 2;
      bVar41 = 0x31 < (int)uVar6 * -100 + uVar24;
      local_44 = 2;
      uVar3 = uVar5;
    }
    else {
      bVar41 = false;
      local_44 = 0;
      uVar4 = CONCAT44(local_48,local_4c);
    }
    while( true ) {
      local_5c = (uint)(uVar6 >> 0x20);
      local_54 = (int)uVar6;
      local_58 = (uint)(uVar3 >> 0x20);
      uVar31 = (uint)(uVar4 >> 0x20);
      lVar2 = (ulonglong)uVar31 * 0xcccccccd + ((uVar4 & 0xffffffff) * 0xcccccccd >> 0x20);
      uVar20 = (uint)((ulonglong)lVar2 >> 0x20);
      lVar1 = (uVar4 & 0xffffffff) * 0xcccccccc;
      uVar33 = (uint)((ulonglong)lVar1 >> 0x20);
      uVar11 = (uint)CARRY4((uint)lVar1,(uint)lVar2);
      uVar28 = uVar33 + uVar20;
      uVar4 = (ulonglong)uVar31 * 0xcccccccc +
              (ulonglong)CONCAT14(CARRY4(uVar33,uVar20) || CARRY4(uVar28,uVar11),uVar28 + uVar11) >>
              3;
      uVar20 = (uint)(uVar4 >> 0x20);
      lVar2 = (ulonglong)local_58 * 0xcccccccd + ((uVar3 & 0xffffffff) * 0xcccccccd >> 0x20);
      uVar31 = (uint)((ulonglong)lVar2 >> 0x20);
      lVar1 = (uVar3 & 0xffffffff) * 0xcccccccc;
      uVar29 = (uint)((ulonglong)lVar1 >> 0x20);
      uVar11 = (uint)CARRY4((uint)lVar1,(uint)lVar2);
      uVar28 = uVar29 + uVar31;
      uVar10 = uVar28 + uVar11;
      uVar33 = (uint)((ulonglong)local_58 * 0xcccccccc);
      uVar11 = (int)((ulonglong)local_58 * 0xcccccccc >> 0x20) +
               (uint)(CARRY4(uVar29,uVar31) || CARRY4(uVar28,uVar11)) + (uint)CARRY4(uVar33,uVar10);
      uVar28 = uVar11 >> 3;
      uVar11 = uVar11 * 0x20000000 | uVar33 + uVar10 >> 3;
      if (uVar20 <= uVar28 && (uint)(uVar11 < (uint)uVar4) <= uVar28 - uVar20) break;
      lVar2 = (ulonglong)local_5c * 0xcccccccd + ((uVar6 & 0xffffffff) * 0xcccccccd >> 0x20);
      uVar10 = (uint)((ulonglong)lVar2 >> 0x20);
      lVar1 = (uVar6 & 0xffffffff) * 0xcccccccc;
      uVar29 = (uint)((ulonglong)lVar1 >> 0x20);
      uVar20 = (uint)CARRY4((uint)lVar1,(uint)lVar2);
      uVar33 = uVar29 + uVar10;
      uVar22 = uVar33 + uVar20;
      uVar31 = (uint)((ulonglong)local_5c * 0xcccccccc);
      uVar20 = (int)((ulonglong)local_5c * 0xcccccccc >> 0x20) +
               (uint)(CARRY4(uVar29,uVar10) || CARRY4(uVar33,uVar20)) + (uint)CARRY4(uVar31,uVar22);
      uVar33 = uVar20 * 0x20000000 | uVar31 + uVar22 >> 3;
      bVar41 = 4 < local_54 + uVar33 * -10;
      local_44 = local_44 + 1;
      uVar3 = CONCAT44(uVar28,uVar11);
      uVar6 = CONCAT44(uVar20 >> 3,uVar33);
    }
    bVar8 = uVar3 == uVar6 | bVar41;
  }
  *(uint *)(param_1 + 1) = local_44 + local_2c;
  *param_1 = uVar6 + bVar8;
  return;
}

