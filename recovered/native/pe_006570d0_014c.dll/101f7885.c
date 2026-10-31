/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101f7885 */

int __fastcall FUN_101f7885(int *param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int *piVar2;
  short sVar3;
  ushort uVar4;
  undefined2 uVar5;
  short sVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int *local_4c;
  int local_48;
  uint local_44;
  short local_3e;
  uint local_3c;
  uint local_38;
  ushort local_32;
  uint local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_4c;
  uVar1 = *(undefined4 *)(param_2 + 0x1c);
  if (param_4 == 0) {
    local_18 = 0;
    iVar8 = 0;
    local_4c = param_1;
  }
  else {
    local_18 = FUN_101c461e(param_2,param_4 + param_3);
    iVar8 = 0;
    if ((local_18 == 0) && (local_18 = FUN_101c4672(param_2,2), local_18 == 0)) {
      local_28 = FUN_101c4a88(param_2);
      sVar3 = FUN_101c4692(param_2,&local_18);
      iVar8 = 0;
      if (local_18 == 0) {
        if (sVar3 == 1) {
          uVar7 = FUN_101c4970(param_2,&local_18);
          iVar8 = 0;
          if (local_18 == 0) {
            local_44 = uVar7;
            uVar4 = FUN_101c4692(param_2,&local_18);
            if (local_18 == 0) {
              uVar7 = (uint)uVar4;
              local_4c = param_1;
              local_32 = uVar4;
              iVar8 = FUN_101c2a50(uVar1,4,0,uVar7,0,&local_18);
              if (local_18 == 0) {
                local_38 = uVar7;
                if (uVar7 != 0) {
                  uVar7 = 0;
                  do {
                    uVar9 = FUN_101c4970(param_2,&local_18);
                    *(undefined4 *)(iVar8 + uVar7 * 4) = uVar9;
                    if (local_18 != 0) goto LAB_101f7a30;
                    uVar7 = uVar7 + 1;
                  } while (local_38 != uVar7);
                }
                local_18 = FUN_101c461e(param_2,local_44 + local_28);
                if (local_18 == 0) {
                  uVar5 = FUN_101c4692(param_2,&local_18);
                  *(undefined2 *)(local_4c + 2) = uVar5;
                  if ((local_18 == 0) &&
                     (uVar7 = FUN_101c4692(param_2,&local_18), piVar2 = local_4c, local_18 == 0)) {
                    local_30 = uVar7 & 0xffff;
                    local_4c[3] = 0;
                    local_48 = iVar8;
                    iVar8 = FUN_101c2a50(uVar1,4,0,local_30,0,&local_18);
                    piVar2[4] = iVar8;
                    iVar8 = local_48;
                    if (local_18 == 0) {
                      if (local_30 != 0) {
                        local_44 = (uint)*(ushort *)(local_4c + 2);
                        local_3c = 0;
                        do {
                          iVar10 = local_4c[4];
                          uVar9 = FUN_101c2a50(uVar1,0xc,0,local_44,0,&local_18);
                          *(undefined4 *)(iVar10 + local_3c * 4) = uVar9;
                          iVar8 = local_48;
                          local_24 = iVar10;
                          if (local_18 != 0) goto LAB_101f7a30;
                          local_4c[3] = local_4c[3] + 1;
                          local_44 = 0;
                          if ((short)local_4c[2] != 0) {
                            local_2c = 8;
                            uVar7 = local_44;
                            do {
                              local_44 = uVar7;
                              local_1c = *(int *)(local_24 + local_3c * 4);
                              sVar3 = FUN_101c4692(param_2,&local_18);
                              iVar8 = local_48;
                              if (((local_18 != 0) ||
                                  (local_3e = FUN_101c4692(param_2,&local_18), iVar8 = local_48,
                                  local_18 != 0)) ||
                                 (sVar6 = FUN_101c4692(param_2,&local_18), iVar8 = local_48,
                                 local_18 != 0)) goto LAB_101f7a30;
                              local_20 = (int)sVar3;
                              iVar8 = (int)local_3e << 2;
                              if (sVar6 < local_3e) {
                                iVar8 = 0;
                              }
                              if (local_3e < sVar3) {
                                iVar8 = 0;
                              }
                              iVar10 = iVar8;
                              if (0 < sVar6) {
                                iVar10 = 0;
                              }
                              if (-1 < sVar3) {
                                iVar10 = iVar8;
                              }
                              *(int *)(local_1c + -8 + local_2c) = local_20 << 2;
                              *(int *)(local_1c + -4 + local_2c) = iVar10;
                              *(int *)(local_1c + local_2c) = (int)sVar6 << 2;
                              uVar7 = local_44 + 1;
                              local_44 = (uint)*(ushort *)(local_4c + 2);
                              local_2c = local_2c + 0xc;
                            } while (uVar7 < local_44);
                          }
                          local_3c = local_3c + 1;
                        } while (local_3c != local_30);
                      }
                      piVar2 = local_4c;
                      *local_4c = 0;
                      iVar8 = FUN_101c2a50(uVar1,8,0,local_38,0,&local_18);
                      piVar2[1] = iVar8;
                      iVar8 = local_48;
                      if (local_18 == 0) {
                        if (local_32 != 0) {
                          uVar7 = 0;
                          do {
                            local_44 = local_4c[1];
                            local_18 = FUN_101c461e(param_2,*(int *)(local_48 + uVar7 * 4) +
                                                            local_28);
                            iVar8 = local_48;
                            if ((local_18 != 0) ||
                               (local_18 = FUN_101c4672(param_2,4), iVar8 = local_48, local_18 != 0)
                               ) goto LAB_101f7a30;
                            uVar11 = FUN_101c4692(param_2,&local_18);
                            *(uint *)(local_44 + uVar7 * 8) = uVar11 & 0xffff;
                            iVar8 = local_48;
                            if (local_18 != 0) goto LAB_101f7a30;
                            uVar9 = FUN_101c2a50(uVar1,4,0,uVar11 & 0xffff,0,&local_18);
                            *(undefined4 *)(local_44 + 4 + uVar7 * 8) = uVar9;
                            iVar8 = local_48;
                            if (local_18 != 0) goto LAB_101f7a30;
                            *local_4c = *local_4c + 1;
                            if (*(int *)(local_44 + uVar7 * 8) != 0) {
                              uVar11 = 0;
                              do {
                                uVar12 = FUN_101c4692(param_2,&local_18);
                                *(uint *)(*(int *)(local_44 + 4 + uVar7 * 8) + uVar11 * 4) =
                                     uVar12 & 0xffff;
                                iVar8 = local_48;
                                if (local_18 != 0) goto LAB_101f7a30;
                                uVar11 = uVar11 + 1;
                              } while (uVar11 < *(uint *)(local_44 + uVar7 * 8));
                            }
                            uVar7 = uVar7 + 1;
                          } while (uVar7 != local_38);
                        }
                        local_18 = 0;
                        iVar8 = local_48;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else {
          iVar8 = 0;
          local_18 = 3;
          local_4c = param_1;
        }
      }
    }
  }
LAB_101f7a30:
  FUN_101c0017(uVar1,iVar8);
  if (local_18 == 0) {
    iVar8 = 0;
  }
  else {
    FUN_101f863c();
    iVar8 = local_18;
  }
  if (DAT_10388d00 != (local_14 ^ (uint)&local_4c)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return iVar8;
}

