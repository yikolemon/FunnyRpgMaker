/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14003830e */

void FUN_14003830e(longlong param_1,longlong **param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong local_78;
  longlong lStack_70;
  longlong local_60;
  longlong *local_58;
  longlong *plStack_50;
  longlong *local_48;
  undefined1 local_31;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  FUN_14003362e();
  if (*(char *)(param_1 + 0x4e) == '\0') {
    plVar2 = param_2[1];
    plVar8 = *param_2;
    *(undefined1 *)(param_1 + 0x4e) = 1;
    if (*(longlong **)(param_1 + 0x88) != (longlong *)0x0) {
      local_88 = (longlong)plVar2 - (longlong)plVar8 >> 5;
      (**(code **)(**(longlong **)(param_1 + 0x88) + 0x10))();
    }
  }
  else if ((*(char *)(param_1 + 0x4f) == '\x01') && (*(longlong *)(param_1 + 0x18) != 0)) {
    uVar1 = *(undefined4 *)(param_1 + 0x324);
    local_78 = *(longlong *)(param_1 + 0x288);
    *(undefined8 *)(param_1 + 0x288) = 0;
    local_88 = *(longlong *)(param_1 + 0x278);
    uStack_80 = *(longlong *)(param_1 + 0x280);
    *(undefined8 *)(param_1 + 0x278) = 0;
    *(undefined8 *)(param_1 + 0x280) = 0;
    FUN_140032a72(param_1);
    *(undefined4 *)(param_1 + 0x324) = uVar1;
    *(undefined1 *)(param_1 + 0x4e) = 1;
    if ((undefined8 *)(param_1 + 0x278) != &local_88) {
      FUN_14003184c();
      *(longlong *)(param_1 + 0x278) = local_88;
      *(longlong *)(param_1 + 0x280) = uStack_80;
      *(longlong *)(param_1 + 0x288) = local_78;
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0;
    }
    FUN_14003184c(&local_88);
  }
  local_31 = 0;
  do {
    if (*param_2 == param_2[1]) break;
    cVar7 = FUN_14003366a(param_1,param_2,&local_31);
  } while (cVar7 != '\0');
  if (*(longlong *)(param_1 + 0x348) == 0) {
    local_60 = param_1;
    FUN_14003d6c6(param_1);
    FUN_140038806(local_60);
    lVar10 = local_60;
    FUN_140038ab4(local_60);
    FUN_140038b82(lVar10,0,0);
    FUN_140038c80(lVar10);
    FUN_140038682(lVar10,param_2);
    local_58 = (longlong *)0x0;
    plStack_50 = (longlong *)0x0;
    local_48 = (longlong *)0x0;
    lVar3 = *(longlong *)(lVar10 + 0x280);
    for (lVar10 = *(longlong *)(lVar10 + 0x278); lVar10 != lVar3; lVar10 = lVar10 + 0x28) {
      FUN_14000d086(&local_58,lVar10 + 8);
    }
    plVar8 = local_58;
    plVar2 = plStack_50;
    if (local_58 != plStack_50) {
      do {
        plVar9 = plVar2 + -4;
        if (plVar9 == plVar8) break;
        lVar10 = *plVar8;
        lVar3 = plVar8[1];
        local_78 = plVar8[2];
        lStack_70 = plVar8[3];
        lVar4 = *plVar9;
        lVar5 = plVar2[-3];
        lVar6 = plVar2[-1];
        plVar8[2] = plVar2[-2];
        plVar8[3] = lVar6;
        *plVar8 = lVar4;
        plVar8[1] = lVar5;
        local_88._0_4_ = (undefined4)lVar10;
        local_88._4_4_ = (undefined4)((ulonglong)lVar10 >> 0x20);
        uStack_80._0_4_ = (undefined4)lVar3;
        uStack_80._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
        plVar2[-2] = local_78;
        plVar2[-1] = lStack_70;
        *(undefined4 *)plVar9 = (undefined4)local_88;
        *(undefined4 *)((longlong)plVar2 + -0x1c) = local_88._4_4_;
        *(undefined4 *)(plVar2 + -3) = (undefined4)uStack_80;
        *(undefined4 *)((longlong)plVar2 + -0x14) = uStack_80._4_4_;
        plVar8 = plVar8 + 4;
        plVar2 = plVar9;
        local_88 = lVar10;
        uStack_80 = lVar3;
      } while (plVar9 != plVar8);
    }
    if (param_2 != &local_58) {
      FUN_14000eeca(param_2);
      *param_2 = local_58;
      param_2[1] = plStack_50;
      param_2[2] = local_48;
      local_58 = (longlong *)0x0;
      plStack_50 = (longlong *)0x0;
      local_48 = (longlong *)0x0;
    }
    FUN_14000eeca(&local_58);
  }
  else if (*(longlong *)(param_1 + 200) != 0) {
    FUN_140038806(param_1);
    FUN_140038ab4(param_1);
    FUN_140038b82(param_1,0,0);
    FUN_140038c80(param_1);
    FUN_140032fde(param_1,0,1);
  }
  return;
}

