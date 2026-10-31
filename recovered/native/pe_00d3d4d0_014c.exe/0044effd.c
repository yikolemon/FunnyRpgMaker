/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0044effd */

int __fastcall FUN_0044effd(uint *param_1,int *param_2,int param_3,int param_4)

{
  uint *puVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint *local_4c;
  int local_48;
  uint local_44;
  ushort local_3e;
  uint local_3c;
  uint local_38;
  ushort local_32;
  uint local_30;
  int local_2c;
  int local_28;
  uint local_24;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_4c;
  iVar7 = param_2[7];
  if (param_4 == 0) {
    local_18 = 0;
    iVar5 = 0;
    local_4c = param_1;
  }
  else {
    local_18 = FUN_00420696((int)param_2,param_4 + param_3);
    iVar5 = 0;
    if ((local_18 == 0) && (local_18 = FUN_004206ea((int)param_2,2), local_18 == 0)) {
      local_28 = FUN_00420b00((int)param_2);
      uVar2 = FUN_0042070a(param_2,&local_18);
      iVar5 = 0;
      if (local_18 == 0) {
        if (uVar2 == 1) {
          uVar4 = FUN_004209e8(param_2,&local_18);
          iVar5 = 0;
          if (local_18 == 0) {
            local_44 = uVar4;
            uVar2 = FUN_0042070a(param_2,&local_18);
            if (local_18 == 0) {
              uVar4 = (uint)uVar2;
              local_4c = param_1;
              local_32 = uVar2;
              iVar5 = FUN_0041efcd(iVar7,4,0,uVar4,0,&local_18);
              param_1 = local_4c;
              if (local_18 == 0) {
                local_38 = uVar4;
                if (uVar4 != 0) {
                  uVar4 = 0;
                  do {
                    uVar6 = FUN_004209e8(param_2,&local_18);
                    *(uint *)(iVar5 + uVar4 * 4) = uVar6;
                    param_1 = local_4c;
                    if (local_18 != 0) goto LAB_0044f1a8;
                    uVar4 = uVar4 + 1;
                  } while (local_38 != uVar4);
                }
                local_18 = FUN_00420696((int)param_2,local_44 + local_28);
                param_1 = local_4c;
                if (local_18 == 0) {
                  uVar2 = FUN_0042070a(param_2,&local_18);
                  *(ushort *)(local_4c + 2) = uVar2;
                  param_1 = local_4c;
                  if ((local_18 == 0) &&
                     (uVar2 = FUN_0042070a(param_2,&local_18), puVar1 = local_4c, param_1 = local_4c
                     , local_18 == 0)) {
                    local_30 = (uint)uVar2;
                    local_4c[3] = 0;
                    local_48 = iVar5;
                    uVar4 = FUN_0041efcd(iVar7,4,0,local_30,0,&local_18);
                    puVar1[4] = uVar4;
                    iVar5 = local_48;
                    param_1 = local_4c;
                    if (local_18 == 0) {
                      if (local_30 != 0) {
                        local_44 = (uint)(ushort)local_4c[2];
                        local_3c = 0;
                        do {
                          uVar4 = local_4c[4];
                          iVar5 = FUN_0041efcd(iVar7,0xc,0,local_44,0,&local_18);
                          *(int *)(uVar4 + local_3c * 4) = iVar5;
                          iVar5 = local_48;
                          param_1 = local_4c;
                          local_24 = uVar4;
                          if (local_18 != 0) goto LAB_0044f1a8;
                          local_4c[3] = local_4c[3] + 1;
                          local_44 = 0;
                          if ((short)local_4c[2] != 0) {
                            local_2c = 8;
                            uVar4 = local_44;
                            do {
                              local_44 = uVar4;
                              local_1c = *(int *)(local_24 + local_3c * 4);
                              uVar2 = FUN_0042070a(param_2,&local_18);
                              iVar5 = local_48;
                              param_1 = local_4c;
                              if (((local_18 != 0) ||
                                  (local_3e = FUN_0042070a(param_2,&local_18), iVar5 = local_48,
                                  param_1 = local_4c, local_18 != 0)) ||
                                 (uVar3 = FUN_0042070a(param_2,&local_18), iVar5 = local_48,
                                 param_1 = local_4c, local_18 != 0)) goto LAB_0044f1a8;
                              local_20 = (int)(short)uVar2;
                              iVar5 = (int)(short)local_3e << 2;
                              if ((short)uVar3 < (short)local_3e) {
                                iVar5 = 0;
                              }
                              if ((short)local_3e < (short)uVar2) {
                                iVar5 = 0;
                              }
                              iVar8 = iVar5;
                              if (0 < (short)uVar3) {
                                iVar8 = 0;
                              }
                              if (-1 < (short)uVar2) {
                                iVar8 = iVar5;
                              }
                              *(int *)(local_1c + -8 + local_2c) = local_20 << 2;
                              *(int *)(local_1c + -4 + local_2c) = iVar8;
                              *(int *)(local_1c + local_2c) = (int)(short)uVar3 << 2;
                              uVar4 = local_44 + 1;
                              local_44 = (uint)(ushort)local_4c[2];
                              local_2c = local_2c + 0xc;
                            } while (uVar4 < local_44);
                          }
                          local_3c = local_3c + 1;
                        } while (local_3c != local_30);
                      }
                      puVar1 = local_4c;
                      *local_4c = 0;
                      uVar4 = FUN_0041efcd(iVar7,8,0,local_38,0,&local_18);
                      puVar1[1] = uVar4;
                      iVar5 = local_48;
                      param_1 = local_4c;
                      if (local_18 == 0) {
                        if (local_32 != 0) {
                          uVar4 = 0;
                          do {
                            local_44 = local_4c[1];
                            local_18 = FUN_00420696((int)param_2,
                                                    *(int *)(local_48 + uVar4 * 4) + local_28);
                            iVar5 = local_48;
                            param_1 = local_4c;
                            if ((local_18 != 0) ||
                               (local_18 = FUN_004206ea((int)param_2,4), iVar5 = local_48,
                               param_1 = local_4c, local_18 != 0)) goto LAB_0044f1a8;
                            uVar2 = FUN_0042070a(param_2,&local_18);
                            *(uint *)(local_44 + uVar4 * 8) = (uint)uVar2;
                            iVar5 = local_48;
                            param_1 = local_4c;
                            if (local_18 != 0) goto LAB_0044f1a8;
                            iVar5 = FUN_0041efcd(iVar7,4,0,(uint)uVar2,0,&local_18);
                            *(int *)(local_44 + 4 + uVar4 * 8) = iVar5;
                            iVar5 = local_48;
                            param_1 = local_4c;
                            if (local_18 != 0) goto LAB_0044f1a8;
                            *local_4c = *local_4c + 1;
                            if (*(int *)(local_44 + uVar4 * 8) != 0) {
                              uVar6 = 0;
                              do {
                                uVar2 = FUN_0042070a(param_2,&local_18);
                                *(uint *)(*(int *)(local_44 + 4 + uVar4 * 8) + uVar6 * 4) =
                                     (uint)uVar2;
                                iVar5 = local_48;
                                param_1 = local_4c;
                                if (local_18 != 0) goto LAB_0044f1a8;
                                uVar6 = uVar6 + 1;
                              } while (uVar6 < *(uint *)(local_44 + uVar4 * 8));
                            }
                            uVar4 = uVar4 + 1;
                          } while (uVar4 != local_38);
                        }
                        local_18 = 0;
                        iVar5 = local_48;
                        param_1 = local_4c;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else {
          iVar5 = 0;
          local_18 = 3;
          local_4c = param_1;
        }
      }
    }
  }
LAB_0044f1a8:
  FUN_0041c607(iVar7,iVar5);
  if (local_18 == 0) {
    iVar7 = 0;
  }
  else {
    FUN_0044fdb4(param_1,iVar7);
    iVar7 = local_18;
  }
  if (DAT_0050e8c0 != (local_14 ^ (uint)&local_4c)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&local_4c);
  }
  return iVar7;
}

