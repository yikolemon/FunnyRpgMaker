/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18023733a */

undefined8
FUN_18023733a(int param_1,longlong param_2,uint param_3,longlong *param_4,uint *param_5,
             undefined *param_6)

{
  ushort *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined8 uVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  ushort uVar14;
  ulonglong uVar15;
  uint uVar16;
  longlong lVar17;
  int iVar18;
  undefined1 uVar19;
  uint uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  uint uVar23;
  undefined1 auStack_e8 [36];
  undefined4 local_c4;
  undefined4 local_c0;
  uint local_bc;
  ulonglong local_b8;
  longlong *local_b0;
  undefined *local_a8;
  undefined *local_a0;
  uint local_94;
  uint local_90;
  uint local_8c;
  ushort auStack_88 [16];
  ushort local_68 [16];
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_e8;
  local_68[0] = 0;
  local_68[1] = 0;
  local_68[2] = 0;
  local_68[3] = 0;
  local_68[4] = 0;
  local_68[5] = 0;
  local_68[6] = 0;
  local_68[7] = 0;
  local_68[8] = 0;
  local_68[9] = 0;
  local_68[10] = 0;
  local_68[0xb] = 0;
  local_68[0xc] = 0;
  local_68[0xd] = 0;
  local_68[0xe] = 0;
  local_68[0xf] = 0;
  if (param_3 != 0) {
    uVar12 = 0;
    do {
      local_68[*(ushort *)(param_2 + uVar12 * 2)] = local_68[*(ushort *)(param_2 + uVar12 * 2)] + 1;
      uVar12 = uVar12 + 1;
    } while (param_3 != uVar12);
  }
  uVar12 = 0xf;
  do {
    uVar10 = (uint)uVar12;
    if (local_68[uVar12] != 0) {
      uVar23 = *param_5;
      if (uVar10 <= *param_5) {
        uVar23 = uVar10;
      }
      iVar18 = 1;
      uVar22 = 1;
      if (uVar10 < 2) goto LAB_18023743d;
      uVar21 = 1;
      goto LAB_180237426;
    }
    uVar12 = (ulonglong)(uVar10 - 1);
  } while (uVar10 - 1 != 0);
  puVar2 = (undefined4 *)*param_4;
  *param_4 = (longlong)(puVar2 + 1);
  *puVar2 = 0x140;
  puVar2 = (undefined4 *)*param_4;
  *param_4 = (longlong)(puVar2 + 1);
  *puVar2 = 0x140;
  uVar23 = 1;
LAB_1802373d6:
  *param_5 = uVar23;
  uVar4 = 0;
LAB_1802373db:
  if (DAT_180402640 != (local_48 ^ (ulonglong)auStack_e8)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_48 ^ (ulonglong)auStack_e8);
  }
  return uVar4;
  while (uVar21 = uVar21 + 1, uVar22 = uVar12, uVar12 != uVar21) {
LAB_180237426:
    uVar22 = uVar21;
    if (local_68[uVar21] != 0) break;
  }
LAB_18023743d:
  uVar12 = (ulonglong)uVar23;
  if (uVar23 <= (uint)uVar22) {
    uVar12 = uVar22 & 0xffffffff;
  }
  lVar17 = 1;
  do {
    iVar18 = iVar18 * 2 - (uint)local_68[lVar17];
    uVar4 = 0xffffffff;
    if (iVar18 < 0) goto LAB_1802373db;
    lVar17 = lVar17 + 1;
  } while (lVar17 != 0x10);
  local_b0 = param_4;
  if ((iVar18 != 0) && (uVar10 != 1 || param_1 == 0)) goto LAB_1802373db;
  auStack_88[1] = 0;
  lVar17 = 0;
  uVar14 = 0;
  do {
    uVar14 = uVar14 + local_68[lVar17 + 1];
    auStack_88[lVar17 + 2] = uVar14;
    lVar17 = lVar17 + 1;
  } while (lVar17 != 0xe);
  if (param_3 != 0) {
    uVar21 = 0;
    do {
      uVar15 = (ulonglong)*(ushort *)(param_2 + uVar21 * 2);
      if (uVar15 != 0) {
        uVar14 = auStack_88[uVar15];
        auStack_88[uVar15] = uVar14 + 1;
        *(short *)(param_6 + (ulonglong)uVar14 * 2) = (short)uVar21;
      }
      uVar21 = uVar21 + 1;
    } while (param_3 != uVar21);
  }
  uVar23 = (uint)uVar12;
  if (param_1 == 0) {
    uVar20 = 0x14;
    local_c0 = 0;
    local_a8 = param_6;
    local_a0 = param_6;
  }
  else {
    if (param_1 == 1) {
      uVar4 = 1;
      if (9 < uVar23) goto LAB_1802373db;
      local_c4 = 1;
      uVar20 = 0x101;
      local_a0 = &DAT_18034e280;
      local_a8 = &DAT_18034e240;
      local_c0 = 0;
      goto LAB_18023755c;
    }
    uVar20 = 0;
    local_a0 = &DAT_18034e300;
    local_a8 = &DAT_18034e2c0;
    local_c0 = (undefined4)CONCAT71(0x18034e2,param_1 == 2);
    if (param_1 == 2) {
      uVar4 = 1;
      local_c4 = 0;
      if (uVar23 < 10) goto LAB_18023755c;
      goto LAB_1802373db;
    }
  }
  local_c4 = 0;
