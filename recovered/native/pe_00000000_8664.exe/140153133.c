/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140153133 */

int FUN_140153133(undefined8 param_1,longlong param_2,uint param_3,undefined8 *param_4,
                 undefined8 param_5,char param_6,char param_7)

{
  int iVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  byte bVar8;
  ulonglong uVar9;
  undefined8 unaff_RBP;
  undefined2 uVar10;
  bool bVar11;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 *local_d8;
  undefined8 local_d0;
  undefined4 local_bc;
  undefined1 local_b8 [16];
  uint local_a8;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  int local_4c;
  ulonglong local_48;
  
  uVar9 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_7);
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_108;
  uVar6 = *(undefined8 *)(param_2 + 0x30);
  FUN_1401c5830(param_4,0,0x1138);
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  iVar4 = FUN_14012db43(param_2);
  *param_4 = param_1;
  param_4[1] = param_2;
  param_4[2] = uVar6;
  *(char *)((longlong)param_4 + 0x2c) = param_7;
  *(int *)(param_4 + 3) = iVar4;
  local_4c = FUN_14012e0a0(param_2,&DAT_140e9df30,param_4);
  if (local_4c != 0) goto LAB_140153268;
  if (param_7 == '\0') {
    bVar2 = FUN_14012de17(param_2,&local_4c);
    if (local_4c != 0) goto LAB_140153268;
    if (((*(char *)((longlong)param_4 + 0x24) == '\x01') &&
        (bVar8 = *(byte *)((longlong)param_4 + 0x26), 3 < bVar8)) && (bVar2 < 5))
    goto LAB_140153238;
  }
  else if ((*(char *)((longlong)param_4 + 0x24) == '\x02') &&
          (4 < *(byte *)((longlong)param_4 + 0x26))) {
    uVar3 = FUN_14012d676(param_2,&local_4c);
    *(uint *)(param_4 + 5) = (uint)uVar3;
    if (local_4c != 0) goto LAB_140153268;
    bVar8 = *(byte *)((longlong)param_4 + 0x26);
LAB_140153238:
    local_4c = FUN_14012d612(param_2,(uint)bVar8 + iVar4);
    if (local_4c == 0) {
      if (param_7 == '\0') {
        local_4c = FUN_140153a04(param_4 + 6,param_2,0,0);
        if (local_4c != 0) goto LAB_140153258;
        if ((1 < *(uint *)(param_4 + 8)) &&
           (*(uint *)((longlong)param_4 + 0x4c) < *(uint *)(param_4 + 8))) {
          local_4c = (param_6 == '\0') + 2;
          goto LAB_140153268;
        }
        local_4c = FUN_140153a04(param_4 + 0xa4,param_2,0,0);
        if (local_4c != 0) goto LAB_140153268;
        local_4c = FUN_140153a04(&local_88,param_2,1,0);
        if (((local_4c != 0) ||
            (local_4c = FUN_140153a04(param_4 + 0x12,param_2,1,0), local_4c != 0)) ||
           (local_4c = FUN_140153ba0(&local_88,param_4 + 0xb9,param_4 + 0xba,param_4 + 0xbb),
           local_4c != 0)) goto LAB_140153268;
        if (*(uint *)(param_4 + 8) <= *(uint *)(param_4 + 0xa6)) goto LAB_14015331e;
      }
      else {
        param_4[0xa8] = 0;
        param_4[0xa9] = 0;
        param_4[0xa6] = 0;
        param_4[0xa7] = 0;
        param_4[0xa4] = 0;
        param_4[0xa5] = 0;
        uVar5 = FUN_14012db43(param_2);
        *(undefined4 *)(param_4 + 0xa7) = uVar5;
        *(undefined4 *)((longlong)param_4 + 0x53c) = *(undefined4 *)(param_4 + 5);
        local_4c = FUN_14012d664(param_2);
        if ((local_4c != 0) || (local_4c = FUN_140153a04(param_4 + 0x12,param_2,1,1), local_4c != 0)
           ) goto LAB_140153268;
LAB_14015331e:
        *(undefined4 *)(param_4 + 0xb8) = (undefined4)local_78;
        if (param_6 == '\0') {
          uVar10 = 0;
          if (1 < *(uint *)(param_4 + 8)) goto LAB_140153452;
        }
        else {
          uVar10 = (undefined2)param_3;
          if (*(uint *)(param_4 + 8) <= (param_3 & 0xffff) && 0 < (int)param_3) {
            local_4c = 6;
            goto LAB_140153268;
          }
          *(uint *)((longlong)param_4 + 0x1c) = *(uint *)(param_4 + 8);
        }
        if ((int)param_3 < 0) goto LAB_140153268;
        local_d0 = param_5;
        local_e8 = CONCAT44(local_e8._4_4_,iVar4);
        local_e0 = (int *)(CONCAT44(local_e0._4_4_,(uint)(param_7 != '\0') << 0xd) | 0x1000);
        local_d8 = param_4;
        local_4c = FUN_140153db1(param_4 + 0xbc,param_4 + 0xa4,uVar10,param_2);
        if (((local_4c != 0) ||
            (local_4c = FUN_14012d612(param_2,*(int *)((longlong)param_4 + 0x64c) + iVar4),
            local_4c != 0)) ||
           (local_4c = FUN_140153a04(param_4 + 0x9e,param_2,0,uVar9 & 0xffffffff), local_4c != 0))
        goto LAB_140153268;
        if ((param_7 == '\0') && (*(int *)(param_4 + 0xcc) == 0xffff)) {
          *(undefined4 *)(param_4 + 0x115) = 0;
          local_4c = 0;
        }
        else {
          local_4c = FUN_140154101(param_4 + 0x222,param_2,iVar4,*(undefined4 *)(param_4 + 0xd2));
          if ((local_4c != 0) ||
             ((local_4c = FUN_14012d612(param_2,*(int *)(param_4 + 0xd0) + iVar4), local_4c != 0 ||
              (local_4c = FUN_140153a04(local_b8,param_2,0,uVar9 & 0xffffffff), local_4c != 0))))
          goto LAB_140153268;
          if (local_a8 < 0x101) {
            *(uint *)(param_4 + 0x115) = local_a8;
            local_e0 = &local_4c;
            local_e8 = 0;
            lVar7 = FUN_140128c13(uVar6,0x2c8,0);
            if (local_4c == 0) {
              if ((ulonglong)local_a8 == 0) {
                bVar11 = false;
              }
              else {
                uVar9 = 0;
                do {
                  param_4[uVar9 + 0x116] = lVar7;
                  uVar9 = uVar9 + 1;
                  lVar7 = lVar7 + 0x2c8;
                } while (local_a8 != uVar9);
                local_bc = 0x1000;
                if (param_7 != '\0') {
                  local_bc = 0x4000;
                }
                uVar9 = 0;
                iVar1 = local_4c;
                do {
                  local_4c = iVar1;
                  local_d0 = param_5;
                  local_e0 = (int *)CONCAT44(local_e0._4_4_,local_bc);
                  local_e8 = CONCAT44(local_e8._4_4_,iVar4);
                  local_d8 = param_4;
                  local_4c = FUN_140153db1(param_4[uVar9 + 0x116],local_b8,uVar9 & 0xffffffff,
                                           param_2);
                  if (local_4c != 0) goto LAB_140153642;
                  uVar9 = uVar9 + 1;
                  iVar1 = 0;
                } while (uVar9 < local_a8);
                bVar11 = 1 < local_a8;
              }
              if (!(bool)(param_7 != '\0' & (bVar11 ^ 1U))) {
                local_4c = FUN_1401545cf(param_4 + 0x216,*(undefined4 *)(param_4 + 0xa0),param_2,
                                         *(int *)((longlong)param_4 + 0x684) + iVar4);
              }
            }
          }
LAB_140153642:
          FUN_1401546a1(local_b8);
          if (local_4c != 0) goto LAB_140153268;
        }
        if (*(int *)((longlong)param_4 + 0x64c) != 0) {
          *(undefined4 *)(param_4 + 4) = *(undefined4 *)(param_4 + 0xa0);
          local_4c = FUN_140153ba0(param_4 + 0x12,param_4 + 0xb7,0,0);
          if (local_4c == 0) {
            if ((param_7 == '\0') && (*(int *)(param_4 + 4) != 0)) {
              local_e8 = CONCAT44(local_e8._4_4_,*(undefined4 *)((longlong)param_4 + 0x644));
              local_e0 = (int *)CONCAT71(local_e0._1_7_,
                                         param_6 != '\0' && *(int *)(param_4 + 0xcc) != 0xffff);
              local_4c = FUN_1401546e7(param_4 + 0x9a,*(int *)(param_4 + 4),param_2,iVar4);
              if (local_4c != 0) goto LAB_140153268;
              if (*(int *)(param_4 + 0xcc) == 0xffff) {
                local_e0 = (int *)CONCAT44(local_e0._4_4_,*(undefined4 *)(param_4 + 0xc9));
                local_e8 = CONCAT44(local_e8._4_4_,iVar4);
                local_4c = FUN_140154a49(param_4 + 0x18,param_4 + 0x9a,*(undefined4 *)(param_4 + 4),
                                         param_2);
                if (local_4c != 0) goto LAB_140153268;
              }
            }
            uVar6 = FUN_14015381a(param_4,uVar10);
            param_4[0xb6] = uVar6;
          }
          goto LAB_140153268;
        }
      }
LAB_140153452:
      local_4c = 3;
      goto LAB_140153268;
    }
LAB_140153258:
    if (param_6 == '\0') goto LAB_140153268;
  }
  local_4c = 2;
LAB_140153268:
  FUN_1401546a1(&local_88);
  if (DAT_140f17b40 != (local_48 ^ (ulonglong)auStack_108)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_48 ^ (ulonglong)auStack_108);
  }
  return local_4c;
}

