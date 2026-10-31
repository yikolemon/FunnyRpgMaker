/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400722a5 */

int FUN_1400722a5(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  byte *pbVar2;
  ushort uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 uVar7;
  ushort uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 auStack_78 [40];
  uint local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStack_78;
  plVar1 = (longlong *)(param_1 + 0x468);
  *(undefined8 *)(param_1 + 0x468) = 0;
  *(undefined8 *)(param_1 + 0x470) = 0;
  *(undefined4 *)(param_1 + 0x478) = 0;
  iVar4 = (**(code **)(param_1 + 0x2a0))(0,0x43424c43,param_2,&local_4c);
  if (iVar4 == 0) {
    uVar5 = 2;
LAB_14007235f:
    *(undefined4 *)(param_1 + 0x474) = uVar5;
    iVar11 = 3;
    iVar4 = iVar11;
    if (7 < local_4c) {
      uVar5 = FUN_140020f72((longlong)param_2);
      iVar4 = *(int *)(param_1 + 0x474);
      if (iVar4 - 1U < 2) {
        iVar4 = FUN_140021039(param_2,local_4c,plVar1);
        if (iVar4 == 0) {
          *(uint *)(param_1 + 0x470) = local_4c;
          pbVar2 = *(byte **)(param_1 + 0x468);
          if ((((uint)pbVar2[1] << 0x10 | (uint)*pbVar2 << 0x18 | 0x10000) == 0x30000) ||
             ((ushort)(*(ushort *)(pbVar2 + 2) << 8 | *(ushort *)(pbVar2 + 2) >> 8 | 0x100) == 0x300
             )) {
            iVar4 = iVar11;
            if (pbVar2[5] == 0 && pbVar2[4] == 0) {
              uVar8 = *(ushort *)(pbVar2 + 6) << 8 | *(ushort *)(pbVar2 + 6) >> 8;
              uVar10 = (uint)uVar8;
              if (local_4c < (uint)uVar8 * 0x30 + 8) {
                uVar10 = (local_4c - 8) / 0x30;
              }
LAB_140072578:
              *(uint *)(param_1 + 0x478) = uVar10;
              iVar4 = *(int *)(param_1 + 0x474);
              goto LAB_140072585;
            }
          }
          else {
LAB_14007256a:
            iVar4 = 2;
          }
        }
      }
      else {
        if (iVar4 != 3) {
LAB_140072585:
          *(undefined8 *)(param_1 + 0x4d0) = 0;
          if (iVar4 != 0) {
            if (iVar4 == 3) {
              *(undefined4 *)(param_1 + 0x4d0) = uVar5;
LAB_140072611:
              *(uint *)(param_1 + 0x4d4) = local_4c;
            }
            else {
              iVar4 = (**(code **)(param_1 + 0x2a0))(param_1,0x43424454,param_2,&local_50);
              if (((iVar4 == 0) ||
                  (iVar4 = (**(code **)(param_1 + 0x2a0))(param_1,0x45424454,param_2,&local_50),
                  iVar4 == 0)) ||
                 (iVar4 = (**(code **)(param_1 + 0x2a0))(param_1,0x62646174,param_2,&local_50),
                 iVar4 == 0)) {
                uVar5 = FUN_140020f72((longlong)param_2);
                *(undefined4 *)(param_1 + 0x4d0) = uVar5;
                local_4c = local_50;
                goto LAB_140072611;
              }
              local_4c = *(uint *)(param_1 + 0x4d4);
            }
            iVar4 = 0;
            if (local_4c != 0) goto LAB_140072487;
          }
          *(undefined4 *)(param_1 + 0x478) = 0;
          iVar4 = 0;
          goto LAB_140072487;
        }
        iVar4 = FUN_140021063(param_2,8);
        if (iVar4 == 0) {
          uVar8 = FUN_1400211ce((longlong)param_2);
          uVar3 = FUN_1400211ce((longlong)param_2);
          uVar6 = FUN_14002120e((longlong)param_2);
          FUN_140021187(param_2);
          uVar9 = local_4c;
          if (uVar8 == 0) goto LAB_14007256a;
          iVar4 = iVar11;
          if (uVar6 < 0x10000 && (uVar3 - 1 & 0xfffd) == 0) {
            if (uVar3 == 3) {
              *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
            }
            iVar4 = FUN_140020f72((longlong)param_2);
            uVar7 = FUN_140020a41((longlong)param_2,iVar4 - 8);
            iVar4 = (int)uVar7;
            if (iVar4 == 0) {
              uVar10 = uVar9 - 8 >> 2;
              if (uVar6 * 4 + 8 <= uVar9) {
                uVar10 = uVar6;
              }
              uVar9 = uVar10 * 4 + 8;
              *(uint *)(param_1 + 0x470) = uVar9;
              iVar4 = FUN_140021039(param_2,uVar9,plVar1);
              if (iVar4 == 0) goto LAB_140072578;
            }
          }
        }
      }
    }
  }
  else {
    iVar4 = (**(code **)(param_1 + 0x2a0))(param_1,0x45424c43,param_2,&local_4c);
    uVar5 = 1;
    if ((iVar4 == 0) ||
       (iVar4 = (**(code **)(param_1 + 0x2a0))(param_1,0x626c6f63,param_2,&local_4c), iVar4 == 0))
    goto LAB_14007235f;
    iVar4 = (**(code **)(param_1 + 0x2a0))(param_1,0x73626978,param_2,&local_4c);
    if (iVar4 == 0) {
      uVar5 = 3;
      goto LAB_14007235f;
    }
  }
  if (*plVar1 != 0) {
    FUN_14002115a((longlong)param_2,plVar1);
  }
  *(undefined8 *)(param_1 + 0x470) = 0;
LAB_140072487:
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStack_78)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStack_78);
  }
  return iVar4;
}

