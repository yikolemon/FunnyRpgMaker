/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801cd907 */

undefined4 FUN_1801cd907(ushort *param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ushort uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  ulonglong uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  undefined4 uVar21;
  ulonglong uVar22;
  uint uVar23;
  int iVar24;
  longlong lVar25;
  uint uVar26;
  undefined1 auStack_d8 [44];
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  uint local_84;
  int local_80;
  uint local_7c;
  ushort *local_78;
  ulonglong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_d8;
  if (param_1 == (ushort *)0x0) {
    uVar21 = 0x14;
  }
  else {
    uVar21 = 0;
    if (2 < param_2 + 1U || 2 < param_3 + 1U) {
      local_80 = FUN_1801cdd13(param_1);
      if (local_80 == 2) {
        uVar21 = 6;
        if (*param_1 == 0) {
          uVar21 = 0;
        }
      }
      else {
        uVar9 = *param_1;
        uVar21 = 0;
        if (uVar9 != 0) {
          local_a0 = param_2 / 2;
          local_a4 = param_3 / 2;
          lVar4 = *(longlong *)(param_1 + 4);
          local_60 = (longlong)local_a0;
          local_68 = (longlong)local_a4;
          uVar19 = 0xffffffff;
          uVar17 = 0;
          local_78 = param_1;
          do {
            uVar18 = uVar19 + 1;
            uVar19 = (uint)*(ushort *)(*(longlong *)(param_1 + 0xc) + uVar17 * 2);
            if (uVar18 != uVar19) {
              local_90 = 0;
              uVar16 = 0xffffffff;
              iVar15 = 0;
              local_94 = 0;
              local_98 = 0;
              iVar24 = 0;
              iVar20 = 0;
              uVar26 = uVar18;
              uVar23 = uVar19;
              local_70 = uVar17;
              do {
                if (uVar26 == uVar16) {
                  local_50 = CONCAT44(local_98,local_94);
                  iVar10 = local_90;
                  iVar14 = iVar24;
LAB_1801cda84:
                  uVar6 = uVar26;
                  iVar24 = (int)local_50;
                  iVar7 = iVar10;
                  iVar8 = local_50._4_4_;
                  if (iVar15 != 0) {
                    local_84 = uVar16;
                    if ((int)uVar16 < 0) {
                      local_98 = iVar20;
                      local_94 = iVar14;
                      local_90 = iVar15;
                      local_84 = uVar23;
                    }
                    local_88 = (int)local_50;
                    lVar13 = (longlong)(int)local_50 * (longlong)iVar14;
                    local_8c = local_50._4_4_;
                    lVar25 = (longlong)local_50._4_4_ * (longlong)iVar20;
                    iVar24 = (int)((ulonglong)(lVar25 + 0x8000 + (lVar25 >> 0x3f)) >> 0x10) +
                             (int)((ulonglong)(lVar13 + 0x8000 + (lVar13 >> 0x3f)) >> 0x10);
                    iVar12 = 0;
                    iVar11 = 0;
                    local_ac = iVar15;
                    if (-0xf000 < iVar24) {
                      uVar17 = (ulonglong)(iVar24 + 0x10000);
                      local_9c = (int)local_50 + iVar14;
                      iVar24 = -(local_50._4_4_ + iVar20);
                      lVar13 = (longlong)(int)local_50 * (longlong)iVar20;
                      lVar25 = (longlong)local_50._4_4_ * (longlong)iVar14;
                      uVar16 = (int)((ulonglong)(lVar13 + 0x8000 + (lVar13 >> 0x3f)) >> 0x10) -
                               (int)((ulonglong)(lVar25 + 0x8000 + (lVar25 >> 0x3f)) >> 0x10);
                      local_7c = -uVar16;
                      if (local_80 != 0) {
                        local_7c = uVar16;
                        iVar24 = local_50._4_4_ + iVar20;
                        local_9c = -local_9c;
                      }
                      if (iVar10 <= iVar15) {
                        local_ac = iVar10;
                      }
                      local_58 = (longlong)(int)local_7c;
                      iVar20 = (int)((longlong)local_ac * uVar17 + 0x8000 +
                                     ((longlong)((longlong)local_ac * uVar17) >> 0x3f) >> 0x10);
                      uVar22 = (ulonglong)local_7c;
                      iVar15 = local_ac;
                      if ((int)((ulonglong)
                                (local_58 * local_60 + 0x8000 + (local_58 * local_60 >> 0x3f)) >>
                               0x10) <= iVar20) {
                        uVar22 = uVar17;
                        iVar15 = local_a0;
                      }
                      local_a8 = iVar10;
                      iVar11 = FUN_1801cb4a4(iVar24,iVar15,uVar22);
                      iVar24 = local_a4;
                      if (iVar20 < (int)((ulonglong)
                                         ((local_58 * local_68 >> 0x3f) + local_58 * local_68 +
                                         0x8000) >> 0x10)) {
                        uVar17 = (ulonglong)local_7c;
                        iVar24 = local_ac;
                      }
                      iVar12 = FUN_1801cb4a4(local_9c,iVar24,uVar17);
                      iVar10 = local_a8;
                    }
                    iVar24 = local_88;
                    uVar16 = local_84;
                    iVar7 = iVar10;
                    iVar8 = local_8c;
                    if (uVar23 != uVar26) {
                      do {
                        piVar1 = (int *)(lVar4 + (longlong)(int)uVar23 * 8);
                        *piVar1 = *piVar1 + iVar11 + local_a0;
                        piVar1 = (int *)(lVar4 + 4 + (longlong)(int)uVar23 * 8);
                        *piVar1 = *piVar1 + iVar12 + local_a4;
                        bVar5 = (int)uVar19 <= (int)uVar23;
                        uVar23 = uVar23 + 1;
                        if (bVar5) {
                          uVar23 = uVar18;
                        }
                      } while (uVar23 != uVar26);
                    }
                  }
                }
                else {
                  uVar2 = *(undefined8 *)(lVar4 + (longlong)(int)uVar26 * 8);
                  uVar3 = *(undefined8 *)(lVar4 + (longlong)(int)uVar23 * 8);
                  local_50 = CONCAT44((int)((ulonglong)uVar2 >> 0x20) -
                                      (int)((ulonglong)uVar3 >> 0x20),(int)uVar2 - (int)uVar3);
                  local_ac = iVar24;
                  iVar10 = FUN_1801cdea1(&local_50);
                  uVar6 = uVar23;
                  iVar14 = local_ac;
                  iVar24 = local_ac;
                  iVar7 = iVar15;
                  iVar8 = iVar20;
                  if (iVar10 != 0) goto LAB_1801cda84;
                }
                iVar20 = iVar8;
                iVar15 = iVar7;
                uVar23 = uVar6;
                bVar5 = (int)uVar19 <= (int)uVar26;
                uVar26 = uVar26 + 1;
                if (bVar5) {
                  uVar26 = uVar18;
                }
              } while ((uVar26 != uVar23) && (uVar23 != uVar16));
              uVar9 = *local_78;
              uVar17 = local_70;
              param_1 = local_78;
            }
            uVar17 = uVar17 + 1;
          } while (uVar17 < uVar9);
          uVar21 = 0;
        }
      }
    }
  }
  if (DAT_180402640 == (local_48 ^ (ulonglong)auStack_d8)) {
    return uVar21;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_48 ^ (ulonglong)auStack_d8);
}

