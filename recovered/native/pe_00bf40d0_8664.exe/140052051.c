/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140052051 */

int FUN_140052051(uint *param_1,longlong *param_2,int param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  ulonglong uVar17;
  uint *puVar18;
  ulonglong uVar19;
  undefined1 auStackY_b8 [32];
  ulonglong local_78;
  ulonglong local_70;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStackY_b8;
  lVar1 = param_2[6];
  if (param_4 == 0) {
    iVar14 = 0;
LAB_1400520d0:
    lVar11 = 0;
  }
  else {
    uVar10 = FUN_140020a41((longlong)param_2,param_4 + param_3);
    local_4c = (int)uVar10;
    if (local_4c == 0) {
      uVar10 = FUN_140020a93((longlong)param_2,2);
      local_4c = (int)uVar10;
      if (local_4c == 0) {
        iVar7 = FUN_140020f72((longlong)param_2);
        uVar3 = FUN_140020aa5(param_2,&local_4c);
        if (local_4c == 0) {
          if (uVar3 != 1) {
            iVar14 = 3;
            goto LAB_1400520d0;
          }
          uVar8 = FUN_140020e0f(param_2,&local_4c);
          if (local_4c == 0) {
            uVar3 = FUN_140020aa5(param_2,&local_4c);
            if (local_4c == 0) {
              uVar16 = (uint)uVar3;
              lVar11 = FUN_14001f231(lVar1,4,0,(uint)uVar3,0,&local_4c);
              iVar14 = local_4c;
              if (local_4c == 0) {
                if (uVar3 != 0) {
                  uVar17 = 0;
                  do {
                    uVar9 = FUN_140020e0f(param_2,&local_4c);
                    *(uint *)(lVar11 + uVar17 * 4) = uVar9;
                    iVar14 = local_4c;
                    if (local_4c != 0) goto LAB_1400520d7;
                    uVar17 = uVar17 + 1;
                  } while (uVar16 != uVar17);
                }
                uVar10 = FUN_140020a41((longlong)param_2,uVar8 + iVar7);
                local_4c = (int)uVar10;
                iVar14 = local_4c;
                if (local_4c == 0) {
                  uVar3 = FUN_140020aa5(param_2,&local_4c);
                  *(ushort *)(param_1 + 4) = uVar3;
                  iVar14 = local_4c;
                  if ((local_4c == 0) &&
                     (uVar3 = FUN_140020aa5(param_2,&local_4c), iVar14 = local_4c, local_4c == 0)) {
                    param_1[5] = 0;
                    lVar12 = FUN_14001f231(lVar1,8,0,(uint)uVar3,0,&local_4c);
                    *(longlong *)(param_1 + 6) = lVar12;
                    iVar14 = local_4c;
                    if (local_4c == 0) {
                      if (uVar3 != 0) {
                        uVar17 = (ulonglong)(ushort)param_1[4];
                        local_78 = 0;
                        do {
                          lVar12 = *(longlong *)(param_1 + 6);
                          lVar13 = FUN_14001f231(lVar1,0xc,0,(uint)uVar17,0,&local_4c);
                          *(longlong *)(lVar12 + local_78 * 8) = lVar13;
                          iVar14 = local_4c;
                          if (local_4c != 0) goto LAB_1400520d7;
                          param_1[5] = param_1[5] + 1;
                          if ((short)param_1[4] == 0) {
                            uVar17 = 0;
                          }
                          else {
                            lVar13 = 8;
                            local_70 = 0;
                            do {
                              lVar2 = *(longlong *)(lVar12 + local_78 * 8);
                              uVar4 = FUN_140020aa5(param_2,&local_4c);
                              iVar14 = local_4c;
                              if (((local_4c != 0) ||
                                  (uVar5 = FUN_140020aa5(param_2,&local_4c), iVar14 = local_4c,
                                  local_4c != 0)) ||
                                 (uVar6 = FUN_140020aa5(param_2,&local_4c), iVar14 = local_4c,
                                 local_4c != 0)) goto LAB_1400520d7;
                              iVar14 = (int)(short)uVar5 << 2;
                              if ((short)uVar6 < (short)uVar5) {
                                iVar14 = 0;
                              }
                              if ((short)uVar5 < (short)uVar4) {
                                iVar14 = 0;
                              }
                              iVar15 = iVar14;
                              if (0 < (short)uVar6) {
                                iVar15 = 0;
                              }
                              if (-1 < (short)uVar4) {
                                iVar15 = iVar14;
                              }
                              *(int *)(lVar2 + -8 + lVar13) = (int)(short)uVar4 << 2;
                              *(int *)(lVar2 + -4 + lVar13) = iVar15;
                              *(int *)(lVar2 + lVar13) = (int)(short)uVar6 << 2;
                              local_70 = local_70 + 1;
                              uVar17 = (ulonglong)(ushort)param_1[4];
                              lVar13 = lVar13 + 0xc;
                            } while (local_70 < uVar17);
                          }
                          local_78 = local_78 + 1;
                        } while (local_78 != uVar3);
                      }
                      *param_1 = 0;
                      lVar12 = FUN_14001f231(lVar1,0x10,0,uVar16,0,&local_4c);
                      *(longlong *)(param_1 + 2) = lVar12;
                      iVar14 = local_4c;
                      if ((local_4c == 0) && (iVar14 = 0, uVar16 != 0)) {
                        uVar17 = 0;
                        do {
                          puVar18 = (uint *)(uVar17 * 0x10 + *(longlong *)(param_1 + 2));
                          uVar10 = FUN_140020a41((longlong)param_2,
                                                 *(int *)(lVar11 + uVar17 * 4) + iVar7);
                          local_4c = (int)uVar10;
                          iVar14 = local_4c;
                          if (local_4c != 0) goto LAB_1400520d7;
                          uVar10 = FUN_140020a93((longlong)param_2,4);
                          local_4c = (int)uVar10;
                          iVar14 = local_4c;
                          if (local_4c != 0) goto LAB_1400520d7;
                          uVar3 = FUN_140020aa5(param_2,&local_4c);
                          *puVar18 = (uint)uVar3;
                          iVar14 = local_4c;
                          if (local_4c != 0) goto LAB_1400520d7;
                          lVar12 = FUN_14001f231(lVar1,4,0,(uint)uVar3,0,&local_4c);
                          *(longlong *)(puVar18 + 2) = lVar12;
                          iVar14 = local_4c;
                          if (local_4c != 0) goto LAB_1400520d7;
                          *param_1 = *param_1 + 1;
                          if (*puVar18 != 0) {
                            uVar19 = 0;
                            do {
                              uVar3 = FUN_140020aa5(param_2,&local_4c);
                              *(uint *)(*(longlong *)(puVar18 + 2) + uVar19 * 4) = (uint)uVar3;
                              iVar14 = local_4c;
                              if (local_4c != 0) goto LAB_1400520d7;
                              uVar19 = uVar19 + 1;
                            } while (uVar19 < *puVar18);
                          }
                          uVar17 = uVar17 + 1;
                        } while (uVar17 != uVar16);
                        iVar14 = 0;
                      }
                    }
                  }
                }
              }
              goto LAB_1400520d7;
            }
          }
        }
      }
    }
    lVar11 = 0;
    iVar14 = local_4c;
  }
LAB_1400520d7:
  local_4c = iVar14;
  FUN_14001c53d(lVar1,lVar11);
  if (local_4c == 0) {
    iVar14 = 0;
  }
  else {
    FUN_140052f16(param_1,lVar1);
    iVar14 = local_4c;
  }
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStackY_b8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStackY_b8);
  }
  return iVar14;
}

