/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18007cf40 */

undefined1 *
FUN_18007cf40(longlong *param_1,undefined1 *param_2,undefined4 *param_3,longlong param_4,
             undefined1 param_5,char param_6)

{
  undefined4 uVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined1 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong local_b8;
  undefined1 *local_b0;
  undefined8 local_a8;
  longlong *plStack_a0;
  ulonglong local_98;
  ulonglong uStack_90;
  uint local_80;
  undefined4 uStack_7c;
  ulonglong local_70;
  ulonglong uStack_68;
  undefined4 uStack_60;
  undefined3 uStack_5c;
  undefined4 local_58;
  undefined3 uStack_54;
  undefined4 uStack_50;
  undefined3 uStack_4c;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if ((*(byte *)(param_4 + 0x19) & 0x40) == 0) {
    local_c8 = *param_3;
    uStack_c4 = param_3[1];
    uStack_c0 = param_3[2];
    uStack_bc = param_3[3];
    (**(code **)(*param_1 + 0x48))(local_c8,param_2,&local_c8,param_4,param_5,param_6);
  }
  else {
    plStack_a0 = *(longlong **)(*(longlong *)(param_4 + 0x40) + 8);
    local_b8 = param_4;
    local_b0 = param_2;
    (**(code **)(*plStack_a0 + 8))();
    plVar3 = (longlong *)FUN_18000b3c1(&local_a8);
    if ((plStack_a0 != (longlong *)0x0) &&
       (puVar4 = (undefined8 *)(**(code **)(*plStack_a0 + 0x10))(), puVar4 != (undefined8 *)0x0)) {
      (**(code **)*puVar4)(puVar4,1);
    }
    local_a8 = (undefined8 *)0x0;
    plStack_a0 = (longlong *)0x0;
    local_98 = 0;
    uStack_90 = 0xf;
    if (param_6 == '\0') {
      (**(code **)(*plVar3 + 0x30))(plVar3,&local_80);
      FUN_180004c8c(&local_a8);
      local_98 = local_70;
      uStack_90 = uStack_68;
      local_a8 = (undefined8 *)CONCAT44(uStack_7c,local_80);
      local_70 = 0;
      uStack_68 = 0xf;
      local_80 = local_80 & 0xffffff00;
      FUN_180001ef2(&local_80);
    }
    else {
      (**(code **)(*plVar3 + 0x38))(plVar3,&local_80);
      FUN_180004c8c(&local_a8);
      local_98 = local_70;
      uStack_90 = uStack_68;
      local_a8 = (undefined8 *)CONCAT44(uStack_7c,local_80);
      local_70 = 0;
      uStack_68 = 0xf;
      local_80 = local_80 & 0xffffff00;
      FUN_180001ef2(&local_80);
    }
    uVar7 = *(ulonglong *)(local_b8 + 0x28);
    lVar5 = uVar7 - local_98;
    if (uVar7 < local_98) {
      lVar5 = 0;
    }
    lVar9 = 0;
    if (0 < (longlong)uVar7) {
      lVar9 = lVar5;
    }
    uVar6 = *(undefined1 *)param_3;
    if ((*(uint *)(local_b8 + 0x18) & 0x1c0) == 0x40) {
      lVar8 = *(longlong *)(param_3 + 2);
    }
    else {
      uStack_5c = (undefined3)((uint)param_3[1] >> 8);
      uStack_60 = *(undefined4 *)((longlong)param_3 + 1);
      lVar8 = *(longlong *)(param_3 + 2);
      uVar1 = uStack_60;
      while (uStack_60 = uVar1, lVar9 != 0) {
        if ((lVar8 == 0) || (iVar2 = FUN_18007b160(lVar8,param_5), iVar2 == -1)) {
          uVar6 = 1;
        }
        lVar5 = lVar5 + -1;
        uVar1 = uStack_60;
        lVar9 = lVar5;
      }
      *(undefined1 *)param_3 = uVar6;
      uStack_60._3_1_ = (undefined1)((uint)uVar1 >> 0x18);
      param_3[1] = CONCAT31(uStack_5c,uStack_60._3_1_);
      *(undefined4 *)((longlong)param_3 + 1) = uVar1;
      *(longlong *)(param_3 + 2) = lVar8;
      lVar9 = 0;
    }
    local_58._0_3_ = (undefined3)*(undefined4 *)((longlong)param_3 + 1);
    local_58._3_1_ = (undefined1)param_3[1];
    uStack_54 = (undefined3)((uint)param_3[1] >> 8);
    if (local_98 != 0) {
      uVar7 = local_98;
      puVar4 = &local_a8;
      if (0xf < uStack_90) {
        puVar4 = local_a8;
      }
      do {
        if ((lVar8 == 0) || (iVar2 = FUN_18007b160(lVar8,*(undefined1 *)puVar4), iVar2 == -1)) {
          uVar6 = 1;
        }
        puVar4 = (undefined8 *)((longlong)puVar4 + 1);
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    *(undefined1 *)param_3 = uVar6;
    param_3[1] = CONCAT31(uStack_54,local_58._3_1_);
    *(undefined4 *)((longlong)param_3 + 1) = local_58;
    *(longlong *)(param_3 + 2) = lVar8;
    *(undefined8 *)(local_b8 + 0x28) = 0;
    uVar6 = *(undefined1 *)param_3;
    uStack_4c = (undefined3)((uint)param_3[1] >> 8);
    lVar5 = *(longlong *)(param_3 + 2);
    uVar1 = *(undefined4 *)((longlong)param_3 + 1);
    for (; uStack_50 = uVar1, lVar9 != 0; lVar9 = lVar9 + -1) {
      if ((lVar5 == 0) || (iVar2 = FUN_18007b160(lVar5,param_5), iVar2 == -1)) {
        uVar6 = 1;
      }
      uVar1 = uStack_50;
    }
    *local_b0 = uVar6;
    uStack_50._3_1_ = (undefined1)((uint)uVar1 >> 0x18);
    *(undefined4 *)(local_b0 + 1) = uVar1;
    *(uint *)(local_b0 + 4) = CONCAT31(uStack_4c,uStack_50._3_1_);
    *(longlong *)(local_b0 + 8) = lVar5;
    FUN_180001ef2(&local_a8);
    param_2 = local_b0;
  }
  return param_2;
}

