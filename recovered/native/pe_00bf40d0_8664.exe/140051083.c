/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140051083 */

int FUN_140051083(undefined8 param_1,longlong *param_2,uint param_3,undefined1 (*param_4) [32],
                 longlong param_5,char param_6,char param_7)

{
  int iVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  byte bVar11;
  int iVar12;
  uint uVar13;
  bool bVar14;
  undefined1 auStackY_108 [32];
  longlong local_b8 [2];
  uint local_a8;
  longlong local_88 [2];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStackY_108;
  lVar9 = param_2[6];
  FUN_1400b3c00(param_4,0,0x1138);
  local_88[0] = 0;
  local_88[1] = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  iVar4 = FUN_140020f72((longlong)param_2);
  *(undefined8 *)*param_4 = param_1;
  *(longlong **)(*param_4 + 8) = param_2;
  *(longlong *)(*param_4 + 0x10) = lVar9;
  param_4[1][0xc] = param_7;
  *(int *)(*param_4 + 0x18) = iVar4;
  local_4c = FUN_1400214cf(param_2,0x1400f6cf0,(longlong)param_4);
  if (local_4c != 0) goto LAB_1400511b8;
  if (param_7 == '\0') {
    bVar2 = FUN_140021246(param_2,&local_4c);
    if (local_4c != 0) goto LAB_1400511b8;
    if (((param_4[1][4] == '\x01') && (bVar11 = param_4[1][6], 3 < bVar11)) && (bVar2 < 5))
    goto LAB_140051188;
  }
  else if ((param_4[1][4] == '\x02') && (4 < (byte)param_4[1][6])) {
    uVar3 = FUN_140020aa5(param_2,&local_4c);
    *(uint *)(param_4[1] + 8) = (uint)uVar3;
    if (local_4c != 0) goto LAB_1400511b8;
    bVar11 = param_4[1][6];
LAB_140051188:
    uVar6 = FUN_140020a41((longlong)param_2,(uint)bVar11 + iVar4);
    local_4c = (int)uVar6;
    if (local_4c == 0) {
      if (param_7 == '\0') {
        local_4c = FUN_140051954((undefined8 *)(param_4[1] + 0x10),param_2,'\0','\0');
        if (local_4c != 0) goto LAB_1400511a8;
        if ((1 < *(uint *)param_4[2]) && (*(uint *)(param_4[2] + 0xc) < *(uint *)param_4[2])) {
          local_4c = (param_6 == '\0') + 2;
          goto LAB_1400511b8;
        }
        local_4c = FUN_140051954((undefined8 *)(param_4 + 0x29),param_2,'\0','\0');
        if ((((local_4c != 0) ||
             (local_4c = FUN_140051954(local_88,param_2,'\x01','\0'), local_4c != 0)) ||
            (local_4c = FUN_140051954((undefined8 *)(param_4[4] + 0x10),param_2,'\x01','\0'),
            local_4c != 0)) ||
           (local_4c = FUN_140051af0(local_88,(undefined8 *)(param_4[0x2e] + 8),
                                     (undefined8 *)(param_4[0x2e] + 0x10),
                                     (uint *)(param_4[0x2e] + 0x18)), local_4c != 0))
        goto LAB_1400511b8;
        if (*(uint *)param_4[2] <= *(uint *)(param_4[0x29] + 0x10)) goto LAB_14005126e;
      }
      else {
        *(undefined8 *)param_4[0x2a] = 0;
        *(undefined8 *)(param_4[0x2a] + 8) = 0;
        *(undefined8 *)(param_4[0x29] + 0x10) = 0;
        *(undefined8 *)(param_4[0x29] + 0x18) = 0;
        *(undefined8 *)param_4[0x29] = 0;
        *(undefined8 *)(param_4[0x29] + 8) = 0;
        uVar5 = FUN_140020f72((longlong)param_2);
        *(undefined4 *)(param_4[0x29] + 0x18) = uVar5;
        iVar12 = *(int *)(param_4[1] + 8);
        *(int *)(param_4[0x29] + 0x1c) = iVar12;
        uVar6 = FUN_140020a93((longlong)param_2,iVar12);
        local_4c = (int)uVar6;
        if ((local_4c != 0) ||
           (local_4c = FUN_140051954((undefined8 *)(param_4[4] + 0x10),param_2,'\x01','\x01'),
           local_4c != 0)) goto LAB_1400511b8;
LAB_14005126e:
        *(undefined4 *)param_4[0x2e] = (undefined4)local_78;
        if (param_6 == '\0') {
          uVar13 = 0;
          if (1 < *(uint *)param_4[2]) goto LAB_1400513a2;
        }
        else {
          uVar13 = param_3 & 0xffff;
          if (*(uint *)param_4[2] <= uVar13 && 0 < (int)param_3) {
            local_4c = 6;
            goto LAB_1400511b8;
          }
          *(uint *)(*param_4 + 0x1c) = *(uint *)param_4[2];
        }
        if ((int)param_3 < 0) goto LAB_1400511b8;
        uVar7 = FUN_140051d01((undefined8 *)(param_4 + 0x2f),(longlong *)(param_4 + 0x29),uVar13,
                              param_2,iVar4,(uint)(param_7 != '\0') << 0xd | 0x1000,
                              (undefined8 *)param_4,param_5);
        local_4c = (int)uVar7;
        if (local_4c != 0) goto LAB_1400511b8;
        uVar6 = FUN_140020a41((longlong)param_2,*(int *)(param_4[0x32] + 0xc) + iVar4);
        local_4c = (int)uVar6;
        if ((local_4c != 0) ||
           (local_4c = FUN_140051954((undefined8 *)(param_4[0x27] + 0x10),param_2,'\0',param_7),
           local_4c != 0)) goto LAB_1400511b8;
        if ((param_7 == '\0') && (*(int *)param_4[0x33] == 0xffff)) {
          *(undefined4 *)(param_4[0x45] + 8) = 0;
          local_4c = 0;
        }
        else {
          local_4c = FUN_140052051((uint *)(param_4[0x88] + 0x10),param_2,iVar4,
                                   *(int *)(param_4[0x34] + 0x10));
          if (local_4c != 0) goto LAB_1400511b8;
          uVar6 = FUN_140020a41((longlong)param_2,*(int *)param_4[0x34] + iVar4);
          local_4c = (int)uVar6;
          if ((local_4c != 0) ||
             (local_4c = FUN_140051954(local_b8,param_2,'\0',param_7), local_4c != 0))
          goto LAB_1400511b8;
          if (local_a8 < 0x101) {
            *(uint *)(param_4[0x45] + 8) = local_a8;
            lVar9 = FUN_14001c617(lVar9,0x2c8,0,local_a8,0,&local_4c);
            if (local_4c == 0) {
              if ((ulonglong)local_a8 == 0) {
                bVar14 = false;
              }
              else {
                uVar7 = 0;
                do {
                  *(longlong *)(param_4[0x45] + uVar7 * 8 + 0x10) = lVar9;
                  uVar7 = uVar7 + 1;
                  lVar9 = lVar9 + 0x2c8;
                } while (local_a8 != uVar7);
                iVar12 = 0x1000;
                if (param_7 != '\0') {
                  iVar12 = 0x4000;
                }
                uVar7 = 0;
                iVar1 = local_4c;
                do {
                  local_4c = iVar1;
                  uVar10 = FUN_140051d01(*(undefined8 **)(param_4[0x45] + uVar7 * 8 + 0x10),local_b8
                                         ,(uint)uVar7,param_2,iVar4,iVar12,(undefined8 *)param_4,
                                         param_5);
                  local_4c = (int)uVar10;
                  if (local_4c != 0) goto LAB_140051592;
                  uVar7 = uVar7 + 1;
                  iVar1 = 0;
                } while (uVar7 < local_a8);
                bVar14 = 1 < local_a8;
              }
              if (!(bool)(param_7 != '\0' & (bVar14 ^ 1U))) {
                uVar7 = FUN_14005251f(param_4[0x85] + 0x10,*(uint *)param_4[0x28],param_2,
                                      *(int *)(param_4[0x34] + 4) + iVar4);
                local_4c = (int)uVar7;
              }
            }
          }
LAB_140051592:
          FUN_1400525f1(local_b8);
          if (local_4c != 0) goto LAB_1400511b8;
        }
        if (*(int *)(param_4[0x32] + 0xc) != 0) {
          *(undefined4 *)param_4[1] = *(undefined4 *)param_4[0x28];
          local_4c = FUN_140051af0((longlong *)(param_4[4] + 0x10),
                                   (undefined8 *)(param_4[0x2d] + 0x18),(undefined8 *)0x0,
                                   (uint *)0x0);
          if (local_4c == 0) {
            if ((param_7 == '\0') && (*(uint *)param_4[1] != 0)) {
              local_4c = FUN_140052637((uint *)(param_4[0x26] + 0x10),*(uint *)param_4[1],param_2,
                                       iVar4,*(uint *)(param_4[0x32] + 4),
                                       param_6 != '\0' && *(int *)param_4[0x33] != 0xffff);
              if (local_4c != 0) goto LAB_1400511b8;
              if (*(int *)param_4[0x33] == 0xffff) {
                uVar7 = FUN_140052999((uint *)(param_4 + 6),(longlong)(param_4[0x26] + 0x10),
                                      *(uint *)param_4[1],param_2,iVar4,*(uint *)(param_4[0x32] + 8)
                                     );
                local_4c = (int)uVar7;
                if (local_4c != 0) goto LAB_1400511b8;
              }
            }
            puVar8 = FUN_14005176a((longlong)param_4,uVar13);
            *(undefined8 **)(param_4[0x2d] + 0x10) = puVar8;
          }
          goto LAB_1400511b8;
        }
      }
LAB_1400513a2:
      local_4c = 3;
      goto LAB_1400511b8;
    }
LAB_1400511a8:
    if (param_6 == '\0') goto LAB_1400511b8;
  }
  local_4c = 2;
LAB_1400511b8:
  FUN_1400525f1(local_88);
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStackY_108)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStackY_108);
  }
  return local_4c;
}

