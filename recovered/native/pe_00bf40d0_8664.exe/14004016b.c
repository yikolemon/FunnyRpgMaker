/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14004016b */

int FUN_14004016b(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  uint *puVar3;
  longlong lVar4;
  uint uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  undefined6 extraout_var;
  longlong lVar18;
  uint uVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  ulonglong uVar25;
  undefined1 auStackY_f8 [32];
  longlong local_b0;
  ulonglong local_88;
  uint local_58;
  uint local_54;
  uint local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStackY_f8;
  lVar2 = param_2[6];
  puVar3 = *(uint **)(param_1 + 0x408);
  local_58 = 0;
  iVar10 = 0;
  iVar12 = 0;
  if ((((puVar3 != (uint *)0x0) && (iVar12 = iVar10, *(longlong *)(param_1 + 0x3d8) != 0)) &&
      (iVar10 = (**(code **)(param_1 + 0x2a0))(param_1,0x63766172,param_2,&local_50), iVar10 == 0))
     && (local_4c = FUN_140021063(param_2,local_50), local_4c == 0)) {
    lVar16 = param_2[7];
    lVar17 = *param_2;
    uVar11 = FUN_14002120e((longlong)param_2);
    if (uVar11 == 0x10000) {
      uVar6 = FUN_1400211ce((longlong)param_2);
      uVar7 = FUN_1400211ce((longlong)param_2);
      if (local_50 < (uint)uVar7 + (uVar6 & 0xfff) * 4) {
        local_4c = 8;
      }
      else {
        uVar11 = (uint)uVar7 + ((int)lVar16 - (int)lVar17);
        local_88 = (ulonglong)uVar11;
        if ((short)uVar6 < 0) {
          lVar16 = *param_2;
          lVar17 = param_2[7];
          lVar21 = local_88 + lVar16;
          if ((uint)((int)param_2[8] - (int)lVar16) <= uVar11) {
            lVar21 = param_2[8];
          }
          param_2[7] = lVar21;
          lVar15 = FUN_14004075c((longlong)param_2,&local_58);
          iVar12 = (int)*param_2;
          local_88 = (ulonglong)(uint)((int)param_2[7] - iVar12);
          lVar21 = (lVar17 - lVar16 & 0xffffffffU) + *param_2;
          if ((uint)((int)param_2[8] - iVar12) <= (uint)(lVar17 - lVar16)) {
            lVar21 = param_2[8];
          }
          param_2[7] = lVar21;
        }
        else {
          lVar15 = 0;
        }
        lVar16 = FUN_14001f231(lVar2,4,0,*puVar3 * 3,0,&local_4c);
        if (local_4c == 0) {
          lVar17 = FUN_14001c617(lVar2,4,0,*(uint *)(param_1 + 0x3d0),0,&local_4c);
          uVar11 = local_58;
          if (local_4c == 0) {
            if ((uVar6 & 0xfff) != 0) {
              lVar21 = lVar16 + (ulonglong)*puVar3 * 4;
              lVar24 = (ulonglong)*puVar3 * 4 + lVar21;
              uVar19 = 0;
              do {
                uVar7 = FUN_1400211ce((longlong)param_2);
                uVar8 = FUN_1400211ce((longlong)param_2);
                uVar14 = (uint)CONCAT62(extraout_var,uVar8);
                if ((short)uVar8 < 0) {
                  lVar23 = lVar16;
                  if (*puVar3 != 0) {
                    uVar25 = 0;
                    do {
                      uVar9 = FUN_1400211ce((longlong)param_2);
                      *(int *)(lVar16 + uVar25 * 4) = (int)(short)uVar9 << 2;
                      uVar25 = uVar25 + 1;
                      uVar13 = *puVar3;
                    } while (uVar25 < uVar13);
                    uVar14 = (uint)uVar8;
                    goto LAB_14004041e;
                  }
                }
                else {
                  if (puVar3[0x1a] <= (uVar8 & 0xfff)) {
                    local_4c = 8;
                    goto LAB_1400406e0;
                  }
                  uVar13 = *puVar3;
                  lVar23 = (ulonglong)((uVar8 & 0xfff) * uVar13) * 4 + *(longlong *)(puVar3 + 0x1c);
LAB_14004041e:
                  if (((uVar8 >> 0xe & 1) != 0) && (uVar13 != 0)) {
                    uVar25 = 0;
                    do {
                      uVar9 = FUN_1400211ce((longlong)param_2);
                      *(int *)(lVar21 + uVar25 * 4) = (int)(short)uVar9 << 2;
                      uVar25 = uVar25 + 1;
                    } while (uVar25 < *puVar3);
                    if (*puVar3 != 0) {
                      uVar25 = 0;
                      do {
                        uVar9 = FUN_1400211ce((longlong)param_2);
                        *(int *)(lVar24 + uVar25 * 4) = (int)(short)uVar9 << 2;
                        uVar25 = uVar25 + 1;
                      } while (uVar25 < *puVar3);
                    }
                    uVar14 = uVar14 & 0xffff;
                  }
                }
                uVar14 = FUN_1400408de(puVar3,uVar14,lVar23,lVar21,lVar24);
                if (uVar14 != 0) {
                  lVar23 = *param_2;
                  lVar4 = param_2[7];
                  lVar20 = local_88 + lVar23;
                  if ((uint)((int)param_2[8] - (int)lVar23) <= (uint)local_88) {
                    lVar20 = param_2[8];
                  }
                  param_2[7] = lVar20;
                  if ((uVar8 >> 0xd & 1) == 0) {
                    local_54 = uVar11;
                    local_b0 = 0;
                    lVar20 = lVar15;
                  }
                  else {
                    lVar20 = FUN_14004075c((longlong)param_2,&local_54);
                    local_b0 = lVar20;
                  }
                  uVar5 = local_54;
                  uVar13 = local_54;
                  if (local_54 == 0) {
                    uVar13 = *(uint *)(param_1 + 0x3d0);
                  }
                  lVar18 = FUN_1400409b1((longlong)param_2,uVar13);
                  if ((lVar20 != 0) && (lVar18 != 0)) {
                    if (lVar20 == -1) {
                      if (*(int *)(param_1 + 0x3d0) != 0) {
                        uVar25 = 0;
                        do {
                          lVar20 = (longlong)*(int *)(lVar18 + uVar25 * 4) * (longlong)(int)uVar14;
                          piVar1 = (int *)(lVar17 + uVar25 * 4);
                          *piVar1 = *piVar1 + (int)((ulonglong)(lVar20 + (lVar20 >> 0x3f) + 0x8000)
                                                   >> 0x10);
                          uVar25 = uVar25 + 1;
                        } while (uVar25 < *(uint *)(param_1 + 0x3d0));
                      }
                    }
                    else if (uVar5 != 0) {
                      uVar25 = 0;
                      do {
                        uVar8 = *(ushort *)(lVar20 + uVar25 * 2);
                        if ((uint)uVar8 < *(uint *)(param_1 + 0x3d0)) {
                          lVar22 = (longlong)*(int *)(lVar18 + uVar25 * 4) * (longlong)(int)uVar14;
                          piVar1 = (int *)(lVar17 + (ulonglong)uVar8 * 4);
                          *piVar1 = *piVar1 + (int)((ulonglong)(lVar22 + (lVar22 >> 0x3f) + 0x8000)
                                                   >> 0x10);
                        }
                        uVar25 = uVar25 + 1;
                      } while (uVar5 != uVar25);
                    }
                  }
                  if (local_b0 != -1) {
                    FUN_14001c53d(lVar2,local_b0);
                  }
                  FUN_14001c53d(lVar2,lVar18);
                  lVar20 = (lVar4 - lVar23 & 0xffffffffU) + *param_2;
                  if ((uint)((int)param_2[8] - (int)*param_2) <= (uint)(lVar4 - lVar23)) {
                    lVar20 = param_2[8];
                  }
                  param_2[7] = lVar20;
                }
                local_88 = (ulonglong)((uint)local_88 + (uint)uVar7);
                uVar19 = uVar19 + 1;
              } while (uVar19 != (uVar6 & 0xfff));
            }
            if (*(int *)(param_1 + 0x3d0) != 0) {
              uVar25 = 0;
              do {
                piVar1 = (int *)(*(longlong *)(param_1 + 0x3d8) + uVar25 * 4);
                *piVar1 = *piVar1 + (*(int *)(lVar17 + uVar25 * 4) + 0x200 >> 10);
                uVar25 = uVar25 + 1;
              } while (uVar25 < *(uint *)(param_1 + 0x3d0));
            }
            FUN_140021ea9((longlong *)(param_1 + 0xa8),&LAB_140040b25,0);
          }
        }
        else {
          lVar17 = 0;
        }
LAB_1400406e0:
        if (lVar15 != -1) {
          FUN_14001c53d(lVar2,lVar15);
        }
        FUN_14001c53d(lVar2,lVar17);
        FUN_14001c53d(lVar2,lVar16);
      }
    }
    else {
      local_4c = 0;
    }
    FUN_140021187(param_2);
    iVar12 = local_4c;
  }
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStackY_f8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStackY_f8);
  }
  return iVar12;
}

