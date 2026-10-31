/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14003ec6f */

int FUN_14003ec6f(longlong param_1,uint param_2,uint *param_3)

{
  byte bVar1;
  longlong *plVar2;
  longlong lVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  int *piVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  short sVar19;
  short sVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  ushort uVar24;
  byte *pbVar25;
  uint *puVar26;
  undefined1 auStackY_a8 [32];
  ulonglong local_68;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStackY_a8;
  plVar2 = *(longlong **)(param_1 + 0xa0);
  lVar3 = plVar2[6];
  lVar11 = *(longlong *)(param_1 + 0x408);
  uVar9 = FUN_140020a41((longlong)plVar2,param_2);
  local_4c = (int)uVar9;
  if (local_4c == 0) {
    uVar4 = FUN_140020aa5(plVar2,&local_4c);
    if (local_4c == 0) {
      if (uVar4 == 1) {
        uVar7 = FUN_140020e0f(plVar2,&local_4c);
        if (local_4c == 0) {
          uVar4 = FUN_140020aa5(plVar2,&local_4c);
          if (local_4c == 0) {
            if (uVar4 != 0) {
              uVar22 = (uint)uVar4;
              lVar10 = FUN_14001f231(lVar3,4,0,(uint)uVar4,0,&local_4c);
              if (local_4c == 0) {
                local_4c = FUN_140021063(plVar2,(uint)uVar4 * 4);
                if (local_4c == 0) {
                  lVar15 = plVar2[7];
                  uVar14 = 0;
                  do {
                    uVar23 = *(uint *)(lVar15 + uVar14 * 4);
                    *(uint *)(lVar10 + uVar14 * 4) =
                         uVar23 >> 0x18 | (uVar23 & 0xff0000) >> 8 | (uVar23 & 0xff00) << 8 |
                         uVar23 << 0x18;
                    uVar14 = uVar14 + 1;
                  } while (uVar22 != uVar14);
                  FUN_140021187(plVar2);
                  uVar9 = FUN_140020a41((longlong)plVar2,uVar7 + param_2);
                  local_4c = (int)uVar9;
                  if (local_4c == 0) {
                    uVar4 = FUN_140020aa5(plVar2,&local_4c);
                    if (local_4c == 0) {
                      uVar5 = FUN_140020aa5(plVar2,&local_4c);
                      if (local_4c == 0) {
                        uVar7 = (uint)uVar4;
                        if ((**(uint **)(lVar11 + 0x18) == uVar7) &&
                           (*(ushort *)(param_3 + 4) = uVar4, -1 < (short)uVar5)) {
                          uVar23 = (uint)uVar5;
                          lVar11 = FUN_14001c617(lVar3,8,0,uVar23,0,&local_4c);
                          *(longlong *)(param_3 + 6) = lVar11;
                          if (local_4c != 0) goto LAB_14003ee6b;
                          param_3[5] = (uint)uVar5;
                          iVar8 = FUN_140021063(plVar2,uVar7 * uVar23 * 6);
                          if (iVar8 == 0) {
                            local_4c = 0;
                            if (uVar5 != 0) {
                              pbVar25 = (byte *)plVar2[7];
                              local_68 = 0;
                              do {
                                lVar11 = FUN_14001c617(lVar3,0xc,0,uVar7,0,&local_4c);
                                *(longlong *)(*(longlong *)(param_3 + 6) + local_68 * 8) = lVar11;
                                if (local_4c != 0) {
                                  FUN_140021187(plVar2);
                                  goto LAB_14003ee6b;
                                }
                                if ((short)param_3[4] != 0) {
                                  piVar12 = (int *)(*(longlong *)
                                                     (*(longlong *)(param_3 + 6) + local_68 * 8) + 8
                                                   );
                                  uVar14 = 0;
                                  do {
                                    bVar1 = *pbVar25;
                                    uVar17 = (uint)pbVar25[1] | (int)(short)((ushort)bVar1 << 8);
                                    uVar16 = (int)(short)((ushort)pbVar25[2] << 8) |
                                             (uint)pbVar25[3];
                                    uVar21 = (int)(short)((ushort)pbVar25[4] << 8) |
                                             (uint)pbVar25[5];
                                    sVar19 = (short)uVar16;
                                    sVar20 = (short)uVar21;
                                    iVar8 = uVar16 << 2;
                                    if (sVar20 < sVar19) {
                                      iVar8 = 0;
                                    }
                                    if (sVar19 < (short)uVar17) {
                                      iVar8 = 0;
                                    }
                                    iVar18 = iVar8;
                                    if (0 < sVar20) {
                                      iVar18 = 0;
                                    }
                                    pbVar25 = pbVar25 + 6;
                                    if (-1 < (short)((ushort)bVar1 << 8)) {
                                      iVar18 = iVar8;
                                    }
                                    piVar12[-2] = uVar17 << 2;
                                    piVar12[-1] = iVar18;
                                    *piVar12 = uVar21 << 2;
                                    uVar14 = uVar14 + 1;
                                    piVar12 = piVar12 + 3;
                                  } while (uVar14 < (ushort)param_3[4]);
                                }
                                local_68 = local_68 + 1;
                              } while (local_68 != uVar23);
                            }
                            FUN_140021187(plVar2);
                            lVar11 = FUN_14001c617(lVar3,0x20,0,uVar22,0,&local_4c);
                            *(longlong *)(param_3 + 2) = lVar11;
                            if (local_4c == 0) {
                              *param_3 = uVar22;
                              local_68 = 0;
                              do {
                                puVar26 = (uint *)(local_68 * 0x20 + *(longlong *)(param_3 + 2));
                                uVar9 = FUN_140020a41((longlong)plVar2,
                                                      *(int *)(lVar10 + local_68 * 4) + param_2);
                                local_4c = (int)uVar9;
                                if (local_4c != 0) goto LAB_14003ee6b;
                                uVar4 = FUN_140020aa5(plVar2,&local_4c);
                                if (local_4c != 0) goto LAB_14003ee6b;
                                uVar5 = FUN_140020aa5(plVar2,&local_4c);
                                if (local_4c != 0) goto LAB_14003ee6b;
                                uVar6 = FUN_140020aa5(plVar2,&local_4c);
                                if (local_4c != 0) goto LAB_14003ee6b;
                                uVar24 = (ushort)(uVar5 & 0x7fff);
                                if ((uVar6 < uVar24) || (param_3[5] < (uint)uVar6))
                                goto LAB_14003ee57;
                                lVar11 = FUN_14001c617(lVar3,4,0,(uint)uVar6,0,&local_4c);
                                *(longlong *)(puVar26 + 2) = lVar11;
                                if (local_4c != 0) goto LAB_14003ee6b;
                                puVar26[1] = (uint)uVar6;
                                *(ushort *)(puVar26 + 6) = uVar24;
                                bVar1 = (byte)(uVar5 >> 8);
                                *(byte *)((longlong)puVar26 + 0x1a) = bVar1 >> 7;
                                local_4c = FUN_140021063(plVar2,(uint)uVar6 + (uint)uVar6);
                                if (local_4c != 0) goto LAB_14003ee57;
                                if (puVar26[1] != 0) {
                                  lVar11 = plVar2[7];
                                  lVar15 = *(longlong *)(puVar26 + 2);
                                  uVar14 = 0;
                                  do {
                                    uVar24 = *(ushort *)(lVar11 + uVar14 * 2);
                                    *(uint *)(lVar15 + uVar14 * 4) =
                                         (uint)(ushort)(uVar24 << 8 | uVar24 >> 8);
                                    lVar15 = *(longlong *)(puVar26 + 2);
                                    if (param_3[5] <= *(uint *)(lVar15 + uVar14 * 4)) {
                                      FUN_140021187(plVar2);
                                      goto LAB_14003ee57;
                                    }
                                    uVar14 = uVar14 + 1;
                                  } while (uVar14 < puVar26[1]);
                                }
                                uVar7 = (uint)uVar4;
                                FUN_140021187(plVar2);
                                uVar23 = (uint)uVar6 + (uVar5 & 0x7fff) << (bVar1 >> 7);
                                puVar13 = (undefined8 *)
                                          FUN_14001f231(lVar3,uVar23,0,uVar7,0,&local_4c);
                                *(undefined8 **)(puVar26 + 4) = puVar13;
                                if (local_4c != 0) goto LAB_14003ee6b;
                                iVar8 = FUN_140020a85(plVar2,puVar13,uVar23 * uVar7);
                                if (iVar8 != 0) goto LAB_14003ee57;
                                *puVar26 = uVar7;
                                local_68 = local_68 + 1;
                                local_4c = 0;
                              } while (local_68 != uVar22);
                              local_4c = 0;
                            }
                            goto LAB_14003ee6b;
                          }
                        }
LAB_14003ee57:
                        local_4c = 8;
                      }
                    }
                  }
                }
              }
              goto LAB_14003ee6b;
            }
            goto LAB_14003ee61;
          }
        }
      }
      else {
LAB_14003ee61:
        local_4c = 8;
      }
    }
  }
  lVar10 = 0;
LAB_14003ee6b:
  FUN_14001c53d(lVar3,lVar10);
  if (DAT_14012ea80 == (local_48 ^ (ulonglong)auStackY_a8)) {
    return local_4c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_48 ^ (ulonglong)auStackY_a8);
}

