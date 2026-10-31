/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14001fd0a */

undefined4 FUN_14001fd0a(ushort *param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  undefined4 uVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  longlong lVar24;
  uint uVar25;
  undefined1 auStack_d8 [44];
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  int local_98;
  uint local_94;
  uint local_90;
  int local_8c;
  uint local_88;
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
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStack_d8;
  if (param_1 == (ushort *)0x0) {
    uVar20 = 0x14;
  }
  else {
    uVar20 = 0;
    if (2 < param_2 + 1U || 2 < param_3 + 1U) {
      uVar11 = FUN_140020116(param_1);
      local_80 = (int)uVar11;
      if (local_80 == 2) {
        uVar20 = 6;
        if (*param_1 == 0) {
          uVar20 = 0;
        }
      }
      else {
        uVar7 = *param_1;
        uVar20 = 0;
        if (uVar7 != 0) {
          local_a0 = param_2 / 2;
          local_a4 = param_3 / 2;
          lVar3 = *(longlong *)(param_1 + 4);
          local_60 = (longlong)(int)local_a0;
          local_68 = (longlong)(int)local_a4;
          uVar18 = 0xffffffff;
          uVar16 = 0;
          local_78 = param_1;
          do {
            uVar17 = uVar18 + 1;
            uVar18 = (uint)*(ushort *)(*(longlong *)(param_1 + 0xc) + uVar16 * 2);
            if (uVar17 != uVar18) {
              local_90 = 0;
              uVar13 = 0xffffffff;
              uVar14 = 0;
              local_94 = 0;
              local_98 = 0;
              uVar23 = 0;
              iVar19 = 0;
              uVar25 = uVar17;
              uVar21 = uVar18;
              local_70 = uVar16;
              do {
                if (uVar25 == uVar13) {
                  local_50 = CONCAT44(local_98,local_94);
                  uVar8 = local_90;
                  uVar15 = uVar23;
LAB_14001fe87:
                  iVar22 = local_50._4_4_;
                  uVar5 = uVar25;
                  uVar23 = (uint)local_50;
                  uVar6 = uVar8;
                  if (uVar14 != 0) {
                    local_84 = uVar13;
                    if ((int)uVar13 < 0) {
                      local_84 = uVar21;
                      local_98 = iVar19;
                      local_94 = uVar15;
                      local_90 = uVar14;
                    }
                    local_88 = (uint)local_50;
                    lVar12 = (longlong)(int)(uint)local_50 * (longlong)(int)uVar15;
                    local_8c = local_50._4_4_;
                    lVar24 = (longlong)local_50._4_4_ * (longlong)iVar19;
                    iVar22 = (int)((ulonglong)(lVar24 + 0x8000 + (lVar24 >> 0x3f)) >> 0x10) +
                             (int)((ulonglong)(lVar12 + 0x8000 + (lVar12 >> 0x3f)) >> 0x10);
                    iVar9 = 0;
                    iVar10 = 0;
                    local_ac = uVar14;
                    if (-0xf000 < iVar22) {
                      uVar23 = iVar22 + 0x10000;
                      local_9c = (uint)local_50 + uVar15;
                      uVar13 = -(local_50._4_4_ + iVar19);
                      lVar12 = (longlong)(int)(uint)local_50 * (longlong)iVar19;
                      lVar24 = (longlong)local_50._4_4_ * (longlong)(int)uVar15;
                      uVar15 = (int)((ulonglong)(lVar12 + 0x8000 + (lVar12 >> 0x3f)) >> 0x10) -
                               (int)((ulonglong)(lVar24 + 0x8000 + (lVar24 >> 0x3f)) >> 0x10);
                      local_7c = -uVar15;
                      if (local_80 != 0) {
                        local_7c = uVar15;
                        uVar13 = local_50._4_4_ + iVar19;
                        local_9c = -local_9c;
                      }
                      if ((int)uVar8 <= (int)uVar14) {
                        local_ac = uVar8;
                      }
                      local_58 = (longlong)(int)local_7c;
                      iVar19 = (int)((longlong)(int)local_ac * (ulonglong)uVar23 + 0x8000 +
                                     ((longlong)((longlong)(int)local_ac * (ulonglong)uVar23) >>
                                     0x3f) >> 0x10);
                      uVar14 = local_ac;
                      uVar15 = local_7c;
                      if ((int)((ulonglong)
                                (local_58 * local_60 + 0x8000 + (local_58 * local_60 >> 0x3f)) >>
                               0x10) <= iVar19) {
                        uVar14 = local_a0;
                        uVar15 = uVar23;
                      }
                      local_a8 = uVar8;
                      iVar10 = FUN_14001de7c(uVar13,uVar14,uVar15);
                      uVar13 = local_a4;
                      if (iVar19 < (int)((ulonglong)
                                         ((local_58 * local_68 >> 0x3f) + local_58 * local_68 +
                                         0x8000) >> 0x10)) {
                        uVar13 = local_ac;
                        uVar23 = local_7c;
                      }
                      iVar9 = FUN_14001de7c(local_9c,uVar13,uVar23);
                      uVar8 = local_a8;
                    }
                    iVar22 = local_8c;
                    uVar13 = local_84;
                    uVar23 = local_88;
                    uVar6 = uVar8;
                    if (uVar21 != uVar25) {
                      do {
                        piVar1 = (int *)(lVar3 + (longlong)(int)uVar21 * 8);
                        *piVar1 = *piVar1 + iVar10 + local_a0;
                        piVar1 = (int *)(lVar3 + 4 + (longlong)(int)uVar21 * 8);
                        *piVar1 = *piVar1 + iVar9 + local_a4;
                        bVar4 = (int)uVar18 <= (int)uVar21;
                        uVar21 = uVar21 + 1;
                        if (bVar4) {
                          uVar21 = uVar17;
                        }
                      } while (uVar21 != uVar25);
                    }
                  }
                }
                else {
                  uVar11 = *(undefined8 *)(lVar3 + (longlong)(int)uVar25 * 8);
                  uVar2 = *(undefined8 *)(lVar3 + (longlong)(int)uVar21 * 8);
                  local_50 = CONCAT44((int)((ulonglong)uVar11 >> 0x20) -
                                      (int)((ulonglong)uVar2 >> 0x20),(int)uVar11 - (int)uVar2);
                  local_ac = uVar23;
                  uVar8 = FUN_1400202a4((uint *)&local_50);
                  iVar22 = iVar19;
                  uVar5 = uVar21;
                  uVar15 = local_ac;
                  uVar23 = local_ac;
                  uVar6 = uVar14;
                  if (uVar8 != 0) goto LAB_14001fe87;
                }
                uVar14 = uVar6;
                uVar21 = uVar5;
                bVar4 = (int)uVar18 <= (int)uVar25;
                uVar25 = uVar25 + 1;
                if (bVar4) {
                  uVar25 = uVar17;
                }
              } while ((uVar25 != uVar21) && (iVar19 = iVar22, uVar21 != uVar13));
              uVar7 = *local_78;
              uVar16 = local_70;
              param_1 = local_78;
            }
            uVar16 = uVar16 + 1;
          } while (uVar16 < uVar7);
          uVar20 = 0;
        }
      }
    }
  }
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStack_d8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStack_d8);
  }
  return uVar20;
}

