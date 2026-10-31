/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10007e54 */

undefined8 FUN_10007e54(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  bool bVar8;
  uint uVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint local_34;
  uint local_30;
  uint local_28;
  byte local_18;
  
  uVar9 = param_1 | 0x800000;
  if (param_2 == 0) {
    uVar9 = param_1;
  }
  iVar14 = -0x97;
  if (param_2 != 0) {
    iVar14 = param_2 - 0x98;
  }
  uVar13 = uVar9 * 4;
  uVar15 = uVar9 * 4 + 2;
  bVar10 = param_2 < 2 || param_1 != 0;
  uVar11 = ~(uint)bVar10 + uVar9 * 4;
  local_18 = (byte)uVar9;
  if (iVar14 < 0) {
    uVar6 = (uint)(iVar14 * -0xb2efb) >> 0x14;
    local_28 = iVar14 + uVar6;
    uVar1 = *(uint *)(&DAT_1028b858 + local_28 * -8);
    uVar2 = *(uint *)(&DAT_1028b85c + local_28 * -8);
    cVar4 = (char)uVar6;
    lVar3 = (ulonglong)uVar2 * (ulonglong)uVar13 + ((ulonglong)uVar1 * (ulonglong)uVar13 >> 0x20);
    bVar7 = (cVar4 - (char)(local_28 * -0x12934f >> 0x13)) + 0x1c;
    uVar5 = (uint)lVar3 >> (bVar7 & 0x1f) | (int)((ulonglong)lVar3 >> 0x20) << 0x20 - (bVar7 & 0x1f)
    ;
    lVar3 = (ulonglong)uVar2 * (ulonglong)uVar15 + ((ulonglong)uVar1 * (ulonglong)uVar15 >> 0x20);
    uVar12 = (uint)lVar3 >> (bVar7 & 0x1f) |
             (int)((ulonglong)lVar3 >> 0x20) << 0x20 - (bVar7 & 0x1f);
    lVar3 = (ulonglong)uVar2 * (ulonglong)uVar11 + ((ulonglong)uVar1 * (ulonglong)uVar11 >> 0x20);
    local_30 = (uint)lVar3 >> (bVar7 & 0x1f) |
               (int)((ulonglong)lVar3 >> 0x20) << 0x20 - (bVar7 & 0x1f);
    if (uVar6 != 0) {
      if (local_30 / 10 < (uVar12 - 1) / 10) {
        local_34 = 0;
      }
      else {
        iVar16 = 1 - local_28;
        lVar3 = (ulonglong)uVar13 * (ulonglong)*(uint *)(&DAT_1028b85c + iVar16 * 8) +
                ((ulonglong)uVar13 * (ulonglong)*(uint *)(&DAT_1028b858 + iVar16 * 8) >> 0x20);
        bVar7 = (char)((uint)~(iVar16 * 0x12934f) >> 0x13) + cVar4 + 0x1cU & 0x1f;
        local_34 = (uint)lVar3 >> bVar7 | (int)((ulonglong)lVar3 >> 0x20) << 0x20 - bVar7;
        local_34 = local_34 + (local_34 / 5 & 0xfffffffe) * -5;
      }
      if (uVar6 == 1) goto LAB_100081f3;
      if ((uint)(iVar14 * -0xb2efb) < 0x1f00000) {
        bVar8 = (uVar13 & ~(-1 << (cVar4 - 1U & 0x1f))) == 0;
      }
      else {
        bVar8 = false;
      }
      bVar10 = false;
      goto LAB_1000823b;
    }
    local_34 = 0;
LAB_100081f3:
    bVar10 = (uVar9 & 1) == 0 && bVar10;
    uVar12 = uVar12 - (uVar9 & 1);
    bVar8 = true;
  }
  else {
    local_28 = (uint)(iVar14 * 0x13441) >> 0x12;
    cVar4 = (char)local_28 - (char)iVar14;
    uVar1 = *(uint *)(&DAT_1028b764 + local_28 * 8);
    uVar2 = *(uint *)(&DAT_1028b760 + local_28 * 8);
    lVar3 = (ulonglong)uVar1 * (ulonglong)uVar13 + ((ulonglong)uVar2 * (ulonglong)uVar13 >> 0x20);
    bVar7 = (char)(local_28 * 0x12934f >> 0x13) + cVar4 + 0x1b;
    uVar5 = (uint)lVar3 >> (bVar7 & 0x1f) | (int)((ulonglong)lVar3 >> 0x20) << 0x20 - (bVar7 & 0x1f)
    ;
    lVar3 = (ulonglong)uVar1 * (ulonglong)uVar15 + ((ulonglong)uVar2 * (ulonglong)uVar15 >> 0x20);
    uVar12 = (uint)lVar3 >> (bVar7 & 0x1f) |
             (int)((ulonglong)lVar3 >> 0x20) << 0x20 - (bVar7 & 0x1f);
    lVar3 = (ulonglong)uVar1 * (ulonglong)uVar11 + ((ulonglong)uVar2 * (ulonglong)uVar11 >> 0x20);
    local_30 = (uint)lVar3 >> (bVar7 & 0x1f) |
               (int)((ulonglong)lVar3 >> 0x20) << 0x20 - (bVar7 & 0x1f);
    if (local_28 == 0) {
      local_34 = 0;
LAB_100080a7:
      if (0x33333333 < uVar9 * 0x33333334) {
        if ((uVar9 & 1) == 0) {
          uVar9 = 0;
          if (uVar11 * -0x33333333 < 0x33333334) {
            uVar9 = 0;
            do {
              uVar11 = uVar11 / 5;
              uVar9 = uVar9 + 1;
            } while (uVar11 * -0x33333333 < 0x33333334);
          }
          bVar10 = local_28 <= uVar9;
          bVar8 = false;
        }
        else {
          uVar9 = 0;
          if (uVar15 * -0x33333333 < 0x33333334) {
            uVar9 = 0;
            do {
              uVar15 = uVar15 / 5;
              uVar9 = uVar9 + 1;
            } while (uVar15 * -0x33333333 < 0x33333334);
          }
          uVar12 = (uVar12 - 1) + (uint)(uVar9 < local_28);
          bVar8 = false;
          bVar10 = false;
        }
        goto LAB_1000823b;
      }
      uVar9 = 0;
      do {
        uVar13 = uVar13 / 5;
        uVar9 = uVar9 + 1;
      } while (uVar13 * -0x33333333 < 0x33333334);
      bVar8 = local_28 <= uVar9;
    }
    else {
      if (local_30 / 10 < (uVar12 - 1) / 10) {
        local_34 = 0;
      }
      else {
        lVar3 = (ulonglong)uVar13 * (ulonglong)*(uint *)(&DAT_1028b75c + local_28 * 8) +
                ((ulonglong)uVar13 * (ulonglong)*(uint *)(&DAT_1028b758 + local_28 * 8) >> 0x20);
        bVar7 = cVar4 + (char)((local_28 - 1) * 0x12934f >> 0x13) + 0x1aU & 0x1f;
        local_34 = (uint)lVar3 >> bVar7 | (int)((ulonglong)lVar3 >> 0x20) << 0x20 - bVar7;
        local_34 = local_34 + (local_34 / 5 & 0xfffffffe) * -5;
      }
      if ((uint)(iVar14 * 0x13441) < 0x280000) goto LAB_100080a7;
      bVar8 = false;
    }
    bVar10 = false;
LAB_1000823b:
    if ((bVar10 == false) && (bVar8 == false)) {
      uVar12 = uVar12 / 10;
      iVar14 = 0;
      if (local_30 / 10 < uVar12) {
        iVar14 = 0;
        uVar9 = local_30 / 10;
        do {
          uVar11 = uVar5;
          local_30 = uVar9;
          iVar14 = iVar14 + 1;
          uVar12 = uVar12 / 10;
          uVar9 = local_30 / 10;
          uVar5 = uVar11 / 10;
        } while (local_30 / 10 < uVar12);
        bVar7 = (char)uVar11 + ((byte)(uVar11 / 5) & 0xfe) * -5;
        uVar9 = uVar11 / 10;
      }
      else {
        bVar7 = (byte)local_34;
        uVar9 = uVar5;
      }
      bVar10 = 4 < bVar7 || uVar9 == local_30;
      goto LAB_10008402;
    }
  }
  uVar12 = uVar12 / 10;
  if (local_30 / 10 < uVar12) {
    iVar14 = 0;
    uVar9 = local_30 / 10;
    uVar11 = uVar5;
    uVar13 = local_30;
    do {
      local_30 = uVar9;
      bVar10 = (bool)(bVar10 & local_30 * 10 == uVar13);
      bVar8 = (bool)(bVar8 & (char)local_34 == '\0');
      uVar5 = uVar11 / 10;
      local_34 = uVar11 % 10;
      iVar14 = iVar14 + 1;
      uVar12 = uVar12 / 10;
      uVar9 = local_30 / 10;
      uVar11 = uVar5;
      uVar13 = local_30;
    } while (local_30 / 10 < uVar12);
  }
  else {
    iVar14 = 0;
  }
  if ((bVar10 == false) || (local_30 != (local_30 / 5 & 0xfffffffe) * 5)) {
    bVar7 = (byte)local_34;
    uVar9 = uVar5;
  }
  else {
    do {
      bVar8 = (bool)(bVar8 & (char)local_34 == '\0');
      uVar9 = uVar5 / 10;
      local_34 = uVar5 % 10;
      bVar7 = (byte)local_34;
      local_30 = local_30 / 10;
      iVar14 = iVar14 + 1;
      uVar5 = uVar9;
    } while ((local_30 * -0x33333333 >> 1 | (uint)((local_30 * -0x33333333 & 1) != 0) << 0x1f) <
             0x1999999a);
  }
  bVar10 = (bool)(((byte)uVar9 | ~bVar8 | bVar7 != 5) & 4 < bVar7 |
                 (~bVar10 | local_18) & uVar9 == local_30);
LAB_10008402:
  return CONCAT44(local_28 + iVar14,bVar10 + uVar9);
}

