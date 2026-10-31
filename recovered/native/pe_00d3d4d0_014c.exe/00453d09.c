/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00453d09 */

int __fastcall FUN_00453d09(int param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  int *piVar6;
  uint *puVar7;
  int local_4c;
  int *local_48;
  uint local_44;
  uint local_40;
  int local_3c;
  byte *local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_4c;
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = *(int *)(iVar1 + 0x17c);
  local_4c = 6;
  iVar3 = local_4c;
  if (iVar2 != 0) {
    puVar7 = (uint *)(param_3 * 0x10 + *(int *)(iVar1 + 0x1a0));
    local_48 = *(int **)(iVar1 + 0x68);
    puVar5 = (uint *)(*(int *)(iVar1 + 0x184) + 0x1c);
    do {
      local_3c = param_1;
      if ((puVar5[-7] == (uint)*(ushort *)(param_2 + 0xc)) &&
         (puVar5[-6] == (uint)*(ushort *)(param_2 + 0xe))) {
        local_44 = puVar5[-5];
        iVar3 = FUN_00420696((int)local_48,puVar5[-1] + *(int *)(iVar1 + 0x1b0));
        if (iVar3 == 0) {
          iVar2 = (local_44 & 1) + 5;
          if ((local_44 & 2) == 0) {
            iVar2 = (local_44 & 1) + 4;
          }
          iVar3 = FUN_00420be1(local_48,(iVar2 + (uint)((local_44 >> 2 & 1) != 0)) * *puVar5);
          if (iVar3 == 0) {
            FUN_004540ac((byte *)local_48[8],(byte *)local_48[9],*puVar5,puVar5 + -5,*puVar7,
                         &local_18,&local_1c);
            piVar6 = local_48;
            FUN_00420cde(local_48);
            iVar3 = local_4c;
            if (local_1c != 0) {
              local_44 = local_1c;
              local_20 = 0;
              local_24 = 0;
              local_2c = 0;
              local_30 = 0;
              local_34 = 0;
              uVar4 = puVar7[1];
              if (*(uint *)(iVar1 + 0x130) != *(uint *)(iVar1 + 300)) {
                uVar4 = FUN_0041dcda(uVar4,*(uint *)(iVar1 + 300),*(uint *)(iVar1 + 0x130));
              }
              *(uint *)(local_3c + 0x38) = uVar4;
              uVar4 = FUN_0041dcda((uint)*(ushort *)(param_2 + 0xc) << 8,puVar7[1],
                                   *(uint *)(iVar1 + 0x130));
              local_28 = uVar4;
              iVar3 = FUN_00420696((int)piVar6,local_18 + *(int *)(iVar1 + 0xbc));
              if ((iVar3 == 0) && (iVar3 = FUN_00420be1(piVar6,local_44), iVar3 == 0)) {
                local_38 = (byte *)piVar6[8];
                iVar2 = FUN_00454220((uint *)&local_38,(ushort *)piVar6[9],uVar4,&local_20,&local_24
                                     ,&local_2c,&local_30,&local_28,&local_34);
                piVar6 = local_48;
                if (iVar2 == 0) {
                  if (local_34 == 2) {
                    local_40 = local_34;
                    local_4c = 8;
                    uVar4 = local_44 + 1 >> 1;
                    iVar2 = local_4c;
                    if (local_30 * local_2c < uVar4 * 0xff ||
                        local_30 * local_2c + uVar4 * -0xff == 0) goto LAB_00453f8f;
                  }
                  else if (local_34 == 1) {
                    local_40 = local_34;
                    local_4c = 8;
                    iVar2 = local_4c;
                    if (local_30 * local_2c < local_44 * 0xf ||
                        local_30 * local_2c + local_44 * -0xf == 0) goto LAB_00453f8f;
                  }
                  else {
                    local_4c = 8;
                    iVar2 = local_4c;
                    if ((local_34 == 0) &&
                       (local_40 = local_34, local_30 * local_2c + 7 >> 3 <= local_44)) {
LAB_00453f8f:
                      local_40 = local_34;
                      local_4c = 0x17;
                      iVar2 = local_4c;
                      if (-1 < (int)local_30) {
                        local_44 = local_24;
                        if ((int)local_24 <= (int)(local_30 ^ 0x7fffffff)) {
                          *(undefined4 *)(local_3c + 0x48) = 0x62697473;
                          *(uint *)(local_3c + 0x50) = local_2c;
                          *(uint *)(local_3c + 0x4c) = local_30;
                          *(int *)(local_3c + 0x54) = (int)(local_2c + 7) >> 3;
                          *(undefined1 *)(local_3c + 0x5e) = 1;
                          *(uint *)(local_3c + 0x18) = local_2c * 0x40;
                          *(uint *)(local_3c + 0x1c) = local_30 << 6;
                          *(uint *)(local_3c + 0x20) = local_20 << 6;
                          *(uint *)(local_3c + 0x24) = local_24 << 6;
                          *(uint *)(local_3c + 0x28) = ((int)local_28 >> 2) + 0x20U & 0xffffffc0;
                          *(int *)(local_3c + 0x2c) = (int)(local_2c * -0x40) >> 1;
                          *(undefined4 *)(local_3c + 0x30) = 0;
                          *(undefined4 *)(local_3c + 0x34) = *(undefined4 *)(param_2 + 0x20);
                          *(uint *)(local_3c + 100) = local_20;
                          *(uint *)(local_3c + 0x68) = local_24 + local_30;
                          local_4c = 0;
                          iVar2 = local_4c;
                          if ((param_4 == '\0') &&
                             (iVar2 = FUN_0041d47e(local_3c), piVar6 = local_48, iVar2 == 0)) {
                            FUN_004544c7(local_38,(byte *)local_48[9],local_40,
                                         *(byte *)(iVar1 + 0xd0) >> 1 & 1,(int *)(local_3c + 0x4c));
                            iVar2 = local_4c;
                          }
                        }
                      }
                    }
                  }
                }
                local_4c = iVar2;
                FUN_00420cde(piVar6);
                iVar3 = local_4c;
              }
            }
          }
        }
        break;
      }
      puVar5 = puVar5 + 9;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  local_4c = iVar3;
  if (DAT_0050e8c0 != (local_14 ^ (uint)&local_4c)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&local_4c);
  }
  return local_4c;
}

