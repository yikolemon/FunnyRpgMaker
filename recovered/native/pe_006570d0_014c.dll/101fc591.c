/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101fc591 */

int __fastcall FUN_101fc591(int param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  undefined4 *puVar8;
  int local_4c;
  int local_48;
  uint local_44;
  int local_40;
  int local_3c;
  undefined4 local_38;
  int local_34;
  uint local_30;
  int local_2c;
  int local_28;
  uint local_24;
  int local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_4c;
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = *(int *)(iVar1 + 0x17c);
  local_4c = 6;
  iVar3 = local_4c;
  if (iVar2 != 0) {
    puVar8 = (undefined4 *)(param_3 * 0x10 + *(int *)(iVar1 + 0x1a0));
    local_48 = *(int *)(iVar1 + 0x68);
    piVar6 = (int *)(*(int *)(iVar1 + 0x184) + 0x1c);
    do {
      local_3c = param_1;
      if ((piVar6[-7] == (uint)*(ushort *)(param_2 + 0xc)) &&
         (piVar6[-6] == (uint)*(ushort *)(param_2 + 0xe))) {
        local_44 = piVar6[-5];
        iVar3 = FUN_101c461e(local_48,piVar6[-1] + *(int *)(iVar1 + 0x1b0));
        if (iVar3 == 0) {
          iVar2 = (local_44 & 1) + 5;
          if ((local_44 & 2) == 0) {
            iVar2 = (local_44 & 1) + 4;
          }
          iVar3 = FUN_101c4b69(local_48,(iVar2 + (uint)((local_44 >> 2 & 1) != 0)) * *piVar6);
          if (iVar3 == 0) {
            FUN_101fc934(*piVar6,piVar6 + -5,*puVar8,&local_18,&local_1c);
            iVar2 = local_48;
            FUN_101c4c66(local_48);
            iVar3 = local_4c;
            if (local_1c != 0) {
              local_44 = local_1c;
              local_20 = 0;
              local_24 = 0;
              local_2c = 0;
              local_30 = 0;
              local_34 = 0;
              uVar4 = puVar8[1];
              if (*(int *)(iVar1 + 0x130) != *(int *)(iVar1 + 300)) {
                uVar4 = FUN_101c16ea(uVar4,*(int *)(iVar1 + 300),*(int *)(iVar1 + 0x130));
              }
              *(undefined4 *)(local_3c + 0x38) = uVar4;
              iVar5 = FUN_101c16ea((uint)*(ushort *)(param_2 + 0xc) << 8,puVar8[1],
                                   *(undefined4 *)(iVar1 + 0x130));
              local_28 = iVar5;
              iVar3 = FUN_101c461e(iVar2,local_18 + *(int *)(iVar1 + 0xbc));
              if ((iVar3 == 0) && (iVar3 = FUN_101c4b69(iVar2,local_44), iVar3 == 0)) {
                local_38 = *(undefined4 *)(iVar2 + 0x20);
                iVar3 = FUN_101fcaa8(iVar5,&local_20,&local_24,&local_2c,&local_30,&local_28,
                                     &local_34);
                iVar2 = local_48;
                if (iVar3 == 0) {
                  if (local_34 == 2) {
                    local_40 = local_34;
                    local_4c = 8;
                    uVar7 = local_44 + 1 >> 1;
                    iVar3 = local_4c;
                    if (local_30 * local_2c < uVar7 * 0xff ||
                        local_30 * local_2c + uVar7 * -0xff == 0) goto LAB_101fc817;
                  }
                  else if (local_34 == 1) {
                    local_40 = local_34;
                    local_4c = 8;
                    iVar3 = local_4c;
                    if (local_30 * local_2c < local_44 * 0xf ||
                        local_30 * local_2c + local_44 * -0xf == 0) goto LAB_101fc817;
                  }
                  else {
                    local_4c = 8;
                    iVar3 = local_4c;
                    if ((local_34 == 0) &&
                       (local_40 = local_34, local_30 * local_2c + 7 >> 3 <= local_44)) {
LAB_101fc817:
                      local_40 = local_34;
                      local_4c = 0x17;
                      iVar3 = local_4c;
                      if (-1 < (int)local_30) {
                        local_44 = local_24;
                        if ((int)local_24 <= (int)(local_30 ^ 0x7fffffff)) {
                          *(undefined4 *)(local_3c + 0x48) = 0x62697473;
                          *(int *)(local_3c + 0x50) = local_2c;
                          *(uint *)(local_3c + 0x4c) = local_30;
                          *(int *)(local_3c + 0x54) = local_2c + 7 >> 3;
                          *(undefined1 *)(local_3c + 0x5e) = 1;
                          *(int *)(local_3c + 0x18) = local_2c * 0x40;
                          *(uint *)(local_3c + 0x1c) = local_30 << 6;
                          *(int *)(local_3c + 0x20) = local_20 << 6;
                          *(uint *)(local_3c + 0x24) = local_24 << 6;
                          *(uint *)(local_3c + 0x28) = (local_28 >> 2) + 0x20U & 0xffffffc0;
                          *(int *)(local_3c + 0x2c) = local_2c * -0x40 >> 1;
                          *(undefined4 *)(local_3c + 0x30) = 0;
                          *(undefined4 *)(local_3c + 0x34) = *(undefined4 *)(param_2 + 0x20);
                          *(int *)(local_3c + 100) = local_20;
                          *(uint *)(local_3c + 0x68) = local_24 + local_30;
                          local_4c = 0;
                          iVar3 = local_4c;
                          if ((param_4 == '\0') &&
                             (iVar3 = FUN_101c0e8e(local_3c), iVar2 = local_48, iVar3 == 0)) {
                            FUN_101fcd4f(local_40,*(byte *)(iVar1 + 0xd0) >> 1 & 1,local_3c + 0x4c);
                            iVar3 = local_4c;
                          }
                        }
                      }
                    }
                  }
                }
                local_4c = iVar3;
                FUN_101c4c66(iVar2);
                iVar3 = local_4c;
              }
            }
          }
        }
        break;
      }
      piVar6 = piVar6 + 9;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  local_4c = iVar3;
  if (DAT_10388d00 != (local_14 ^ (uint)&local_4c)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return local_4c;
}

