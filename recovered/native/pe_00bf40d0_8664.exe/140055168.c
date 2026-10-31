/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140055168 */

int FUN_140055168(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined1 uVar13;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  undefined1 auStackY_748 [32];
  int local_700;
  uint local_6fc;
  longlong local_6f8;
  uint local_6f0 [178];
  uint local_428;
  undefined4 uStack_424;
  uint local_420;
  int iStack_41c;
  uint *local_100;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStackY_748;
  lVar2 = *(longlong *)(param_1 + 8);
  plVar3 = *(longlong **)(lVar2 + 0x1e8);
  local_700 = 0;
  lVar4 = *(longlong *)(lVar2 + 0x98);
  lVar5 = *(longlong *)(lVar2 + 0xe0);
  plVar6 = *(longlong **)(*(longlong *)(lVar2 + 0xd0) + 0x50);
  if (plVar6 == (longlong *)0x0) {
    local_700 = FUN_140053d4e(lVar2,param_2,&local_6fc,&local_428,local_6f0);
    uVar9 = local_428;
    if (local_700 != 0) goto LAB_1400552b0;
    uVar14 = local_6f0[0] - local_428;
    if (uVar14 == 0) {
      puVar10 = (undefined8 *)0x0;
    }
    else {
      puVar10 = (undefined8 *)FUN_14001e961(lVar4,uVar14,&local_700);
      if (local_700 == 0) {
        uVar11 = FUN_140020f76(plVar3,uVar9 + *(int *)(lVar2 + 0x1c0),puVar10,uVar14);
        local_700 = (int)uVar11;
        if (local_700 == 0) {
          local_700 = 0;
          uVar9 = local_6fc;
          goto LAB_140055368;
        }
      }
    }
  }
  else {
    local_700 = (**(code **)*plVar6)(plVar6[1],param_2,&local_428);
    if (local_700 == 0) {
      uVar9 = *(uint *)(lVar2 + 0x1a4);
      uVar14 = local_420 - uVar9;
      if (uVar9 <= local_420) {
        uVar9 = FUN_140053e87(&local_6f8,uVar9);
        local_6fc = uVar9;
        if (uVar9 < *(uint *)(lVar2 + 0x1b0)) {
          puVar10 = (undefined8 *)FUN_14001e961(lVar4,uVar14,&local_700);
          if (local_700 == 0) {
            FUN_1400b3550(puVar10,(undefined8 *)
                                  ((ulonglong)*(uint *)(lVar2 + 0x1a4) +
                                  CONCAT44(uStack_424,local_428)),(ulonglong)uVar14);
          }
          (**(code **)(*plVar6 + 8))(plVar6[1],&local_428);
          if (local_700 != 0) goto LAB_1400552b3;
LAB_140055368:
          lVar7 = *(longlong *)(lVar2 + 0x1d0);
          lVar16 = (ulonglong)uVar9 * 0xfc;
          lVar12 = (ulonglong)uVar9 * 0x10;
          *(undefined4 *)(param_1 + 0x674) = *(undefined4 *)(lVar7 + lVar12);
          *(undefined8 *)(param_1 + 0x678) = *(undefined8 *)(lVar7 + 8 + lVar12);
          *(undefined8 *)(param_1 + 0x680) = 0;
          *(undefined8 *)(param_1 + 0x688) = 0;
          lVar7 = *(longlong *)(lVar2 + 0x1b8);
          puVar1 = (undefined8 *)(lVar7 + 0xd8 + lVar16);
          uVar11 = puVar1[1];
          *(undefined8 *)(param_1 + 0x690) = *puVar1;
          *(undefined8 *)(param_1 + 0x698) = uVar11;
          *(undefined8 *)(param_1 + 0x6a0) = *(undefined8 *)(lVar7 + 0xe8 + lVar16);
          uVar9 = *(uint *)(lVar7 + 4 + lVar16);
          *(uint *)(param_1 + 0x670) = uVar9;
          uVar8 = 0;
          if (-1 < (int)uVar9) {
            uVar8 = uVar9;
          }
          iVar15 = uVar14 - uVar8;
          if (uVar14 < uVar8) {
            local_700 = 9;
            uVar13 = 0;
            goto LAB_1400552b5;
          }
          if (-1 < (int)uVar9) {
            (**(code **)(lVar5 + 0x20))
                      (puVar10,uVar14,CONCAT62((uint6)(ushort)((uint)iVar15 >> 0x10),0x10ea));
          }
          if (*(char *)(param_1 + 0x5e) == '\0') {
            uVar13 = 1;
            (**(code **)(lVar5 + 0x30))
                      (&local_428,param_1,CONCAT71((uint7)(uint3)((uint)iVar15 >> 8),1));
            (**(code **)(lVar5 + 0x38))(lVar2,lVar7 + lVar16,local_6f0);
            local_100 = local_6f0;
            local_700 = (**(code **)(*(longlong *)(lVar5 + 0x18) + 0x18))
                                  (&local_428,(ulonglong)uVar8 + (longlong)puVar10,iVar15);
            if ((char)local_700 != -0x5c) goto LAB_1400554e3;
            *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0xf8) = 0;
            local_700 = (**(code **)(*(longlong *)(lVar5 + 0x18) + 0x18))
                                  (&local_428,(ulonglong)uVar8 + (longlong)puVar10,iVar15);
          }
          else {
            local_700 = (**(code **)(*(longlong *)(lVar5 + 0x18) + 0x10))
                                  (param_1,(ulonglong)uVar8 + (longlong)puVar10,iVar15);
LAB_1400554e3:
            uVar13 = 0;
          }
          if (((plVar6 != (longlong *)0x0) && (local_700 == 0)) &&
             (*(longlong *)(*plVar6 + 0x10) != 0)) {
            local_428 = FUN_140021867(*(int *)(param_1 + 0x38));
            local_428 = (int)local_428 >> 0x10;
            uStack_424 = 0;
            local_420 = FUN_140021867(*(int *)(param_1 + 0x40));
            local_420 = (int)local_420 >> 0x10;
            uVar9 = FUN_140021867(*(int *)(param_1 + 0x44));
            iStack_41c = (int)uVar9 >> 0x10;
            local_700 = (**(code **)(*plVar6 + 0x10))(plVar6[1],param_2,0,&local_428);
            *(uint *)(param_1 + 0x38) = local_428 << 0x10;
            *(ulonglong *)(param_1 + 0x40) = CONCAT44(iStack_41c << 0x10,local_420 << 0x10);
          }
          goto LAB_1400552b5;
        }
        local_700 = 9;
      }
    }
LAB_1400552b0:
    puVar10 = (undefined8 *)0x0;
  }
LAB_1400552b3:
  uVar13 = 0;
LAB_1400552b5:
  FUN_14001c53d(lVar4,(longlong)puVar10);
  *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0xf9) = uVar13;
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStackY_748)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStackY_748);
  }
  return local_700;
}

