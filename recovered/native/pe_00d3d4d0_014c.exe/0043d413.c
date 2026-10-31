/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0043d413 */

int __cdecl FUN_0043d413(int param_1,uint param_2,uint *param_3)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  ushort uVar4;
  ushort uVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  short sVar11;
  short sVar12;
  uint uVar13;
  byte *pbVar14;
  int iVar15;
  int local_48;
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
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_48;
  piVar2 = *(int **)(param_1 + 0x68);
  iVar8 = piVar2[7];
  iVar9 = *(int *)(param_1 + 0x2e0);
  local_18 = FUN_00420696((int)piVar2,param_2);
  iVar15 = 0;
  if (local_18 == 0) {
    local_48 = iVar8;
    uVar4 = FUN_0042070a(piVar2,&local_18);
    iVar8 = local_48;
    if (local_18 == 0) {
      if (uVar4 == 1) {
        puVar6 = (uint *)FUN_004209e8(piVar2,&local_18);
        if ((local_18 != 0) ||
           (local_44 = puVar6, uVar4 = FUN_0042070a(piVar2,&local_18), local_18 != 0))
        goto LAB_0043d606;
        piVar10 = (int *)(uint)uVar4;
        if (piVar10 != (int *)0x0) {
          local_38 = piVar10;
          iVar15 = FUN_0041efcd(iVar8,4,0,(uint)piVar10,0,&local_18);
          if ((local_18 == 0) && (local_18 = FUN_00420be1(piVar2,(int)local_38 * 4), local_18 == 0))
          {
            iVar3 = piVar2[8];
            piVar10 = (int *)0x0;
            do {
              uVar7 = *(uint *)(iVar3 + (int)piVar10 * 4);
              *(uint *)(iVar15 + (int)piVar10 * 4) =
                   uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
              piVar10 = (int *)((int)piVar10 + 1);
            } while (local_38 != piVar10);
            FUN_00420cde(piVar2);
            local_18 = FUN_00420696((int)piVar2,(int)local_44 + param_2);
            if ((local_18 == 0) && (uVar4 = FUN_0042070a(piVar2,&local_18), local_18 == 0)) {
              local_44 = (uint *)CONCAT22(local_44._2_2_,uVar4);
              uVar4 = FUN_0042070a(piVar2,&local_18);
              if (local_18 == 0) {
                local_20 = (uint)local_44 & 0xffff;
                if ((**(uint **)(iVar9 + 0xc) == local_20) &&
                   (*(undefined2 *)(param_3 + 2) = local_44._0_2_, -1 < (short)uVar4)) {
                  local_2c = (uint)uVar4;
                  uVar7 = FUN_0041c6b3(local_48,4,0,local_2c,0,&local_18);
                  param_3[4] = uVar7;
                  iVar8 = local_48;
                  if (local_18 != 0) goto LAB_0043d606;
                  param_3[3] = local_2c;
                  iVar8 = FUN_00420be1(piVar2,local_20 * local_2c * 6);
                  if (iVar8 == 0) {
                    local_18 = 0;
                    if (local_2c != 0) {
                      pbVar14 = (byte *)piVar2[8];
                      local_34 = 0;
                      do {
                        iVar8 = FUN_0041c6b3(local_48,0xc,0,local_20,0,&local_18);
                        *(int *)(param_3[4] + local_34 * 4) = iVar8;
                        if (local_18 != 0) {
                          FUN_00420cde(piVar2);
                          iVar8 = local_48;
                          goto LAB_0043d606;
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
                            sVar11 = (short)uVar7;
                            local_44 = (uint *)CONCAT22(local_44._2_2_,sVar11);
                            uVar13 = (int)(short)((ushort)local_1c[4] << 8) | (uint)local_1c[5];
                            local_28 = local_24 << 2;
                            iVar8 = uVar7 << 2;
                            sVar12 = (short)uVar13;
                            if (sVar12 < sVar11) {
                              iVar8 = 0;
                            }
                            if (sVar11 < (short)local_24) {
                              iVar8 = 0;
                            }
                            iVar9 = iVar8;
                            if (0 < sVar12) {
                              iVar9 = 0;
                            }
                            local_40[-2] = local_28;
                            if (-1 < (short)((ushort)bVar1 << 8)) {
                              iVar9 = iVar8;
                            }
                            local_40[-1] = iVar9;
                            pbVar14 = local_1c + 6;
                            *local_40 = uVar13 << 2;
                            local_3c = local_3c + 1;
                            local_40 = local_40 + 3;
                          } while (local_3c < (ushort)param_3[2]);
                        }
                        local_34 = local_34 + 1;
                      } while (local_34 != local_2c);
                    }
                    FUN_00420cde(piVar2);
                    uVar7 = FUN_0041c6b3(local_48,0x14,0,(uint)local_38,0,&local_18);
                    param_3[1] = uVar7;
                    iVar8 = local_48;
                    if (local_18 == 0) {
                      *param_3 = (uint)local_38;
                      local_40 = (int *)0x0;
                      do {
                        local_44 = (uint *)((int)local_40 * 0x14 + param_3[1]);
                        local_18 = FUN_00420696((int)piVar2,
                                                *(int *)(iVar15 + (int)local_40 * 4) + param_2);
                        iVar8 = local_48;
                        if (local_18 != 0) goto LAB_0043d606;
                        uVar4 = FUN_0042070a(piVar2,&local_18);
                        local_24 = CONCAT22(local_24._2_2_,uVar4);
                        iVar8 = local_48;
                        if (local_18 != 0) goto LAB_0043d606;
                        uVar4 = FUN_0042070a(piVar2,&local_18);
                        iVar8 = local_48;
                        if ((local_18 != 0) ||
                           (uVar5 = FUN_0042070a(piVar2,&local_18), iVar8 = local_48, local_18 != 0)
                           ) goto LAB_0043d606;
                        local_30 = uVar4 & 0x7fff;
                        if ((uVar5 < (ushort)local_30) ||
                           (local_3c = (uint)uVar5, param_3[3] < local_3c)) goto LAB_0043d5f1;
                        uVar7 = FUN_0041c6b3(local_48,4,0,local_3c,0,&local_18);
                        local_44[2] = uVar7;
                        iVar8 = local_48;
                        if (local_18 != 0) goto LAB_0043d606;
                        local_28 = (uint)(uVar4 >> 0xf);
                        local_44[1] = local_3c;
                        *(short *)(local_44 + 4) = (short)local_30;
                        *(byte *)((int)local_44 + 0x12) = (byte)(uVar4 >> 0xf);
                        local_18 = FUN_00420be1(piVar2,local_3c * 2);
                        if (local_18 != 0) goto LAB_0043d5f1;
                        if (local_44[1] != 0) {
                          iVar8 = piVar2[8];
                          uVar7 = local_44[2];
                          uVar13 = 0;
                          do {
                            uVar4 = *(ushort *)(iVar8 + uVar13 * 2);
                            *(uint *)(uVar7 + uVar13 * 4) = (uint)(ushort)(uVar4 << 8 | uVar4 >> 8);
                            uVar7 = local_44[2];
                            if (param_3[3] <= *(uint *)(uVar7 + uVar13 * 4)) {
                              FUN_00420cde(piVar2);
                              goto LAB_0043d5f1;
                            }
                            uVar13 = uVar13 + 1;
                          } while (uVar13 < local_44[1]);
                        }
                        uVar13 = local_24 & 0xffff;
                        FUN_00420cde(piVar2);
                        uVar7 = local_3c + local_30 << ((byte)local_28 & 0x1f);
                        puVar6 = (uint *)FUN_0041efcd(local_48,uVar7,0,uVar13,0,&local_18);
                        local_44[3] = (uint)puVar6;
                        iVar8 = local_48;
                        if (local_18 != 0) goto LAB_0043d606;
                        iVar8 = FUN_004206d1(piVar2,puVar6,uVar7 * uVar13);
                        if (iVar8 != 0) goto LAB_0043d5f1;
                        *local_44 = uVar13;
                        local_40 = (int *)((int)local_40 + 1);
                        local_18 = 0;
                      } while (local_40 != local_38);
                      local_18 = 0;
                      iVar8 = local_48;
                    }
                    goto LAB_0043d606;
                  }
                }
LAB_0043d5f1:
                local_18 = 8;
                iVar8 = local_48;
              }
            }
          }
          goto LAB_0043d606;
        }
      }
      local_18 = 8;
    }
  }
LAB_0043d606:
  FUN_0041c607(iVar8,iVar15);
  if (DAT_0050e8c0 != (local_14 ^ (uint)&local_48)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&local_48);
  }
  return local_18;
}

