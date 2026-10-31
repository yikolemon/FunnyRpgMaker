/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140009feb */

longlong * thunk_FUN_14000c6fc(longlong *param_1,undefined8 *param_2,byte param_3)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  bool bVar6;
  longlong *plStack_50;
  char cStack_48;
  longlong *plStack_40;
  undefined1 uStack_31;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  plStack_40 = param_1;
  FUN_14000c914(&plStack_50,param_1,1);
  uVar2 = 2;
  if (cStack_48 == '\x01') {
    uStack_31 = 0;
    param_2[2] = 0;
    puVar4 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      puVar4 = (undefined8 *)*param_2;
    }
    *(undefined1 *)puVar4 = 0;
    plVar1 = *(longlong **)((longlong)plStack_40 + (longlong)*(int *)(*plStack_40 + 4) + 0x48);
    if ((*(byte **)plVar1[7] == (byte *)0x0) || (*(int *)plVar1[10] < 1)) {
      uStack_31 = 0;
      uVar2 = (**(code **)(*plVar1 + 0x30))();
    }
    else {
      uVar2 = (uint)**(byte **)plVar1[7];
    }
    bVar6 = false;
    while( true ) {
      if (uVar2 == 0xffffffff) break;
      if (uVar2 == param_3) {
        uStack_31 = 1;
        uVar2 = 0;
        FUN_14000c9ac(*(undefined8 *)
                       ((longlong)plStack_40 + (longlong)*(int *)(*plStack_40 + 4) + 0x48));
        goto code_r0x00014000c824;
      }
      if (0x7ffffffffffffffe < (ulonglong)param_2[2]) {
        uVar3 = 2;
        goto LAB_14000c814;
      }
      uStack_31 = bVar6;
      FUN_14000cf50(param_2,uVar2);
      uStack_31 = 1;
      bVar6 = true;
      uVar2 = FUN_14000c9de(*(undefined8 *)
                             ((longlong)plStack_40 + (longlong)*(int *)(*plStack_40 + 4) + 0x48));
    }
    uVar3 = 1;
LAB_14000c814:
    uVar2 = uVar3 | 2;
    if (bVar6) {
      uVar2 = uVar3;
    }
  }
code_r0x00014000c824:
  lVar5 = (longlong)*(int *)(*plStack_40 + 4);
  FUN_14000a9f0((longlong)plStack_40 + lVar5,
                (uint)(*(longlong *)((longlong)plStack_40 + lVar5 + 0x48) == 0) << 2 |
                uVar2 | *(uint *)((longlong)plStack_40 + lVar5 + 0x10),0);
  plVar1 = *(longlong **)((longlong)plStack_50 + (longlong)*(int *)(*plStack_50 + 4) + 0x48);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  return plStack_40;
}

