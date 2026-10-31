/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140154101 */

int FUN_140154101(int *param_1,longlong param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  short sVar2;
  ushort uVar3;
  undefined2 uVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined8 uVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint *puVar14;
  ulonglong uVar15;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  int *local_90;
  short local_82;
  ulonglong local_80;
  ulonglong local_78;
  ulonglong local_70;
  ulonglong local_68;
  longlong local_60;
  longlong local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_b8;
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  if (param_4 == 0) {
    iVar11 = 0;
LAB_140154180:
    lVar9 = 0;
  }
  else {
    local_4c = FUN_14012d612(param_2,param_4 + param_3);
    if ((local_4c == 0) && (local_4c = FUN_14012d664(param_2,2), local_4c == 0)) {
      iVar6 = FUN_14012db43(param_2);
      sVar2 = FUN_14012d676(param_2,&local_4c);
      if (local_4c == 0) {
        if (sVar2 != 1) {
          iVar11 = 3;
          goto LAB_140154180;
        }
        iVar7 = FUN_14012d9e0(param_2,&local_4c);
        if (local_4c == 0) {
          uVar3 = FUN_14012d676(param_2,&local_4c);
          if (local_4c == 0) {
            local_98 = 0;
            local_90 = &local_4c;
            lVar9 = FUN_14012b8aa(uVar1,4,0,uVar3);
            iVar11 = local_4c;
            if (local_4c == 0) {
              local_80 = CONCAT44(local_80._4_4_,(uint)uVar3);
              if (uVar3 != 0) {
                uVar12 = 0;
                do {
                  uVar8 = FUN_14012d9e0(param_2,&local_4c);
                  *(undefined4 *)(lVar9 + uVar12 * 4) = uVar8;
                  iVar11 = local_4c;
                  if (local_4c != 0) goto LAB_140154187;
                  uVar12 = uVar12 + 1;
                } while ((uint)uVar3 != uVar12);
              }
              local_4c = FUN_14012d612(param_2,iVar7 + iVar6);
              iVar11 = local_4c;
              if (local_4c == 0) {
                uVar4 = FUN_14012d676(param_2,&local_4c);
                *(undefined2 *)(param_1 + 4) = uVar4;
                iVar11 = local_4c;
                if ((local_4c == 0) &&
                   (uVar3 = FUN_14012d676(param_2,&local_4c), iVar11 = local_4c, local_4c == 0)) {
                  local_68 = (ulonglong)uVar3;
                  param_1[5] = 0;
                  local_90 = &local_4c;
                  local_98 = 0;
                  uVar10 = FUN_14012b8aa(uVar1,8,0);
                  *(undefined8 *)(param_1 + 6) = uVar10;
                  iVar11 = local_4c;
                  if (local_4c == 0) {
                    if (uVar3 != 0) {
                      uVar12 = (ulonglong)*(ushort *)(param_1 + 4);
                      local_78 = 0;
                      do {
                        lVar13 = *(longlong *)(param_1 + 6);
                        local_90 = &local_4c;
                        local_98 = 0;
                        uVar10 = FUN_14012b8aa(uVar1,0xc,0,uVar12);
                        *(undefined8 *)(lVar13 + local_78 * 8) = uVar10;
                        local_60 = lVar13;
                        iVar11 = local_4c;
                        if (local_4c != 0) goto LAB_140154187;
                        param_1[5] = param_1[5] + 1;
                        if ((short)param_1[4] == 0) {
                          uVar12 = 0;
                        }
                        else {
                          lVar13 = 8;
                          local_70 = 0;
                          do {
                            local_58 = *(longlong *)(local_60 + local_78 * 8);
                            local_82 = FUN_14012d676(param_2,&local_4c);
                            iVar11 = local_4c;
                            if (((local_4c != 0) ||
                                (sVar2 = FUN_14012d676(param_2,&local_4c), iVar11 = local_4c,
                                local_4c != 0)) ||
                               (sVar5 = FUN_14012d676(param_2,&local_4c), iVar11 = local_4c,
                               local_4c != 0)) goto LAB_140154187;
                            iVar11 = (int)sVar2 << 2;
                            if (sVar5 < sVar2) {
                              iVar11 = 0;
                            }
                            if (sVar2 < local_82) {
                              iVar11 = 0;
                            }
                            iVar7 = iVar11;
                            if (0 < sVar5) {
                              iVar7 = 0;
                            }
                            if (-1 < local_82) {
                              iVar7 = iVar11;
                            }
                            *(int *)(local_58 + -8 + lVar13) = (int)local_82 << 2;
                            *(int *)(local_58 + -4 + lVar13) = iVar7;
                            *(int *)(local_58 + lVar13) = (int)sVar5 << 2;
                            local_70 = local_70 + 1;
                            uVar12 = (ulonglong)*(ushort *)(param_1 + 4);
                            lVar13 = lVar13 + 0xc;
                          } while (local_70 < uVar12);
                        }
                        local_78 = local_78 + 1;
                      } while (local_78 != local_68);
                    }
                    *param_1 = 0;
                    local_90 = &local_4c;
                    local_98 = 0;
                    uVar10 = FUN_14012b8aa(uVar1,0x10,0,local_80 & 0xffffffff);
                    *(undefined8 *)(param_1 + 2) = uVar10;
                    iVar11 = local_4c;
                    if ((local_4c == 0) && (iVar11 = 0, (int)local_80 != 0)) {
                      local_80 = local_80 & 0xffffffff;
                      uVar12 = 0;
                      do {
                        puVar14 = (uint *)(uVar12 * 0x10 + *(longlong *)(param_1 + 2));
                        local_4c = FUN_14012d612(param_2,*(int *)(lVar9 + uVar12 * 4) + iVar6);
                        iVar11 = local_4c;
                        if ((local_4c != 0) ||
                           (local_4c = FUN_14012d664(param_2,4), iVar11 = local_4c, local_4c != 0))
                        goto LAB_140154187;
                        uVar3 = FUN_14012d676(param_2,&local_4c);
                        *puVar14 = (uint)uVar3;
                        iVar11 = local_4c;
                        if (local_4c != 0) goto LAB_140154187;
                        local_90 = &local_4c;
                        local_98 = 0;
                        uVar10 = FUN_14012b8aa(uVar1,4,0);
                        *(undefined8 *)(puVar14 + 2) = uVar10;
                        iVar11 = local_4c;
                        if (local_4c != 0) goto LAB_140154187;
                        *param_1 = *param_1 + 1;
                        if (*puVar14 != 0) {
                          uVar15 = 0;
                          do {
                            uVar3 = FUN_14012d676(param_2,&local_4c);
                            *(uint *)(*(longlong *)(puVar14 + 2) + uVar15 * 4) = (uint)uVar3;
                            iVar11 = local_4c;
                            if (local_4c != 0) goto LAB_140154187;
                            uVar15 = uVar15 + 1;
                          } while (uVar15 < *puVar14);
                        }
                        uVar12 = uVar12 + 1;
                      } while (uVar12 != local_80);
                      iVar11 = 0;
                    }
                  }
                }
              }
            }
            goto LAB_140154187;
          }
        }
      }
    }
    lVar9 = 0;
    iVar11 = local_4c;
  }
LAB_140154187:
  local_4c = iVar11;
  FUN_140128b39(uVar1,lVar9);
  if (local_4c == 0) {
    iVar11 = 0;
  }
  else {
    FUN_140154fc6(param_1,uVar1);
    iVar11 = local_4c;
  }
  if (DAT_140f17b40 != (local_48 ^ (ulonglong)auStack_b8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_48 ^ (ulonglong)auStack_b8);
  }
  return iVar11;
}

