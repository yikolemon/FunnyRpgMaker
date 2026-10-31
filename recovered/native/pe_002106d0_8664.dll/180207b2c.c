/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180207b2c */

int FUN_180207b2c(longlong param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 uVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  undefined8 uVar14;
  undefined1 auStack_748 [32];
  int *local_728;
  undefined8 local_718;
  longlong local_710;
  int local_704;
  int local_700;
  uint local_6fc [3];
  int local_6f0 [178];
  int local_428;
  undefined4 uStack_424;
  uint local_420;
  int iStack_41c;
  int *local_100;
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_748;
  lVar2 = *(longlong *)(param_1 + 8);
  uVar3 = *(undefined8 *)(lVar2 + 0x1e8);
  local_700 = 0;
  uVar14 = *(undefined8 *)(lVar2 + 0x98);
  lVar7 = *(longlong *)(lVar2 + 0xe0);
  plVar4 = *(longlong **)(*(longlong *)(lVar2 + 0xd0) + 0x50);
  if (plVar4 == (longlong *)0x0) {
    local_728 = local_6f0;
    local_700 = FUN_180206712(lVar2,param_2,local_6fc,&local_428);
    iVar11 = local_428;
    if (local_700 != 0) goto LAB_180207c74;
    uVar10 = local_6f0[0] - local_428;
    if (uVar10 == 0) {
      lVar7 = 0;
      local_718 = uVar14;
    }
    else {
      local_718 = uVar14;
      local_710 = lVar7;
      lVar7 = FUN_1801cc006(uVar14,uVar10,&local_700);
      uVar14 = local_718;
      if ((local_700 == 0) &&
         (local_700 = FUN_1801ceb73(uVar3,iVar11 + *(int *)(lVar2 + 0x1c0),lVar7,uVar10),
         uVar14 = local_718, local_700 == 0)) {
        local_700 = 0;
        uVar6 = local_6fc[0];
        goto LAB_180207d2c;
      }
    }
  }
  else {
    local_700 = (**(code **)*plVar4)(plVar4[1],param_2,&local_428);
    if ((local_700 == 0) &&
       (uVar10 = local_420 - *(uint *)(lVar2 + 0x1a4), *(uint *)(lVar2 + 0x1a4) <= local_420)) {
      uVar6 = FUN_18020684b();
      local_6fc[0] = uVar6;
      if (uVar6 < *(uint *)(lVar2 + 0x1b0)) {
        local_718 = uVar14;
        local_710 = lVar7;
        lVar7 = FUN_1801cc006(uVar14,uVar10,&local_700);
        if (local_700 == 0) {
          FUN_1802a82f0(lVar7,(ulonglong)*(uint *)(lVar2 + 0x1a4) + CONCAT44(uStack_424,local_428),
                        uVar10);
        }
        (**(code **)(*plVar4 + 8))(plVar4[1],&local_428);
        uVar14 = local_718;
        if (local_700 != 0) goto LAB_180207c77;
LAB_180207d2c:
        lVar5 = *(longlong *)(lVar2 + 0x1d0);
        lVar12 = (ulonglong)uVar6 * 0xfc;
        lVar8 = (ulonglong)uVar6 * 0x10;
        *(undefined4 *)(param_1 + 0x674) = *(undefined4 *)(lVar5 + lVar8);
        *(undefined8 *)(param_1 + 0x678) = *(undefined8 *)(lVar5 + 8 + lVar8);
        *(undefined8 *)(param_1 + 0x680) = 0;
        *(undefined8 *)(param_1 + 0x688) = 0;
        lVar5 = *(longlong *)(lVar2 + 0x1b8);
        puVar1 = (undefined8 *)(lVar5 + 0xd8 + lVar12);
        uVar3 = puVar1[1];
        *(undefined8 *)(param_1 + 0x690) = *puVar1;
        *(undefined8 *)(param_1 + 0x698) = uVar3;
        *(undefined8 *)(param_1 + 0x6a0) = *(undefined8 *)(lVar5 + 0xe8 + lVar12);
        uVar6 = *(uint *)(lVar5 + 4 + lVar12);
        *(uint *)(param_1 + 0x670) = uVar6;
        uVar13 = 0;
        if (-1 < (int)uVar6) {
          uVar13 = uVar6;
        }
        iVar11 = uVar10 - uVar13;
        if (uVar10 < uVar13) {
          local_700 = 9;
          uVar9 = 0;
          uVar14 = local_718;
          goto LAB_180207c79;
        }
        local_704 = iVar11;
        if (-1 < (int)uVar6) {
          (**(code **)(local_710 + 0x20))
                    (lVar7,uVar10,CONCAT62((uint6)(ushort)((uint)iVar11 >> 0x10),0x10ea));
        }
        if (*(char *)(param_1 + 0x5e) == '\0') {
          uVar9 = 1;
          (**(code **)(local_710 + 0x30))
                    (&local_428,param_1,CONCAT71((uint7)(uint3)((uint)local_704 >> 8),1));
          lVar8 = local_710;
          (**(code **)(local_710 + 0x38))(lVar2,lVar5 + lVar12,local_6f0);
          iVar11 = local_704;
          local_100 = local_6f0;
          local_700 = (**(code **)(*(longlong *)(lVar8 + 0x18) + 0x18))
                                (&local_428,(ulonglong)uVar13 + lVar7,local_704);
          if ((char)local_700 != -0x5c) goto LAB_180207ea7;
          *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0xf8) = 0;
          local_700 = (**(code **)(*(longlong *)(lVar8 + 0x18) + 0x18))
                                (&local_428,(ulonglong)uVar13 + lVar7,iVar11);
        }
        else {
          local_700 = (**(code **)(*(longlong *)(local_710 + 0x18) + 0x10))
                                (param_1,(ulonglong)uVar13 + lVar7,local_704);
LAB_180207ea7:
          uVar9 = 0;
        }
        uVar14 = local_718;
        if (((plVar4 != (longlong *)0x0) && (local_700 == 0)) &&
           (*(longlong *)(*plVar4 + 0x10) != 0)) {
          local_428 = FUN_1801cf464(*(undefined4 *)(param_1 + 0x38));
          local_428 = local_428 >> 0x10;
          uStack_424 = 0;
          iVar11 = FUN_1801cf464(*(undefined4 *)(param_1 + 0x40));
          local_420 = iVar11 >> 0x10;
          iStack_41c = FUN_1801cf464(*(undefined4 *)(param_1 + 0x44));
          iStack_41c = iStack_41c >> 0x10;
          local_700 = (**(code **)(*plVar4 + 0x10))(plVar4[1],param_2,0,&local_428);
          *(int *)(param_1 + 0x38) = local_428 << 0x10;
          *(ulonglong *)(param_1 + 0x40) = CONCAT44(iStack_41c << 0x10,local_420 << 0x10);
        }
        goto LAB_180207c79;
      }
      local_700 = 9;
    }
LAB_180207c74:
    lVar7 = 0;
  }
LAB_180207c77:
  uVar9 = 0;
LAB_180207c79:
  FUN_1801c9b65(uVar14,lVar7);
  *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0xf9) = uVar9;
  if (DAT_180402640 != (local_48 ^ (ulonglong)auStack_748)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_48 ^ (ulonglong)auStack_748);
  }
  return local_700;
}

