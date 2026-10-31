/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14007944b */

uint FUN_14007944b(longlong *param_1,uint *param_2,byte param_3)

{
  longlong lVar1;
  longlong lVar2;
  byte *pbVar3;
  longlong lVar4;
  uint uVar5;
  ushort uVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ushort *puVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint uVar19;
  uint uVar21;
  ushort uVar22;
  uint uVar23;
  uint uVar24;
  longlong lVar25;
  ushort *puVar26;
  longlong lVar27;
  ushort *puVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  bool bVar33;
  bool bVar34;
  ulonglong local_b8;
  uint local_ac;
  uint local_a4;
  ulonglong local_88;
  ulonglong uVar20;
  
  lVar16 = param_1[3];
  uVar6 = *(ushort *)(lVar16 + 6) << 8 | *(ushort *)(lVar16 + 6) >> 8;
  uVar19 = (uint)(uVar6 >> 1);
  uVar20 = (ulonglong)uVar19;
  if (uVar19 == 0) {
    return 0;
  }
  lVar4 = *param_1;
  puVar13 = (ushort *)((ulonglong)*(uint *)(lVar4 + 0x298) + *(longlong *)(lVar4 + 0x290));
  uVar32 = (uint)param_3 + *param_2;
  uVar15 = (ulonglong)(uVar6 & 0xfffffffe);
  lVar1 = lVar16 + 0xe;
  lVar2 = uVar15 + 2;
  uVar8 = 0;
  uVar11 = uVar19;
  do {
    uVar12 = uVar11 + uVar8;
    uVar21 = uVar12 >> 1;
    uVar18 = (ulonglong)(uVar12 & 0xfffffffe);
    uVar22 = *(ushort *)(lVar1 + uVar18) << 8 | *(ushort *)(lVar1 + uVar18) >> 8;
    uVar6 = *(ushort *)(lVar2 + lVar1 + uVar18);
    uVar6 = uVar6 << 8 | uVar6 >> 8;
    local_ac = (uint)uVar22;
    uVar23 = (uint)uVar6;
    uVar9 = (uint)uVar6;
    uVar29 = uVar21;
    if (uVar9 <= uVar32) {
      if (uVar32 <= uVar22) {
        lVar25 = lVar1 + uVar18 + lVar2;
        puVar28 = (ushort *)(lVar25 + uVar15 * 2);
        uVar8 = (int)(short)((ushort)*(byte *)(lVar25 + uVar15) << 8) |
                (uint)*(byte *)(lVar25 + 1 + uVar15);
        uVar7 = *puVar28 << 8 | *puVar28 >> 8;
        bVar33 = uVar19 - 1 <= uVar21;
        uVar29 = (uint)uVar22;
        bVar34 = (ushort *)((longlong)puVar28 + (ulonglong)uVar7 + 2) <= puVar13;
        uVar11 = 1;
        if ((uVar7 == 0 || ((uVar29 != 0xffff || uVar9 != 0xffff) || !bVar33)) || bVar34) {
          uVar11 = uVar8;
        }
        uVar30 = (uint)uVar7;
        if ((uVar7 != 0 && ((uVar29 == 0xffff && uVar9 == 0xffff) && bVar33)) && !bVar34) {
          uVar30 = 0;
        }
        if ((*(byte *)(param_1 + 4) & 2) == 0) {
          uVar12 = (uint)uVar22;
          uVar8 = 0;
          if (uVar30 != 0xffff) goto LAB_140079a23;
          goto LAB_140079514;
        }
        uVar9 = uVar21 + 1;
        uVar24 = (uint)uVar6;
        if (uVar21 == 0) {
          local_b8._0_4_ = 0;
          local_a4 = 0xffff;
          uVar10 = 0;
          uVar31 = uVar24;
          uVar23 = (uint)uVar6;
          local_ac = (uint)uVar22;
          uVar5 = uVar29;
          if (uVar30 != 0xffff) goto LAB_1400799b8;
          goto LAB_140079821;
        }
        uVar31 = uVar21;
        if (uVar30 == 0xffff) {
          uVar31 = uVar9;
        }
        local_b8 = (ulonglong)uVar31;
        local_88 = (ulonglong)(uVar21 - 1);
        uVar6 = *(ushort *)(lVar1 + local_88 * 2);
        uVar6 = uVar6 << 8 | uVar6 >> 8;
        uVar23 = uVar24;
        local_ac = uVar29;
        local_a4 = uVar30;
        uVar10 = uVar21;
        if (uVar6 < uVar32) goto LAB_1400797f6;
        uVar17 = local_88 * 2;
        uVar30 = uVar21 * 2 - 4;
        uVar11 = (uint)uVar6;
        uVar23 = uVar21;
        goto LAB_14007972a;
      }
      uVar8 = uVar21 + 1;
      uVar29 = uVar11;
    }
    uVar11 = uVar29;
    local_ac = (uint)uVar22;
  } while (uVar8 < uVar11);
LAB_140079511:
  uVar8 = 0;
  goto LAB_140079514;
  while( true ) {
    local_88 = (ulonglong)(uVar23 - 2);
    uVar17 = (ulonglong)uVar30;
    uVar11 = (uint)(ushort)(*(ushort *)(lVar1 + uVar17) << 8 | *(ushort *)(lVar1 + uVar17) >> 8);
    uVar10 = uVar10 - 1;
    uVar30 = uVar30 - 2;
    uVar23 = uVar23 - 1;
    if (uVar11 < uVar32) break;
LAB_14007972a:
    local_ac = uVar11;
    puVar26 = (ushort *)(uVar17 + lVar1 + lVar2);
    pbVar3 = (byte *)((longlong)puVar26 + uVar15);
    puVar28 = (ushort *)(pbVar3 + uVar15);
    uVar6 = *(ushort *)(pbVar3 + uVar15) << 8 | *(ushort *)(pbVar3 + uVar15) >> 8;
    if (uVar6 != 0xffff) {
      local_b8 = local_88;
    }
    if ((int)local_88 == 0) {
      uVar22 = *puVar26 << 8 | *puVar26 >> 8;
      uVar11 = (int)(short)((ushort)*pbVar3 << 8) | (uint)pbVar3[1];
      uVar10 = 0;
      goto LAB_1400797f1;
    }
  }
  uVar22 = *puVar26 << 8 | *puVar26 >> 8;
  uVar11 = (int)(short)((ushort)*pbVar3 << 8) | (uint)pbVar3[1];
LAB_1400797f1:
  uVar23 = (uint)uVar22;
  local_a4 = (uint)uVar6;
  uVar31 = (uint)local_b8;
LAB_1400797f6:
  local_b8._0_4_ = uVar31;
  uVar30 = local_a4;
  if ((uint)local_b8 == uVar9) {
    uVar31 = uVar23;
    uVar5 = local_ac;
    if (uVar10 != uVar21) {
      local_a4 = (uint)uVar7;
      uVar31 = uVar24;
      uVar5 = uVar29;
      uVar11 = uVar8;
    }
LAB_140079821:
    local_ac = uVar5;
    uVar8 = 0;
    if (uVar9 < uVar19) {
      lVar25 = lVar1 + (ulonglong)uVar21 * 2 + 2;
      uVar6 = *(ushort *)(lVar2 + lVar25);
      uVar6 = uVar6 << 8 | uVar6 >> 8;
      if (uVar32 < uVar6) {
        puVar28 = (ushort *)(lVar25 + lVar2);
        local_b8._0_4_ = uVar21;
      }
      else {
        lVar25 = (ulonglong)uVar21 + 1;
        uVar17 = (ulonglong)(uVar12 >> 1);
        lVar16 = lVar16 + uVar18;
        uVar11 = (uint)uVar6;
        uVar12 = uVar21;
        do {
          uVar31 = uVar11;
          lVar27 = lVar16;
          uVar6 = *(ushort *)(lVar27 + 0x12 + uVar20 * 6);
          uVar6 = uVar6 << 8 | uVar6 >> 8;
          local_a4 = (uint)uVar6;
          local_b8._0_4_ = uVar9;
          if (uVar6 == 0xffff) {
            local_b8._0_4_ = uVar12;
          }
          if (uVar20 - 2 == uVar17) {
            uVar6 = *(ushort *)(lVar27 + 0x10) << 8 | *(ushort *)(lVar27 + 0x10) >> 8;
            uVar11 = (int)(short)((ushort)*(byte *)(lVar27 + 0x12 + uVar20 * 4) << 8) |
                     (uint)*(byte *)(lVar27 + 0x13 + uVar20 * 4);
            lVar27 = lVar27 + uVar20 * 6;
            uVar9 = uVar19;
            goto LAB_140079993;
          }
          lVar25 = lVar25 + 1;
          uVar6 = *(ushort *)(lVar27 + 0x14 + uVar15);
          uVar11 = (uint)(ushort)(uVar6 << 8 | uVar6 >> 8);
          uVar17 = uVar17 + 1;
          uVar9 = (uint)lVar25;
          lVar16 = lVar27 + 2;
          uVar12 = (uint)local_b8;
        } while (uVar11 <= uVar32);
        uVar6 = *(ushort *)(lVar27 + 0x10) << 8 | *(ushort *)(lVar27 + 0x10) >> 8;
        uVar11 = (int)(short)((ushort)*(byte *)(lVar27 + 0x12 + uVar20 * 4) << 8) |
                 (uint)*(byte *)(lVar27 + 0x13 + uVar20 * 4);
        lVar27 = lVar27 + 2 + uVar15;
        uVar9 = (int)uVar17 + 1;
LAB_140079993:
        local_ac = (uint)uVar6;
        puVar28 = (ushort *)(lVar27 + 0x12);
      }
      uVar10 = uVar9 - 1;
      bVar34 = (uint)local_b8 != uVar21;
      uVar23 = uVar31;
      uVar30 = local_a4;
      uVar21 = uVar10;
      if (bVar34) goto LAB_1400799b8;
    }
  }
  else {
LAB_1400799b8:
    uVar12 = local_ac;
    uVar21 = (uint)local_b8;
    if ((uint)local_b8 != uVar10) {
      lVar16 = lVar1 + (ulonglong)((uint)local_b8 * 2);
      uVar6 = *(ushort *)(lVar1 + (ulonglong)((uint)local_b8 * 2));
      uVar22 = *(ushort *)(uVar15 + 2 + lVar16);
      lVar16 = lVar16 + uVar15;
      uVar23 = (uint)(ushort)(uVar22 << 8 | uVar22 >> 8);
      uVar11 = (int)(short)((ushort)*(byte *)(lVar2 + lVar16) << 8) |
               (uint)*(byte *)(uVar15 + 3 + lVar16);
      puVar28 = (ushort *)(lVar16 + lVar2 + uVar15);
      uVar22 = *(ushort *)(uVar15 + lVar16 + lVar2);
      uVar30 = (uint)(ushort)(uVar22 << 8 | uVar22 >> 8);
      uVar12 = (uint)(ushort)(uVar6 << 8 | uVar6 >> 8);
    }
LAB_140079a23:
    local_ac = uVar12;
    if (uVar30 == 0) {
      uVar12 = uVar11 + uVar32;
      uVar8 = uVar12 & 0xffff;
      if (param_3 == 0) {
        return uVar8;
      }
      if (*(uint *)(lVar4 + 0x10) <= uVar8) {
        if (((int)uVar12 < 0) && (-1 < (int)(local_ac + uVar11))) {
          uVar32 = -uVar11;
          uVar8 = 0;
        }
        else {
          uVar8 = 0x10000 - uVar11;
          if ((int)(local_ac + uVar11) < 0x10000) {
            uVar8 = uVar32;
          }
          if (0xffff < (int)uVar12) {
            uVar8 = uVar32;
          }
          uVar32 = uVar8;
          uVar8 = 0;
        }
      }
      goto LAB_14007951f;
    }
    puVar28 = (ushort *)((longlong)puVar28 + (ulonglong)(uVar30 + (uVar32 - uVar23) * 2));
    if ((param_3 != 0) && (uVar8 = 0, puVar13 < puVar28)) goto LAB_14007951f;
    uVar6 = *puVar28;
    uVar6 = uVar6 << 8 | uVar6 >> 8;
    if (uVar6 == 0) goto LAB_140079511;
    uVar11 = uVar6 + uVar11 & 0xffff;
    uVar8 = 0;
    if (uVar11 < *(uint *)(lVar4 + 0x10)) {
      uVar8 = uVar11;
    }
  }
LAB_140079514:
  if (param_3 == 0) {
    return uVar8;
  }
LAB_14007951f:
  if ((local_ac < uVar32) && (uVar21 = uVar21 + 1, uVar21 == uVar19)) {
    return 0;
  }
  uVar14 = FUN_140079ae4(param_1,uVar21);
  if ((int)uVar14 == 0) {
    *(uint *)(param_1 + 5) = uVar32;
    if (uVar8 == 0) {
      FUN_140079c04(param_1);
      uVar8 = *(uint *)((longlong)param_1 + 0x2c);
      if (uVar8 == 0) {
        return 0;
      }
      uVar32 = *(uint *)(param_1 + 5);
    }
    else {
      *(uint *)((longlong)param_1 + 0x2c) = uVar8;
    }
  }
  else if (uVar8 == 0) {
    return 0;
  }
  *param_2 = uVar32;
  return uVar8;
}