LAB_18023755c:
  bVar5 = (byte)uVar12;
  local_94 = 1 << (bVar5 & 0x1f);
  local_b8 = (ulonglong)local_94;
  local_94 = local_94 - 1;
  lVar17 = *param_4;
  local_bc = 0xffffffff;
  uVar21 = 0;
  uVar13 = 0;
  uVar8 = 0;
  do {
    uVar11 = 1 << ((byte)uVar12 & 0x1f);
    do {
      uVar14 = *(ushort *)(param_6 + uVar21 * 2);
      if (uVar14 + 1 < uVar20) {
        uVar19 = 0;
      }
      else if (uVar14 < uVar20) {
        uVar19 = 0x60;
        uVar14 = 0;
      }
      else {
        uVar7 = (uVar14 - uVar20) * 2;
        uVar19 = local_a0[uVar7];
        uVar14 = *(ushort *)(local_a8 + uVar7);
      }
      bVar6 = (char)uVar22 - (byte)uVar13;
      iVar18 = -1 << (bVar6 & 0x1f);
      uVar7 = uVar11;
      do {
        uVar12 = (ulonglong)((uVar8 >> ((byte)uVar13 & 0x1f)) + iVar18 + uVar7);
        *(undefined1 *)(lVar17 + uVar12 * 4) = uVar19;
        *(byte *)(lVar17 + 1 + uVar12 * 4) = bVar6;
        *(ushort *)(lVar17 + 2 + uVar12 * 4) = uVar14;
        uVar7 = uVar7 + iVar18;
      } while (uVar7 != 0);
      uVar7 = 1 << ((char)uVar22 - 1U & 0x1f);
      do {
        uVar16 = uVar7;
        uVar7 = uVar16 >> 1;
      } while ((uVar16 & uVar8) != 0);
      uVar8 = (uVar16 - 1 & uVar8) + uVar16;
      if (uVar16 == 0) {
        uVar8 = 0;
      }
      uVar21 = (ulonglong)((int)uVar21 + 1);
      puVar1 = local_68 + (uVar22 & 0xffffffff);
      *puVar1 = *puVar1 - 1;
      local_90 = uVar20;
      local_8c = uVar23;
      if (*puVar1 == 0) {
        if ((uint)uVar22 == uVar10) {
          if (uVar8 != 0) {
            uVar12 = (ulonglong)uVar8;
            *(undefined1 *)(lVar17 + uVar12 * 4) = 0x40;
            *(byte *)(lVar17 + 1 + uVar12 * 4) = bVar6;
            *(undefined2 *)(lVar17 + 2 + uVar12 * 4) = 0;
          }
          *param_4 = *param_4 + local_b8 * 4;
          goto LAB_1802373d6;
        }
        uVar22 = (ulonglong)*(ushort *)(param_2 + (ulonglong)*(ushort *)(param_6 + uVar21 * 2) * 2);
      }
      uVar7 = (uint)uVar22;
    } while ((uVar7 <= uVar23) || (uVar16 = uVar8 & local_94, uVar16 == local_bc));
    if (uVar13 == 0) {
      uVar13 = uVar23;
    }
    uVar9 = uVar7 - uVar13;
    iVar18 = 1 << ((byte)uVar9 & 0x1f);
    if (uVar7 < uVar10) {
      uVar9 = uVar10 - uVar13;
      uVar12 = uVar22 & 0xffffffff;
      do {
        iVar3 = iVar18 - (uint)local_68[uVar12];
        if (iVar3 == 0 || iVar18 < (int)(uint)local_68[uVar12]) {
          uVar9 = (int)uVar12 - uVar13;
          break;
        }
        iVar18 = iVar3 * 2;
        uVar7 = (int)uVar12 + 1;
        uVar12 = (ulonglong)uVar7;
      } while (uVar7 < uVar10);
      iVar18 = 1 << ((byte)uVar9 & 0x1f);
    }
    uVar12 = (ulonglong)uVar9;
    uVar7 = (int)local_b8 + iVar18;
    local_b8 = (ulonglong)uVar7;
    uVar4 = 1;
    if ((((byte)local_c4 & 0x354 < uVar7) != 0) || ((0x250 < uVar7 & (byte)local_c0) != 0))
    goto LAB_1802373db;
    lVar17 = lVar17 + (ulonglong)uVar11 * 4;
    uVar15 = (ulonglong)uVar16;
    *(char *)(*param_4 + uVar15 * 4) = (char)uVar9;
    *(byte *)(*param_4 + 1 + uVar15 * 4) = bVar5;
    *(short *)(*param_4 + 2 + uVar15 * 4) = (short)((uint)((int)lVar17 - (int)*param_4) >> 2);
    local_bc = uVar16;
  } while( true );
}

