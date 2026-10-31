/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101e5ca3 */

int FUN_101e5ca3(int param_1,int param_2,uint *param_3)

{
  byte bVar1;
  int iVar2;
  short sVar3;
  undefined2 uVar4;
  ushort uVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int *piVar11;
  short sVar12;
  uint uVar13;
  byte *pbVar14;
  int iVar15;
  undefined4 local_48;
  uint *local_44;
  int *local_40;
  uint local_3c;
  int *local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  byte *local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_48;
  iVar2 = *(int *)(param_1 + 0x68);
  uVar9 = *(undefined4 *)(iVar2 + 0x1c);
  iVar8 = *(int *)(param_1 + 0x2e0);
  local_18 = FUN_101c461e(iVar2,param_2);
  iVar15 = 0;
  if (local_18 == 0) {
    local_48 = uVar9;
    sVar3 = FUN_101c4692(iVar2,&local_18);
    uVar9 = local_48;
    if (local_18 == 0) {
      if (sVar3 == 1) {
        puVar6 = (uint *)FUN_101c4970(iVar2,&local_18);
        if ((local_18 != 0) ||
           (local_44 = puVar6, uVar7 = FUN_101c4692(iVar2,&local_18), local_18 != 0))
        goto LAB_101e5e96;
        piVar11 = (int *)(uVar7 & 0xffff);
        if (piVar11 != (int *)0x0) {
          local_38 = piVar11;
          iVar15 = FUN_101c2a50(uVar9,4,0,piVar11,0,&local_18);
          if ((local_18 == 0) && (local_18 = FUN_101c4b69(iVar2,(int)local_38 * 4), local_18 == 0))
          {
            iVar10 = *(int *)(iVar2 + 0x20);
            piVar11 = (int *)0x0;
            do {
              uVar7 = *(uint *)(iVar10 + (int)piVar11 * 4);
              *(uint *)(iVar15 + (int)piVar11 * 4) =
                   uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
              piVar11 = (int *)((int)piVar11 + 1);
            } while (local_38 != piVar11);
            FUN_101c4c66(iVar2);
            local_18 = FUN_101c461e(iVar2,(int)local_44 + param_2);
            if ((local_18 == 0) && (uVar4 = FUN_101c4692(iVar2,&local_18), local_18 == 0)) {
              local_44 = (uint *)CONCAT22(local_44._2_2_,uVar4);
              uVar5 = FUN_101c4692(iVar2,&local_18);
              if (local_18 == 0) {
                local_20 = (uint)local_44 & 0xffff;
                if ((**(uint **)(iVar8 + 0xc) == local_20) &&
                   (*(undefined2 *)(param_3 + 2) = local_44._0_2_, -1 < (short)uVar5)) {
                  local_2c = (uint)uVar5;
                  uVar7 = FUN_101c00c3(local_48,4,0,local_2c,0,&local_18);
                  param_3[4] = uVar7;
                  uVar9 = local_48;
                  if (local_18 != 0) goto LAB_101e5e96;
                  param_3[3] = local_2c;
                  iVar8 = FUN_101c4b69(iVar2,local_20 * local_2c * 6);
                  if (iVar8 == 0) {
                    local_18 = 0;
                    if (local_2c != 0) {
                      pbVar14 = *(byte **)(iVar2 + 0x20);
                      local_34 = 0;
                      do {
                        uVar9 = FUN_101c00c3(local_48,0xc,0,local_20,0,&local_18);
                        *(undefined4 *)(param_3[4] + local_34 * 4) = uVar9;
                        if (local_18 != 0) {
                          FUN_101c4c66(iVar2);
                          uVar9 = local_48;
                          goto LAB_101e5e96;
                        }
                        if ((short)param_3[2] != 0) {
                          local_40 = (int *)(*(int *)(param_3[4] + local_34 * 4) + 8);
                          local_3c = 0;
                          do {
                            local_1c = pbVar14;
                            bVar1 = *local_1c;
                            local_30 = (uint)(short)((ushort)bVar1 << 8);
                            local_24 = local_1c[1] | local_30;
                            uVar7 = (int)(short)((ushort)local_1c[2] << 8) | (uint)local_1c[3];
                            sVar3 = (short)uVar7;
                            local_44 = (uint *)CONCAT22(local_44._2_2_,sVar3);
                            uVar13 = (int)(short)((ushort)local_1c[4] << 8) | (uint)local_1c[5];
                            local_28 = local_24 << 2;
                            iVar8 = uVar7 << 2;
                            sVar12 = (short)uVar13;
                            if (sVar12 < sVar3) {
                              iVar8 = 0;
                            }
                            if (sVar3 < (short)local_24) {
                              iVar8 = 0;
                            }
                            iVar10 = iVar8;
                            if (0 < sVar12) {
                              iVar10 = 0;
                            }
                            local_40[-2] = local_28;
                            if (-1 < (short)((ushort)bVar1 << 8)) {
                              iVar10 = iVar8;
                            }
                            local_40[-1] = iVar10;
                            pbVar14 = local_1c + 6;
                            *local_40 = uVar13 << 2;
                            local_3c = local_3c + 1;
                            local_40 = local_40 + 3;
                          } while (local_3c < (ushort)param_3[2]);
                        }
                        local_34 = local_34 + 1;
                      } while (local_34 != local_2c);
                    }
                    FUN_101c4c66(iVar2);
                    uVar7 = FUN_101c00c3(local_48,0x14,0,local_38,0,&local_18);
                    param_3[1] = uVar7;
                    uVar9 = local_48;
                    if (local_18 == 0) {
                      *param_3 = (uint)local_38;
                      local_40 = (int *)0x0;
                      do {
                        local_44 = (uint *)((int)local_40 * 0x14 + param_3[1]);
                        local_18 = FUN_101c461e(iVar2,*(int *)(iVar15 + (int)local_40 * 4) + param_2
                                               );
                        uVar9 = local_48;
                        if (local_18 != 0) goto LAB_101e5e96;
                        uVar4 = FUN_101c4692(iVar2,&local_18);
                        local_24 = CONCAT22(local_24._2_2_,uVar4);
                        uVar9 = local_48;
                        if (((local_18 != 0) ||
                            (uVar7 = FUN_101c4692(iVar2,&local_18), uVar9 = local_48, local_18 != 0)
                            ) || (uVar5 = FUN_101c4692(iVar2,&local_18), uVar9 = local_48,
                                 local_18 != 0)) goto LAB_101e5e96;
                        local_30 = uVar7 & 0x7fff;
                        if ((uVar5 < (ushort)local_30) ||
                           (local_3c = (uint)uVar5, param_3[3] < local_3c)) goto LAB_101e5e81;
                        uVar13 = FUN_101c00c3(local_48,4,0,local_3c,0,&local_18);
                        local_44[2] = uVar13;
                        uVar9 = local_48;
                        if (local_18 != 0) goto LAB_101e5e96;
                        local_28 = (uVar7 & 0xffff) >> 0xf;
                        local_44[1] = local_3c;
                        *(short *)(local_44 + 4) = (short)local_30;
                        *(char *)((int)local_44 + 0x12) = (char)local_28;
                        local_18 = FUN_101c4b69(iVar2,local_3c * 2);
                        if (local_18 != 0) goto LAB_101e5e81;
                        if (local_44[1] != 0) {
                          iVar8 = *(int *)(iVar2 + 0x20);
                          uVar7 = local_44[2];
                          uVar13 = 0;
                          do {
                            uVar5 = *(ushort *)(iVar8 + uVar13 * 2);
                            *(uint *)(uVar7 + uVar13 * 4) = (uint)(ushort)(uVar5 << 8 | uVar5 >> 8);
                            uVar7 = local_44[2];
                            if (param_3[3] <= *(uint *)(uVar7 + uVar13 * 4)) {
                              FUN_101c4c66(iVar2);
                              goto LAB_101e5e81;
                            }
                            uVar13 = uVar13 + 1;
                          } while (uVar13 < local_44[1]);
                        }
                        uVar13 = local_24 & 0xffff;
                        FUN_101c4c66(iVar2);
                        iVar8 = local_3c + local_30 << ((byte)local_28 & 0x1f);
                        uVar7 = FUN_101c2a50(local_48,iVar8,0,uVar13,0,&local_18);
                        local_44[3] = uVar7;
                        uVar9 = local_48;
                        if (local_18 != 0) goto LAB_101e5e96;
                        iVar8 = FUN_101c4659(iVar2,uVar7,iVar8 * uVar13);
                        if (iVar8 != 0) goto LAB_101e5e81;
                        *local_44 = uVar13;
                        local_40 = (int *)((int)local_40 + 1);
                        local_18 = 0;
                      } while (local_40 != local_38);
                      local_18 = 0;
                      uVar9 = local_48;
                    }
                    goto LAB_101e5e96;
                  }
                }
LAB_101e5e81:
                local_18 = 8;
                uVar9 = local_48;
              }
            }
          }
          goto LAB_101e5e96;
        }
      }
      local_18 = 8;
    }
  }
LAB_101e5e96:
  FUN_101c0017(uVar9,iVar15);
  if (DAT_10388d00 != (local_14 ^ (uint)&local_48)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return local_18;
}

