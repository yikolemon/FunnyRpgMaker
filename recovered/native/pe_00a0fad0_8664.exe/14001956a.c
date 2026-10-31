/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14001956a */

undefined4 * FUN_14001956a(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  longlong lVar7;
  uint local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  longlong *local_38;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_38 = *(longlong **)(param_1 + 0x1a8);
  lVar7 = param_1 + 0x150;
  local_2a = local_38 != (longlong *)0x0;
  if (local_38 == (longlong *)0x0) {
    local_2b = 0;
    FUN_140006874(param_2,lVar7);
  }
  else {
    (**(code **)(*local_38 + 0x10))(local_38,&local_58);
    local_29 = 1;
    FUN_14000cf50(&local_58,10);
    local_68 = (undefined4)local_48;
    uStack_64 = local_48._4_4_;
    uStack_60 = (undefined4)uStack_40;
    uStack_5c = uStack_40._4_4_;
    local_78 = local_58;
    uStack_74 = uStack_54;
    uStack_70 = uStack_50;
    uStack_6c = uStack_4c;
    local_48 = 0;
    uStack_40 = 0xf;
    local_58 = local_58 & 0xffffff00;
    if (0xf < *(ulonglong *)(param_1 + 0x168)) {
      lVar7 = *(longlong *)(param_1 + 0x150);
    }
    local_2b = 1;
    puVar6 = (undefined4 *)FUN_14000b1f8(&local_78,lVar7,*(undefined8 *)(param_1 + 0x160));
    uVar1 = *puVar6;
    uVar2 = puVar6[1];
    uVar3 = puVar6[2];
    uVar4 = puVar6[3];
    uVar5 = *(undefined8 *)(puVar6 + 6);
    *(undefined8 *)(param_2 + 4) = *(undefined8 *)(puVar6 + 4);
    *(undefined8 *)(param_2 + 6) = uVar5;
    *param_2 = uVar1;
    param_2[1] = uVar2;
    param_2[2] = uVar3;
    param_2[3] = uVar4;
    *(undefined8 *)(puVar6 + 4) = 0;
    *(undefined8 *)(puVar6 + 6) = 0xf;
    *(undefined1 *)puVar6 = 0;
  }
  local_2b = local_2a;
  if (local_38 != (longlong *)0x0) {
    FUN_1400017de(&local_78);
  }
  local_29 = local_2a;
  if (local_38 != (longlong *)0x0) {
    FUN_1400017de(&local_58);
  }
  return param_2;
}

