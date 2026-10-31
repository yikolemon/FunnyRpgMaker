/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18022be0b */

uint FUN_18022be0b(longlong *param_1,uint *param_2,byte param_3)

{
  longlong lVar1;
  longlong lVar2;
  byte *pbVar3;
  longlong lVar4;
  bool bVar5;
  uint uVar6;
  ushort uVar7;
  ushort uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ushort *puVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  ushort uVar24;
  uint uVar25;
  uint uVar26;
  longlong lVar27;
  ushort *puVar28;
  longlong lVar29;
  ushort *puVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  bool bVar35;
  ulonglong local_b8;
  uint local_ac;
  uint local_a4;
  ulonglong local_88;
  ulonglong uVar23;
  
  lVar17 = param_1[3];
  uVar7 = *(ushort *)(lVar17 + 6) << 8 | *(ushort *)(lVar17 + 6) >> 8;
  uVar20 = (uint)(uVar7 >> 1);
  uVar15 = (ulonglong)uVar20;
  if (uVar20 == 0) {
    return 0;
  }
  lVar4 = *param_1;
  puVar14 = (ushort *)((ulonglong)*(uint *)(lVar4 + 0x298) + *(longlong *)(lVar4 + 0x290));
  uVar34 = (uint)param_3 + *param_2;
  uVar16 = (ulonglong)(uVar7 & 0xfffffffe);
  lVar1 = lVar17 + 0xe;
  lVar2 = uVar16 + 2;
  uVar9 = 0;
  uVar22 = uVar20;
  do {
    uVar13 = uVar22 + uVar9;
    uVar21 = uVar13 >> 1;
    uVar23 = (ulonglong)uVar21;
    uVar19 = (ulonglong)(uVar13 & 0xfffffffe);
    uVar24 = *(ushort *)(lVar1 + uVar19) << 8 | *(ushort *)(lVar1 + uVar19) >> 8;
    uVar7 = *(ushort *)(lVar2 + lVar1 + uVar19);
    uVar7 = uVar7 << 8 | uVar7 >> 8;
    local_ac = (uint)uVar24;
    uVar25 = (uint)uVar7;
    uVar11 = (uint)uVar7;
    if (uVar11 <= uVar34) {
      if (uVar34 <= uVar24) {
        lVar27 = lVar1 + uVar19 + lVar2;
        puVar30 = (ushort *)(lVar27 + uVar16 * 2);
        uVar9 = (int)(short)((ushort)*(byte *)(lVar27 + uVar16) << 8) |
                (uint)*(byte *)(lVar27 + 1 + uVar16);
        uVar8 = *puVar30 << 8 | *puVar30 >> 8;
        bVar35 = uVar20 - 1 <= uVar21;
        uVar31 = (uint)uVar24;
        bVar5 = (ushort *)((longlong)puVar30 + (ulonglong)uVar8 + 2) <= puVar14;
        uVar22 = 1;
        if ((uVar8 == 0 || ((uVar31 != 0xffff || uVar11 != 0xffff) || !bVar35)) || bVar5) {
          uVar22 = uVar9;
        }
        uVar32 = (uint)uVar8;
        if ((uVar8 != 0 && ((uVar31 == 0xffff && uVar11 == 0xffff) && bVar35)) && !bVar5) {
          uVar32 = 0;
        }
        if ((*(byte *)(param_1 + 4) & 2) == 0) {
          uVar13 = (uint)uVar24;
          uVar9 = 0;
          if (uVar32 != 0xffff) goto LAB_18022c3e3;
          goto LAB_18022bed4;
        }
        uVar11 = uVar21 + 1;
        uVar26 = (uint)uVar7;
        if (uVar21 == 0) {
          local_b8 = 0;
          local_a4 = 0xffff;
          uVar12 = 0;
          uVar33 = uVar26;
          local_ac = (uint)uVar24;
          uVar6 = uVar31;
          if (uVar32 != 0xffff) goto LAB_18022c378;
          goto LAB_18022c1e1;
        }
        uVar25 = uVar21;
        if (uVar32 == 0xffff) {
          uVar25 = uVar11;
        }
        local_b8 = (ulonglong)uVar25;
        local_88 = (ulonglong)(uVar21 - 1);
        uVar7 = *(ushort *)(lVar1 + local_88 * 2);
        uVar7 = uVar7 << 8 | uVar7 >> 8;
        local_ac = uVar31;
        local_a4 = uVar32;
        uVar25 = uVar26;
        uVar12 = uVar21;
        if (uVar7 < uVar34) goto LAB_18022c1b6;
        uVar18 = local_88 * 2;
        uVar32 = uVar21 * 2 - 4;
        uVar22 = (uint)uVar7;
        uVar25 = uVar21;
        goto LAB_18022c0ea;
      }
      uVar9 = uVar21 + 1;
      uVar21 = uVar22;
    }
    uVar22 = uVar21;
    local_ac = (uint)uVar24;
  } while (uVar9 < uVar22);
LAB_18022bed1:
  uVar9 = 0;
  goto LAB_18022bed4;
  while( true ) {
    local_88 = (ulonglong)(uVar25 - 2);
    uVar18 = (ulonglong)uVar32;
    uVar22 = (uint)(ushort)(*(ushort *)(lVar1 + uVar18) << 8 | *(ushort *)(lVar1 + uVar18) >> 8);
    uVar12 = uVar12 - 1;
    uVar32 = uVar32 - 2;
    uVar25 = uVar25 - 1;
    if (uVar22 < uVar34) break;
LAB_18022c0ea:
    local_ac = uVar22;
    puVar28 = (ushort *)(uVar18 + lVar1 + lVar2);
    pbVar3 = (byte *)((longlong)puVar28 + uVar16);
    puVar30 = (ushort *)(pbVar3 + uVar16);
    uVar7 = *(ushort *)(pbVar3 + uVar16) << 8 | *(ushort *)(pbVar3 + uVar16) >> 8;
    if (uVar7 != 0xffff) {
      local_b8 = local_88;
    }
    if ((int)local_88 == 0) {
      uVar24 = *puVar28 << 8 | *puVar28 >> 8;
      uVar22 = (int)(short)((ushort)*pbVar3 << 8) | (uint)pbVar3[1];
      uVar12 = 0;
      goto LAB_18022c1b1;
    }
  }
  uVar24 = *puVar28 << 8 | *puVar28 >> 8;
  uVar22 = (int)(short)((ushort)*pbVar3 << 8) | (uint)pbVar3[1];
LAB_18022c1b1:
  local_a4 = (uint)uVar7;
  uVar25 = (uint)uVar24;
LAB_18022c1b6:
  uVar32 = local_a4;
  if ((uint)local_b8 == uVar11) {
    uVar33 = uVar25;
    uVar6 = local_ac;
    if (uVar12 != uVar21) {
      local_a4 = (uint)uVar8;
      uVar33 = uVar26;
      uVar6 = uVar31;
      uVar22 = uVar9;
    }
LAB_18022c1e1:
    local_ac = uVar6;
    uVar9 = 0;
    if (uVar11 < uVar20) {
      lVar27 = lVar1 + uVar23 * 2 + 2;
      uVar7 = *(ushort *)(lVar2 + lVar27);
      uVar7 = uVar7 << 8 | uVar7 >> 8;
      if (uVar34 < uVar7) {
        puVar30 = (ushort *)(lVar27 + lVar2);
        local_b8 = (ulonglong)uVar21;
        uVar25 = uVar33;
      }
      else {
        lVar27 = uVar23 + 1;
        uVar18 = (ulonglong)(uVar13 >> 1);
        uVar23 = (ulonglong)uVar21;
        lVar17 = lVar17 + uVar19;
        uVar22 = (uint)uVar7;
        do {
          uVar25 = uVar22;
          lVar29 = lVar17;
          uVar7 = *(ushort *)(lVar29 + 0x12 + uVar15 * 6);
          uVar7 = uVar7 << 8 | uVar7 >> 8;
          local_a4 = (uint)uVar7;
          local_b8 = (ulonglong)uVar11;
          if (uVar7 == 0xffff) {
            local_b8 = uVar23;
          }
          if (uVar15 - 2 == uVar18) {
            uVar7 = *(ushort *)(lVar29 + 0x10) << 8 | *(ushort *)(lVar29 + 0x10) >> 8;
            uVar22 = (int)(short)((ushort)*(byte *)(lVar29 + 0x12 + uVar15 * 4) << 8) |
                     (uint)*(byte *)(lVar29 + 0x13 + uVar15 * 4);
            lVar29 = lVar29 + uVar15 * 6;
            uVar11 = uVar20;
            goto LAB_18022c353;
          }
          lVar27 = lVar27 + 1;
          uVar7 = *(ushort *)(lVar29 + 0x14 + uVar16);
          uVar22 = (uint)(ushort)(uVar7 << 8 | uVar7 >> 8);
          uVar18 = uVar18 + 1;
          uVar11 = (uint)lVar27;
          uVar23 = local_b8;
          lVar17 = lVar29 + 2;
        } while (uVar22 <= uVar34);
        uVar7 = *(ushort *)(lVar29 + 0x10) << 8 | *(ushort *)(lVar29 + 0x10) >> 8;
        uVar22 = (int)(short)((ushort)*(byte *)(lVar29 + 0x12 + uVar15 * 4) << 8) |
                 (uint)*(byte *)(lVar29 + 0x13 + uVar15 * 4);
        lVar29 = lVar29 + 2 + uVar16;
        uVar11 = (int)uVar18 + 1;
LAB_18022c353:
        local_ac = (uint)uVar7;
        puVar30 = (ushort *)(lVar29 + 0x12);
      }
      uVar12 = uVar11 - 1;
      uVar23 = (ulonglong)uVar12;
      uVar32 = local_a4;
      if ((uint)local_b8 != uVar21) goto LAB_18022c378;
    }
  }
  else {
LAB_18022c378:
    uVar23 = local_b8;
    uVar13 = local_ac;
    if ((uint)local_b8 != uVar12) {
      uVar15 = (ulonglong)((uint)local_b8 * 2);
      lVar17 = lVar1 + uVar15;
      uVar7 = *(ushort *)(lVar1 + uVar15);
      uVar24 = *(ushort *)(uVar16 + 2 + lVar17);
      lVar17 = lVar17 + uVar16;
      uVar25 = (uint)(ushort)(uVar24 << 8 | uVar24 >> 8);
      uVar22 = (int)(short)((ushort)*(byte *)(lVar2 + lVar17) << 8) |
               (uint)*(byte *)(uVar16 + 3 + lVar17);
      puVar30 = (ushort *)(lVar17 + lVar2 + uVar16);
      uVar24 = *(ushort *)(uVar16 + lVar17 + lVar2);
      uVar32 = (uint)(ushort)(uVar24 << 8 | uVar24 >> 8);
      uVar13 = (uint)(ushort)(uVar7 << 8 | uVar7 >> 8);
    }
LAB_18022c3e3:
    local_ac = uVar13;
    if (uVar32 == 0) {
      uVar13 = uVar22 + uVar34;
      uVar9 = uVar13 & 0xffff;
      if (param_3 == 0) {
        return uVar9;
      }
      if (*(uint *)(lVar4 + 0x10) <= uVar9) {
        if (((int)uVar13 < 0) && (-1 < (int)(local_ac + uVar22))) {
          uVar34 = -uVar22;
          uVar9 = 0;
        }
        else {
          uVar9 = 0x10000 - uVar22;
          if ((int)(local_ac + uVar22) < 0x10000) {
            uVar9 = uVar34;
          }
          if (0xffff < (int)uVar13) {
            uVar9 = uVar34;
          }
          uVar34 = uVar9;
          uVar9 = 0;
        }
      }
      goto LAB_18022bedf;
    }
    puVar30 = (ushort *)((longlong)puVar30 + (ulonglong)(uVar32 + (uVar34 - uVar25) * 2));
    if ((param_3 != 0) && (uVar9 = 0, puVar14 < puVar30)) goto LAB_18022bedf;
    uVar7 = *puVar30;
    uVar7 = uVar7 << 8 | uVar7 >> 8;
    if (uVar7 == 0) goto LAB_18022bed1;
    uVar22 = uVar7 + uVar22 & 0xffff;
    uVar9 = 0;
    if (uVar22 < *(uint *)(lVar4 + 0x10)) {
      uVar9 = uVar22;
    }
  }
LAB_18022bed4:
  if (param_3 == 0) {
    return uVar9;
  }
LAB_18022bedf:
  if ((local_ac < uVar34) &&
     (uVar22 = (int)uVar23 + 1, uVar23 = (ulonglong)uVar22, uVar22 == uVar20)) {
    return 0;
  }
  iVar10 = FUN_18022c4a4(param_1,uVar23);
  if (iVar10 == 0) {
    *(uint *)(param_1 + 5) = uVar34;
    if (uVar9 == 0) {
      FUN_18022c5c4(param_1);
      uVar9 = *(uint *)((longlong)param_1 + 0x2c);
      if (uVar9 == 0) {
        return 0;
      }
      uVar34 = *(uint *)(param_1 + 5);
    }
    else {
      *(uint *)((longlong)param_1 + 0x2c) = uVar9;
    }
  }
  else if (uVar9 == 0) {
    return 0;
  }
  *param_2 = uVar34;
  return uVar9;
}

