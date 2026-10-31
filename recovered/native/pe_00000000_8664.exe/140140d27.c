/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140140d27 */

int FUN_140140d27(longlong param_1,int param_2,uint *param_3)

{
  byte *pbVar1;
  byte bVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  short sVar6;
  ushort uVar7;
  undefined2 uVar8;
  int iVar9;
  longlong lVar10;
  undefined8 uVar11;
  int *piVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  int iVar16;
  short sVar17;
  uint uVar18;
  ushort uVar19;
  uint uVar20;
  byte *pbVar21;
  uint *puVar22;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  int *local_80;
  uint local_70;
  uint local_6c;
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_a8;
  lVar3 = *(longlong *)(param_1 + 0xa0);
  uVar4 = *(undefined8 *)(lVar3 + 0x30);
  lVar5 = *(longlong *)(param_1 + 0x408);
  local_4c = FUN_14012d612(lVar3);
  if (local_4c == 0) {
    sVar6 = FUN_14012d676(lVar3,&local_4c);
    if (local_4c == 0) {
      if (sVar6 == 1) {
        iVar9 = FUN_14012d9e0(lVar3,&local_4c);
        if (local_4c == 0) {
          uVar7 = FUN_14012d676(lVar3,&local_4c);
          if (local_4c == 0) {
            if (uVar7 != 0) {
              local_88 = 0;
              uVar20 = (uint)uVar7;
              local_80 = &local_4c;
              lVar10 = FUN_14012b8aa(uVar4,4,0,uVar7);
              if (local_4c == 0) {
                local_4c = FUN_14012dc34(lVar3,(uint)uVar7 * 4);
                if (local_4c == 0) {
                  lVar14 = *(longlong *)(lVar3 + 0x38);
                  local_58 = (ulonglong)uVar20;
                  uVar13 = 0;
                  do {
                    uVar15 = *(uint *)(lVar14 + uVar13 * 4);
                    *(uint *)(lVar10 + uVar13 * 4) =
                         uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 |
                         uVar15 << 0x18;
                    uVar13 = uVar13 + 1;
                  } while (local_58 != uVar13);
                  FUN_14012dd58(lVar3);
                  local_4c = FUN_14012d612(lVar3,iVar9 + param_2);
                  if (local_4c == 0) {
                    uVar8 = FUN_14012d676(lVar3,&local_4c);
                    if (local_4c == 0) {
                      local_70 = CONCAT22(local_70._2_2_,uVar8);
                      uVar7 = FUN_14012d676(lVar3,&local_4c);
                      if (local_4c == 0) {
                        local_6c = local_70 & 0xffff;
                        if ((**(uint **)(lVar5 + 0x18) == local_6c) &&
                           (*(undefined2 *)(param_3 + 4) = (undefined2)local_70, -1 < (short)uVar7))
                        {
                          local_80 = &local_4c;
                          local_88 = 0;
                          uVar11 = FUN_140128c13(uVar4,8,0,uVar7);
                          *(undefined8 *)(param_3 + 6) = uVar11;
                          if (local_4c != 0) goto LAB_140140f23;
                          param_3[5] = (uint)uVar7;
                          uVar15 = (uint)uVar7;
                          iVar9 = FUN_14012dc34(lVar3,local_6c * uVar15 * 6);
                          if (iVar9 == 0) {
                            local_4c = 0;
                            if (uVar15 != 0) {
                              pbVar21 = *(byte **)(lVar3 + 0x38);
                              local_60 = (ulonglong)uVar15;
                              local_68 = 0;
                              do {
                                local_80 = &local_4c;
                                local_88 = 0;
                                uVar11 = FUN_140128c13(uVar4,0xc,0,local_6c);
                                *(undefined8 *)(*(longlong *)(param_3 + 6) + local_68 * 8) = uVar11;
                                if (local_4c != 0) {
                                  FUN_14012dd58(lVar3);
                                  goto LAB_140140f23;
                                }
                                if ((short)param_3[4] != 0) {
                                  piVar12 = (int *)(*(longlong *)
                                                     (*(longlong *)(param_3 + 6) + local_68 * 8) + 8
                                                   );
                                  uVar13 = 0;
                                  do {
                                    bVar2 = *pbVar21;
                                    pbVar1 = pbVar21 + 1;
                                    local_70 = (uint)(short)((ushort)bVar2 << 8);
                                    uVar15 = (int)(short)((ushort)pbVar21[2] << 8) |
                                             (uint)pbVar21[3];
                                    uVar18 = (int)(short)((ushort)pbVar21[4] << 8) |
                                             (uint)pbVar21[5];
                                    sVar6 = (short)uVar15;
                                    sVar17 = (short)uVar18;
                                    iVar9 = uVar15 << 2;
                                    if (sVar17 < sVar6) {
                                      iVar9 = 0;
                                    }
                                    if (sVar6 < (short)(*pbVar1 | local_70)) {
                                      iVar9 = 0;
                                    }
                                    iVar16 = iVar9;
                                    if (0 < sVar17) {
                                      iVar16 = 0;
                                    }
                                    pbVar21 = pbVar21 + 6;
                                    if (-1 < (short)((ushort)bVar2 << 8)) {
                                      iVar16 = iVar9;
                                    }
                                    piVar12[-2] = (*pbVar1 | local_70) << 2;
                                    piVar12[-1] = iVar16;
                                    *piVar12 = uVar18 << 2;
                                    uVar13 = uVar13 + 1;
                                    piVar12 = piVar12 + 3;
                                  } while (uVar13 < (ushort)param_3[4]);
                                }
                                local_68 = local_68 + 1;
                              } while (local_68 != local_60);
                            }
                            FUN_14012dd58(lVar3);
                            local_80 = &local_4c;
                            local_88 = 0;
                            uVar11 = FUN_140128c13(uVar4,0x20,0,uVar20);
                            *(undefined8 *)(param_3 + 2) = uVar11;
                            if (local_4c == 0) {
                              *param_3 = uVar20;
                              local_68 = 0;
                              do {
                                puVar22 = (uint *)(local_68 * 0x20 + *(longlong *)(param_3 + 2));
                                local_4c = FUN_14012d612(lVar3,*(int *)(lVar10 + local_68 * 4) +
                                                               param_2);
                                if (local_4c != 0) goto LAB_140140f23;
                                uVar8 = FUN_14012d676(lVar3,&local_4c);
                                local_6c = CONCAT22(local_6c._2_2_,uVar8);
                                if (local_4c != 0) goto LAB_140140f23;
                                local_70 = FUN_14012d676(lVar3,&local_4c);
                                if (local_4c != 0) goto LAB_140140f23;
                                uVar7 = FUN_14012d676(lVar3,&local_4c);
                                if (local_4c != 0) goto LAB_140140f23;
                                uVar20 = local_70 & 0x7fff;
                                uVar19 = (ushort)uVar20;
                                if ((uVar7 < uVar19) || (param_3[5] < (uint)uVar7))
                                goto LAB_140140f0f;
                                local_80 = &local_4c;
                                local_88 = 0;
                                uVar11 = FUN_140128c13(uVar4,4,0,(uint)uVar7);
                                *(undefined8 *)(puVar22 + 2) = uVar11;
                                if (local_4c != 0) goto LAB_140140f23;
                                puVar22[1] = (uint)uVar7;
                                *(ushort *)(puVar22 + 6) = uVar19;
                                *(byte *)((longlong)puVar22 + 0x1a) = (byte)(local_70 >> 8) >> 7;
                                local_70 = local_70 >> 0xf & 1;
                                local_4c = FUN_14012dc34(lVar3);
                                if (local_4c != 0) goto LAB_140140f0f;
                                if (puVar22[1] != 0) {
                                  lVar5 = *(longlong *)(lVar3 + 0x38);
                                  lVar14 = *(longlong *)(puVar22 + 2);
                                  uVar13 = 0;
                                  do {
                                    uVar19 = *(ushort *)(lVar5 + uVar13 * 2);
                                    *(uint *)(lVar14 + uVar13 * 4) =
                                         (uint)(ushort)(uVar19 << 8 | uVar19 >> 8);
                                    lVar14 = *(longlong *)(puVar22 + 2);
                                    if (param_3[5] <= *(uint *)(lVar14 + uVar13 * 4)) {
                                      FUN_14012dd58(lVar3);
                                      goto LAB_140140f0f;
                                    }
                                    uVar13 = uVar13 + 1;
                                  } while (uVar13 < puVar22[1]);
                                }
                                local_6c = local_6c & 0xffff;
                                FUN_14012dd58(lVar3);
                                uVar15 = local_6c;
                                local_80 = &local_4c;
                                local_88 = 0;
                                uVar11 = FUN_14012b8aa(uVar4,uVar7 + uVar20 <<
                                                             ((byte)local_70 & 0x1f),0);
                                *(undefined8 *)(puVar22 + 4) = uVar11;
                                if (local_4c != 0) goto LAB_140140f23;
                                iVar9 = FUN_14012d656(lVar3,uVar11);
                                if (iVar9 != 0) goto LAB_140140f0f;
                                *puVar22 = uVar15;
                                local_68 = local_68 + 1;
                                local_4c = 0;
                              } while (local_68 != local_58);
                              local_4c = 0;
                            }
                            goto LAB_140140f23;
                          }
                        }
LAB_140140f0f:
                        local_4c = 8;
                      }
                    }
                  }
                }
              }
              goto LAB_140140f23;
            }
            goto LAB_140140f19;
          }
        }
      }
      else {
LAB_140140f19:
        local_4c = 8;
      }
    }
  }
  lVar10 = 0;
LAB_140140f23:
  FUN_140128b39(uVar4,lVar10);
  if (DAT_140f17b40 == (local_48 ^ (ulonglong)auStack_a8)) {
    return local_4c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_48 ^ (ulonglong)auStack_a8);
}

