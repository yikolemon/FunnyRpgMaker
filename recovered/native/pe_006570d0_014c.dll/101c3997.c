/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c3997 */

undefined4 FUN_101c3997(ushort *param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  int local_64;
  int local_60;
  uint local_5c;
  int local_58;
  int local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  int local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined8 local_1c;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_74;
  if (param_1 == (ushort *)0x0) {
    uVar14 = 0x14;
  }
  else {
    uVar14 = 0;
    if (2 < param_2 + 1U || 2 < param_3 + 1U) {
      local_28 = FUN_101c3d9c(param_1);
      if (local_28 == 2) {
        uVar14 = 6;
        if (*param_1 == 0) {
          uVar14 = 0;
        }
      }
      else {
        uVar7 = (uint)*param_1;
        if (*param_1 != 0) {
          local_50 = param_2 / 2;
          local_40 = param_3 / 2;
          local_54 = *(int *)(param_1 + 2);
          uVar16 = 0;
          local_5c = 0xffffffff;
          do {
            uVar11 = local_5c + 1;
            uVar9 = (uint)*(ushort *)(*(int *)(param_1 + 6) + uVar16 * 2);
            local_5c = uVar9;
            if (uVar11 != uVar9) {
              local_34 = 0;
              uVar13 = 0xffffffff;
              uVar7 = 0;
              local_38 = 0;
              local_3c = 0;
              local_74 = 0;
              local_70 = 0;
              uVar12 = uVar9;
              iVar10 = local_54;
              uVar17 = uVar11;
              local_48 = uVar11;
              local_2c = uVar16;
              do {
                local_6c = uVar7;
                if (uVar17 == uVar13) {
                  local_1c = CONCAT44(local_3c,local_38);
                  local_68 = local_34;
LAB_101c3ae7:
                  if (local_6c == 0) {
                    local_74 = (uint)local_1c;
                    local_70 = local_1c._4_4_;
                    uVar7 = local_68;
                    uVar12 = uVar17;
                  }
                  else {
                    local_30 = uVar13;
                    if ((int)uVar13 < 0) {
                      local_3c = local_70;
                      local_38 = local_74;
                      local_34 = local_6c;
                      local_30 = uVar12;
                    }
                    local_44 = (uint)local_1c;
                    iVar10 = (int)((longlong)(int)(uint)local_1c * (longlong)(int)local_74 >> 0x3f);
                    lVar5 = (longlong)(int)(uint)local_1c * (longlong)(int)local_74 +
                            CONCAT44(iVar10,iVar10) + 0x8000;
                    local_58 = local_1c._4_4_;
                    iVar10 = (int)((longlong)local_1c._4_4_ * (longlong)(int)local_70 >> 0x3f);
                    lVar6 = (longlong)local_1c._4_4_ * (longlong)(int)local_70 +
                            CONCAT44(iVar10,iVar10) + 0x8000;
                    iVar15 = ((int)((ulonglong)lVar6 >> 0x20) * 0x10000 | (uint)lVar6 >> 0x10) +
                             ((int)((ulonglong)lVar5 >> 0x20) * 0x10000 | (uint)lVar5 >> 0x10);
                    iVar8 = 0;
                    iVar10 = 0;
                    if (-0xf000 < iVar15) {
                      local_4c = iVar15 + 0x10000;
                      local_20 = local_70 + local_1c._4_4_;
                      local_24 = local_74 + (uint)local_1c;
                      local_64 = -local_20;
                      iVar10 = (int)((longlong)(int)(uint)local_1c * (longlong)(int)local_70 >> 0x3f
                                    );
                      lVar5 = (longlong)(int)(uint)local_1c * (longlong)(int)local_70 +
                              CONCAT44(iVar10,iVar10) + 0x8000;
                      iVar10 = (int)((longlong)local_1c._4_4_ * (longlong)(int)local_74 >> 0x3f);
                      lVar6 = (longlong)local_1c._4_4_ * (longlong)(int)local_74 +
                              CONCAT44(iVar10,iVar10) + 0x8000;
                      uVar7 = ((int)((ulonglong)lVar5 >> 0x20) * 0x10000 | (uint)lVar5 >> 0x10) -
                              ((int)((ulonglong)lVar6 >> 0x20) * 0x10000 | (uint)lVar6 >> 0x10);
                      local_74 = -uVar7;
                      local_60 = local_24;
                      if (local_28 != 0) {
                        local_74 = uVar7;
                        local_64 = local_20;
                        local_60 = -local_24;
                      }
                      if ((int)local_68 <= (int)local_6c) {
                        local_6c = local_68;
                      }
                      iVar10 = (int)((longlong)(int)local_74 * (longlong)(int)local_50 >> 0x3f);
                      lVar5 = (longlong)(int)local_74 * (longlong)(int)local_50 +
                              CONCAT44(iVar10,iVar10) + 0x8000;
                      uVar7 = (uint)((ulonglong)local_4c * (ulonglong)local_6c);
                      iVar10 = ((int)local_6c >> 0x1f) * local_4c +
                               (int)((ulonglong)local_4c * (ulonglong)local_6c >> 0x20);
                      uVar9 = iVar10 >> 0x1f;
                      uVar16 = uVar7 + uVar9;
                      local_70 = (uVar9 + iVar10 + (uint)CARRY4(uVar7,uVar9) +
                                 (uint)(0xffff7fff < uVar16)) * 0x10000 | uVar16 + 0x8000 >> 0x10;
                      uVar7 = local_50;
                      uVar16 = local_4c;
                      if ((int)local_70 <
                          (int)((int)((ulonglong)lVar5 >> 0x20) * 0x10000 | (uint)lVar5 >> 0x10)) {
                        uVar7 = local_6c;
                        uVar16 = local_74;
                      }
                      iVar10 = FUN_101c16ea(local_64,uVar7,uVar16);
                      iVar8 = (int)((longlong)(int)local_74 * (longlong)(int)local_40 >> 0x3f);
                      lVar5 = (longlong)(int)local_74 * (longlong)(int)local_40 +
                              CONCAT44(iVar8,iVar8) + 0x8000;
                      uVar7 = local_40;
                      uVar16 = local_4c;
                      if ((int)local_70 <
                          (int)((int)((ulonglong)lVar5 >> 0x20) << 0x10 | (uint)lVar5 >> 0x10)) {
                        uVar7 = local_6c;
                        uVar16 = local_74;
                      }
                      iVar8 = FUN_101c16ea(local_60,uVar7,uVar16);
                    }
                    if (uVar12 != uVar17) {
                      do {
                        piVar1 = (int *)(local_54 + uVar12 * 8);
                        *piVar1 = *piVar1 + iVar10 + local_50;
                        piVar1 = (int *)(local_54 + 4 + uVar12 * 8);
                        *piVar1 = *piVar1 + iVar8 + local_40;
                        bVar4 = (int)local_5c <= (int)uVar12;
                        uVar12 = uVar12 + 1;
                        if (bVar4) {
                          uVar12 = local_48;
                        }
                      } while (uVar12 != uVar17);
                    }
                    local_70 = local_58;
                    local_74 = local_44;
                    uVar7 = local_68;
                    uVar9 = local_5c;
                    uVar11 = local_48;
                    uVar12 = uVar17;
                    uVar13 = local_30;
                    iVar10 = local_54;
                  }
                }
                else {
                  uVar2 = *(undefined8 *)(iVar10 + uVar17 * 8);
                  uVar3 = *(undefined8 *)(iVar10 + uVar12 * 8);
                  local_1c = CONCAT44((int)((ulonglong)uVar2 >> 0x20) -
                                      (int)((ulonglong)uVar3 >> 0x20),(int)uVar2 - (int)uVar3);
                  local_68 = FUN_101c3f10(&local_1c);
                  uVar7 = local_6c;
                  uVar9 = local_5c;
                  uVar11 = local_48;
                  if (local_68 != 0) goto LAB_101c3ae7;
                }
                bVar4 = (int)uVar9 <= (int)uVar17;
                uVar17 = uVar17 + 1;
                if (bVar4) {
                  uVar17 = uVar11;
                }
              } while ((uVar17 != uVar12) && (uVar12 != uVar13));
              uVar7 = (uint)*param_1;
              uVar16 = local_2c;
            }
            uVar16 = uVar16 + 1;
          } while (uVar16 < uVar7);
          uVar14 = 0;
        }
      }
    }
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_74)) {
    return uVar14;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

