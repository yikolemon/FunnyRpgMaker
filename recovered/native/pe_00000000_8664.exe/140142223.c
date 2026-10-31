/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140142223 */

int FUN_140142223(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  uint *puVar3;
  ushort uVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  int *local_d0;
  ushort local_ba;
  longlong local_b8;
  undefined8 local_b0;
  int local_a4;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  ulonglong local_88;
  ulonglong local_80;
  uint local_74;
  ulonglong local_70;
  ulonglong local_68;
  longlong local_60;
  uint local_58;
  uint local_54;
  uint local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_f8;
  lVar2 = param_2[6];
  puVar3 = *(uint **)(param_1 + 0x408);
  local_58 = 0;
  iVar6 = 0;
  iVar7 = 0;
  if ((((puVar3 != (uint *)0x0) && (iVar7 = iVar6, *(longlong *)(param_1 + 0x3d8) != 0)) &&
      (iVar6 = (**(code **)(param_1 + 0x2a0))(param_1,0x63766172,param_2,&local_50), iVar6 == 0)) &&
     (local_4c = FUN_14012dc34(param_2,local_50), local_4c == 0)) {
    lVar9 = param_2[7];
    lVar14 = *param_2;
    iVar7 = FUN_14012dddf(param_2);
    if (iVar7 == 0x10000) {
      uVar8 = FUN_14012dd9f(param_2);
      uVar4 = FUN_14012dd9f(param_2);
      uVar13 = uVar8 & 0xfff;
      uVar16 = (ulonglong)uVar13;
      if (local_50 < (uint)uVar4 + uVar13 * 4) {
        local_4c = 8;
      }
      else {
        uVar10 = (uint)uVar4 + ((int)lVar9 - (int)lVar14);
        local_88 = (ulonglong)uVar10;
        if ((short)uVar8 < 0) {
          lVar9 = *param_2;
          lVar14 = param_2[7];
          lVar11 = local_88 + lVar9;
          if ((uint)((int)param_2[8] - (int)lVar9) <= uVar10) {
            lVar11 = param_2[8];
          }
          param_2[7] = lVar11;
          uVar15 = FUN_140142814(param_2,&local_58);
          iVar7 = (int)*param_2;
          local_88 = (ulonglong)(uint)((int)param_2[7] - iVar7);
          lVar11 = (lVar14 - lVar9 & 0xffffffffU) + *param_2;
          if ((uint)((int)param_2[8] - iVar7) <= (uint)(lVar14 - lVar9)) {
            lVar11 = param_2[8];
          }
          param_2[7] = lVar11;
        }
        else {
          uVar15 = 0;
        }
        local_d8 = 0;
        local_d0 = &local_4c;
        local_90 = FUN_14012b8aa(lVar2,4,0,*puVar3 * 3);
        if (local_4c == 0) {
          local_d8 = 0;
          local_d0 = &local_4c;
          lVar9 = FUN_140128c13(lVar2,4,0,*(undefined4 *)(param_1 + 0x3d0));
          if (local_4c == 0) {
            local_a0 = lVar9;
            local_80 = uVar15;
            if (uVar13 != 0) {
              lVar9 = local_90 + (ulonglong)*puVar3 * 4;
              lVar14 = (ulonglong)*puVar3 * 4 + lVar9;
              uVar15 = 0;
              local_74 = local_58;
              local_98 = lVar14;
              local_70 = uVar16;
              do {
                lVar11 = local_90;
                local_68 = uVar15;
                local_ba = FUN_14012dd9f(param_2);
                uVar8 = FUN_14012dd9f(param_2);
                lVar12 = local_90;
                local_b0 = CONCAT44(local_b0._4_4_,uVar8) & 0xffffffff0000ffff;
                if ((short)uVar8 < 0) {
                  if (*puVar3 != 0) {
                    local_b8 = CONCAT62(local_b8._2_6_,(short)uVar8);
                    uVar15 = 0;
                    do {
                      sVar5 = FUN_14012dd9f(param_2);
                      *(int *)(lVar12 + uVar15 * 4) = (int)sVar5 << 2;
                      uVar15 = uVar15 + 1;
                      uVar13 = *puVar3;
                    } while (uVar15 < uVar13);
                    uVar8 = (uint)(ushort)local_b8;
                    lVar14 = local_98;
                    uVar10 = (uint)local_b0;
                    goto LAB_1401424d6;
                  }
                }
                else {
                  if (puVar3[0x1a] <= (uVar8 & 0xfff)) {
                    local_4c = 8;
                    lVar9 = local_a0;
                    uVar15 = local_80;
                    goto LAB_140142798;
                  }
                  uVar13 = *puVar3;
                  lVar12 = (ulonglong)((uVar8 & 0xfff) * uVar13) * 4 + *(longlong *)(puVar3 + 0x1c);
                  uVar10 = uVar8 & 0xffff;
LAB_1401424d6:
                  lVar11 = lVar12;
                  if (((uVar10 >> 0xe & 1) != 0) && (uVar13 != 0)) {
                    local_b8 = CONCAT62(local_b8._2_6_,(short)uVar8);
                    uVar15 = 0;
                    do {
                      sVar5 = FUN_14012dd9f(param_2);
                      lVar14 = local_98;
                      *(int *)(lVar9 + uVar15 * 4) = (int)sVar5 << 2;
                      uVar15 = uVar15 + 1;
                    } while (uVar15 < *puVar3);
                    if (*puVar3 != 0) {
                      uVar15 = 0;
                      do {
                        sVar5 = FUN_14012dd9f(param_2);
                        *(int *)(lVar14 + uVar15 * 4) = (int)sVar5 << 2;
                        uVar15 = uVar15 + 1;
                        uVar16 = local_70;
                      } while (uVar15 < *puVar3);
                    }
                    uVar8 = (uint)(ushort)local_b8;
                  }
                }
                local_d8 = lVar14;
                iVar6 = FUN_140142996(puVar3,uVar8,lVar11,lVar9);
                iVar7 = (int)local_68;
                if (iVar6 != 0) {
                  local_60 = *param_2;
                  local_b8 = param_2[7];
                  lVar14 = (local_88 & 0xffffffff) + local_60;
                  if ((uint)((int)param_2[8] - (int)local_60) <= (uint)local_88) {
                    lVar14 = param_2[8];
                  }
                  param_2[7] = lVar14;
                  local_a4 = iVar6;
                  if (((uint)local_b0 >> 0xd & 1) == 0) {
                    local_54 = local_74;
                    local_b0 = 0;
                    uVar16 = local_80;
                  }
                  else {
                    uVar16 = FUN_140142814(param_2,&local_54);
                    local_b0 = uVar16;
                  }
                  uVar8 = local_54;
                  lVar14 = FUN_140142a69();
                  if ((uVar16 != 0) && (lVar14 != 0)) {
                    if (uVar16 == 0xffffffffffffffff) {
                      if (*(int *)(param_1 + 0x3d0) != 0) {
                        uVar16 = 0;
                        do {
                          lVar11 = (longlong)*(int *)(lVar14 + uVar16 * 4) * (longlong)local_a4;
                          piVar1 = (int *)(local_a0 + uVar16 * 4);
                          *piVar1 = *piVar1 + (int)((ulonglong)(lVar11 + (lVar11 >> 0x3f) + 0x8000)
                                                   >> 0x10);
                          uVar16 = uVar16 + 1;
                        } while (uVar16 < *(uint *)(param_1 + 0x3d0));
                      }
                    }
                    else if (uVar8 != 0) {
                      uVar15 = 0;
                      do {
                        uVar4 = *(ushort *)(uVar16 + uVar15 * 2);
                        if ((uint)uVar4 < *(uint *)(param_1 + 0x3d0)) {
                          lVar11 = (longlong)*(int *)(lVar14 + uVar15 * 4) * (longlong)local_a4;
                          piVar1 = (int *)(local_a0 + (ulonglong)uVar4 * 4);
                          *piVar1 = *piVar1 + (int)((ulonglong)(lVar11 + (lVar11 >> 0x3f) + 0x8000)
                                                   >> 0x10);
                        }
                        uVar15 = uVar15 + 1;
                      } while (uVar8 != uVar15);
                    }
                  }
                  if (local_b0 != 0xffffffffffffffff) {
                    FUN_140128b39(lVar2);
                  }
                  uVar16 = local_b8 - local_60;
                  FUN_140128b39(lVar2,lVar14);
                  lVar14 = (uVar16 & 0xffffffff) + *param_2;
                  if ((uint)((int)param_2[8] - (int)*param_2) <= (uint)uVar16) {
                    lVar14 = param_2[8];
                  }
                  param_2[7] = lVar14;
                  iVar7 = (int)local_68;
                  uVar16 = local_70;
                  lVar14 = local_98;
                }
                local_88 = (ulonglong)((int)local_88 + (uint)local_ba);
                uVar15 = (ulonglong)(iVar7 + 1U);
              } while (iVar7 + 1U != (uint)uVar16);
            }
            if (*(int *)(param_1 + 0x3d0) != 0) {
              uVar16 = 0;
              do {
                piVar1 = (int *)(*(longlong *)(param_1 + 0x3d8) + uVar16 * 4);
                *piVar1 = *piVar1 + (*(int *)(local_a0 + uVar16 * 4) + 0x200 >> 10);
                uVar16 = uVar16 + 1;
              } while (uVar16 < *(uint *)(param_1 + 0x3d0));
            }
            FUN_14012ea7a(param_1 + 0xa8,&LAB_140142bdd,0);
            lVar9 = local_a0;
            uVar15 = local_80;
          }
        }
        else {
          lVar9 = 0;
        }
LAB_140142798:
        if (uVar15 != 0xffffffffffffffff) {
          FUN_140128b39(lVar2,uVar15);
        }
        FUN_140128b39(lVar2,lVar9);
        FUN_140128b39(lVar2,local_90);
      }
    }
    else {
      local_4c = 0;
    }
    FUN_14012dd58(param_2);
    iVar7 = local_4c;
  }
  if (DAT_140f17b40 == (local_48 ^ (ulonglong)auStack_f8)) {
    return iVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_48 ^ (ulonglong)auStack_f8);
}

