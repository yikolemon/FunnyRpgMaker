/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140174351 */

int FUN_140174351(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  byte *pbVar2;
  uint uVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  ushort uVar9;
  uint uVar10;
  int iVar11;
  undefined1 auStack_78 [40];
  uint local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_78;
  plVar1 = (longlong *)(param_1 + 0x468);
  *(undefined8 *)(param_1 + 0x468) = 0;
  *(undefined8 *)(param_1 + 0x470) = 0;
  *(undefined4 *)(param_1 + 0x478) = 0;
  iVar6 = (**(code **)(param_1 + 0x2a0))(0,0x43424c43,param_2,&local_4c);
  if (iVar6 == 0) {
    uVar7 = 2;
LAB_14017440b:
    *(undefined4 *)(param_1 + 0x474) = uVar7;
    iVar11 = 3;
    iVar6 = iVar11;
    if (7 < local_4c) {
      uVar7 = FUN_14012db43(param_2);
      iVar6 = *(int *)(param_1 + 0x474);
      if (iVar6 - 1U < 2) {
        iVar6 = FUN_14012dc0a(param_2,local_4c,plVar1);
        if (iVar6 == 0) {
          *(uint *)(param_1 + 0x470) = local_4c;
          pbVar2 = *(byte **)(param_1 + 0x468);
          if ((((uint)pbVar2[1] << 0x10 | (uint)*pbVar2 << 0x18 | 0x10000) == 0x30000) ||
             ((ushort)(*(ushort *)(pbVar2 + 2) << 8 | *(ushort *)(pbVar2 + 2) >> 8 | 0x100) == 0x300
             )) {
            iVar6 = iVar11;
            if (pbVar2[5] == 0 && pbVar2[4] == 0) {
              uVar9 = *(ushort *)(pbVar2 + 6) << 8 | *(ushort *)(pbVar2 + 6) >> 8;
              uVar10 = (uint)uVar9;
              if (local_4c < (uint)uVar9 * 0x30 + 8) {
                uVar10 = (local_4c - 8) / 0x30;
              }
LAB_140174624:
              *(uint *)(param_1 + 0x478) = uVar10;
              iVar6 = *(int *)(param_1 + 0x474);
              goto LAB_140174631;
            }
          }
          else {
LAB_140174616:
            iVar6 = 2;
          }
        }
      }
      else {
        if (iVar6 != 3) {
LAB_140174631:
          *(undefined8 *)(param_1 + 0x4d0) = 0;
          if (iVar6 != 0) {
            if (iVar6 == 3) {
              *(undefined4 *)(param_1 + 0x4d0) = uVar7;
LAB_1401746bd:
              *(uint *)(param_1 + 0x4d4) = local_4c;
            }
            else {
              iVar6 = (**(code **)(param_1 + 0x2a0))(param_1,0x43424454,param_2,&local_50);
              if (((iVar6 == 0) ||
                  (iVar6 = (**(code **)(param_1 + 0x2a0))(param_1,0x45424454,param_2,&local_50),
                  iVar6 == 0)) ||
                 (iVar6 = (**(code **)(param_1 + 0x2a0))(param_1,0x62646174,param_2,&local_50),
                 iVar6 == 0)) {
                uVar7 = FUN_14012db43(param_2);
                *(undefined4 *)(param_1 + 0x4d0) = uVar7;
                local_4c = local_50;
                goto LAB_1401746bd;
              }
              local_4c = *(uint *)(param_1 + 0x4d4);
            }
            iVar6 = 0;
            if (local_4c != 0) goto LAB_140174533;
          }
          *(undefined4 *)(param_1 + 0x478) = 0;
          iVar6 = 0;
          goto LAB_140174533;
        }
        iVar6 = FUN_14012dc34(param_2,8);
        if (iVar6 == 0) {
          sVar4 = FUN_14012dd9f(param_2);
          sVar5 = FUN_14012dd9f(param_2);
          uVar8 = FUN_14012dddf(param_2);
          FUN_14012dd58(param_2);
          uVar3 = local_4c;
          if (sVar4 == 0) goto LAB_140174616;
          iVar6 = iVar11;
          if (uVar8 < 0x10000 && (sVar5 - 1U & 0xfffd) == 0) {
            if (sVar5 == 3) {
              *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
            }
            iVar6 = FUN_14012db43(param_2);
            iVar6 = FUN_14012d612(param_2,iVar6 + -8);
            if (iVar6 == 0) {
              uVar10 = uVar3 - 8 >> 2;
              if (uVar8 * 4 + 8 <= uVar3) {
                uVar10 = uVar8;
              }
              iVar6 = uVar10 * 4 + 8;
              *(int *)(param_1 + 0x470) = iVar6;
              iVar6 = FUN_14012dc0a(param_2,iVar6,plVar1);
              if (iVar6 == 0) goto LAB_140174624;
            }
          }
        }
      }
    }
  }
  else {
    iVar6 = (**(code **)(param_1 + 0x2a0))(param_1,0x45424c43,param_2,&local_4c);
    uVar7 = 1;
    if ((iVar6 == 0) ||
       (iVar6 = (**(code **)(param_1 + 0x2a0))(param_1,0x626c6f63,param_2,&local_4c), iVar6 == 0))
    goto LAB_14017440b;
    iVar6 = (**(code **)(param_1 + 0x2a0))(param_1,0x73626978,param_2,&local_4c);
    if (iVar6 == 0) {
      uVar7 = 3;
      goto LAB_14017440b;
    }
  }
  if (*plVar1 != 0) {
    FUN_14012dd2b(param_2,plVar1);
  }
  *(undefined8 *)(param_1 + 0x470) = 0;
LAB_140174533:
  if (DAT_140f17b40 != (local_48 ^ (ulonglong)auStack_78)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_48 ^ (ulonglong)auStack_78);
  }
  return iVar6;
}

