/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800a55ac */

undefined1 *
FUN_1800a55ac(longlong *param_1,undefined1 *param_2,undefined4 *param_3,longlong param_4,
             undefined2 param_5,char param_6)

{
  undefined4 uVar1;
  short sVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined1 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 ****ppppuVar10;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [32];
  longlong local_98;
  undefined1 *local_90;
  undefined8 ***local_88;
  longlong *plStack_80;
  ulonglong local_78;
  ulonglong local_70;
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
    plStack_80 = *(longlong **)(*(longlong *)(param_4 + 0x40) + 8);
    local_98 = param_4;
    local_90 = param_2;
    (**(code **)(*plStack_80 + 8))();
    plVar3 = (longlong *)FUN_180047447(&local_88);
    if ((plStack_80 != (longlong *)0x0) &&
       (puVar4 = (undefined8 *)(**(code **)(*plStack_80 + 0x10))(), puVar4 != (undefined8 *)0x0)) {
      (**(code **)*puVar4)(puVar4,1);
    }
    local_88 = (undefined8 ****)0x0;
    plStack_80 = (longlong *)0x0;
    local_78 = 0;
    local_70 = 7;
    if (param_6 == '\0') {
      (**(code **)(*plVar3 + 0x30))(plVar3,local_b8);
      FUN_180012524(&local_88,local_b8);
      FUN_1800010ec(local_b8);
    }
    else {
      (**(code **)(*plVar3 + 0x38))(plVar3,local_b8);
      FUN_180012524(&local_88,local_b8);
      FUN_1800010ec(local_b8);
    }
    uVar5 = *(ulonglong *)(local_98 + 0x28);
    lVar7 = uVar5 - local_78;
    if (uVar5 < local_78) {
      lVar7 = 0;
    }
    lVar9 = 0;
    if (0 < (longlong)uVar5) {
      lVar9 = lVar7;
    }
    uVar6 = *(undefined1 *)param_3;
    if ((*(uint *)(local_98 + 0x18) & 0x1c0) == 0x40) {
      lVar8 = *(longlong *)(param_3 + 2);
    }
    else {
      uStack_5c = (undefined3)((uint)param_3[1] >> 8);
      uStack_60 = *(undefined4 *)((longlong)param_3 + 1);
      lVar8 = *(longlong *)(param_3 + 2);
      uVar1 = uStack_60;
      while (uStack_60 = uVar1, lVar9 != 0) {
        if ((lVar8 == 0) || (sVar2 = FUN_1800a4a96(lVar8,param_5), sVar2 == -1)) {
          uVar6 = 1;
        }
        lVar7 = lVar7 + -1;
        uVar1 = uStack_60;
        lVar9 = lVar7;
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
    if (local_78 != 0) {
      uVar5 = local_78;
      ppppuVar10 = &local_88;
      if (7 < local_70) {
        ppppuVar10 = (undefined8 ****)local_88;
      }
      do {
        if ((lVar8 == 0) || (sVar2 = FUN_1800a4a96(lVar8,*(undefined2 *)ppppuVar10), sVar2 == -1)) {
          uVar6 = 1;
        }
        ppppuVar10 = (undefined8 ****)((longlong)ppppuVar10 + 2);
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    *(undefined1 *)param_3 = uVar6;
    param_3[1] = CONCAT31(uStack_54,local_58._3_1_);
    *(undefined4 *)((longlong)param_3 + 1) = local_58;
    *(longlong *)(param_3 + 2) = lVar8;
    *(undefined8 *)(local_98 + 0x28) = 0;
    uVar6 = *(undefined1 *)param_3;
    uStack_4c = (undefined3)((uint)param_3[1] >> 8);
    lVar7 = *(longlong *)(param_3 + 2);
    uVar1 = *(undefined4 *)((longlong)param_3 + 1);
    for (; uStack_50 = uVar1, lVar9 != 0; lVar9 = lVar9 + -1) {
      if ((lVar7 == 0) || (sVar2 = FUN_1800a4a96(lVar7,param_5), sVar2 == -1)) {
        uVar6 = 1;
      }
      uVar1 = uStack_50;
    }
    *local_90 = uVar6;
    uStack_50._3_1_ = (undefined1)((uint)uVar1 >> 0x18);
    *(undefined4 *)(local_90 + 1) = uVar1;
    *(uint *)(local_90 + 4) = CONCAT31(uStack_4c,uStack_50._3_1_);
    *(longlong *)(local_90 + 8) = lVar7;
    FUN_1800010ec(&local_88);
    param_2 = local_90;
  }
  return param_2;
}

