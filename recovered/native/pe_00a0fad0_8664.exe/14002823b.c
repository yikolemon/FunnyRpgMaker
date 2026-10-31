/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14002823b */

undefined8 * FUN_14002823b(undefined8 *param_1,uint *param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  uint *puVar4;
  uint *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint local_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_88;
  uint local_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_59;
  undefined8 *local_58;
  uint *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  puVar5 = param_2;
  if (0xf < *(ulonglong *)(param_2 + 6)) {
    puVar5 = *(uint **)param_2;
  }
  local_58 = param_1;
  local_50 = param_2;
  FUN_1400293e4(&local_80,*(longlong *)(param_2 + 4) + (longlong)puVar5);
  puVar4 = local_50;
  lVar7 = *(longlong *)(local_50 + 4);
  puVar5 = local_50;
  if (0xf < *(ulonglong *)(local_50 + 6)) {
    puVar5 = *(uint **)local_50;
  }
  lVar1 = CONCAT44(uStack_7c,local_80);
  uVar3 = (longlong)puVar5 + (lVar7 - lVar1);
  uVar6 = lVar7 - (lVar1 - (longlong)puVar5);
  if (uVar3 <= uVar6) {
    uVar6 = uVar3;
  }
  lVar7 = lVar7 - uVar6;
  FUN_140135ff0(lVar1,uVar6 + lVar1,(lVar7 - (lVar1 - (longlong)puVar5)) + 1);
  *(longlong *)(puVar4 + 4) = lVar7;
  if (0xf < *(ulonglong *)(puVar4 + 6)) {
    puVar4 = *(uint **)puVar4;
  }
  FUN_14002930a(&local_80,puVar4,lVar7 + (longlong)puVar4);
  puVar4 = local_50;
  puVar2 = local_58;
  uVar6 = *(ulonglong *)(local_50 + 4);
  puVar5 = local_50;
  if (0xf < *(ulonglong *)(local_50 + 6)) {
    puVar5 = *(uint **)local_50;
  }
  uVar3 = CONCAT44(uStack_7c,local_80) - (longlong)puVar5;
  if (uVar6 < uVar3) {
    uVar3 = uVar6;
  }
  lVar7 = uVar6 - uVar3;
  FUN_140135ff0(puVar5,uVar3 + (longlong)puVar5,lVar7 + 1);
  *(longlong *)(puVar4 + 4) = lVar7;
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  while (lVar7 != 0) {
    puVar5 = local_50;
    if (0xf < *(ulonglong *)(local_50 + 6)) {
      puVar5 = *(uint **)local_50;
    }
    lVar7 = FUN_14000e108("\"\'`[(<{",(char)*puVar5,0);
    puVar5 = local_50;
    if (lVar7 == -1) {
      if (0xf < *(ulonglong *)(local_50 + 6)) {
        puVar5 = *(uint **)local_50;
      }
      FUN_14002918a(&local_88,puVar5,*(longlong *)(local_50 + 4) + (longlong)puVar5,param_3);
      puVar5 = local_50;
      if (0xf < *(ulonglong *)(local_50 + 6)) {
        puVar5 = *(uint **)local_50;
      }
      if (local_88 == *(longlong *)(local_50 + 4) + (longlong)puVar5) {
        FUN_14000d086(local_58,local_50);
        local_50[4] = 0;
        local_50[5] = 0;
        puVar5 = local_50;
        if (0xf < *(ulonglong *)(local_50 + 6)) {
          puVar5 = *(uint **)local_50;
        }
        *(undefined1 *)puVar5 = 0;
      }
      else {
        FUN_1400292ae(&local_80,puVar5,local_88,&local_a8);
        FUN_14000d086(local_58,&local_80);
        puVar5 = local_50;
        if (0xf < *(ulonglong *)(local_50 + 6)) {
          puVar5 = *(uint **)local_50;
        }
        FUN_1400292ae(&local_a8,local_88 + 1,(longlong)puVar5 + *(longlong *)(local_50 + 4),
                      &local_59);
        puVar5 = local_50;
        if (local_50 != &local_a8) {
          FUN_1400065bc(local_50);
          *(undefined8 *)(puVar5 + 4) = local_98;
          *(undefined8 *)(puVar5 + 6) = uStack_90;
          *puVar5 = local_a8;
          puVar5[1] = uStack_a4;
          puVar5[2] = uStack_a0;
          puVar5[3] = uStack_9c;
          local_98 = 0;
          uStack_90 = 0xf;
          local_a8 = local_a8 & 0xffffff00;
        }
        FUN_1400017de(&local_a8);
        FUN_1400017de(&local_80);
      }
    }
    else {
      puVar4 = local_50;
      if (0xf < *(ulonglong *)(local_50 + 6)) {
        puVar4 = *(uint **)local_50;
      }
      lVar7 = FUN_14000e108("\"\'`[(<{",(char)*puVar4,0);
      uVar6 = FUN_140027fd2(puVar5,0,"\"\'`])>}"[lVar7]);
      if (uVar6 < *(ulonglong *)(local_50 + 4)) {
        FUN_1400191d4(&local_80,local_50,0,uVar6 + 1,&local_a8);
        FUN_14001a45e(local_58,&local_80);
        FUN_1400017de(&local_80);
        if (uVar6 + 2 < *(ulonglong *)(local_50 + 4)) {
          FUN_1400191d4(&local_80,local_50,uVar6 + 2,0xffffffffffffffff,&local_a8);
          puVar5 = local_50;
          if (local_50 != &local_80) {
            FUN_1400065bc(local_50);
            *(undefined8 *)(puVar5 + 4) = local_70;
            *(undefined8 *)(puVar5 + 6) = uStack_68;
            *puVar5 = local_80;
            puVar5[1] = uStack_7c;
            puVar5[2] = uStack_78;
            puVar5[3] = uStack_74;
            local_70 = 0;
            uStack_68 = 0xf;
            local_80 = local_80 & 0xffffff00;
          }
          FUN_1400017de(&local_80);
        }
        else {
          local_50[4] = 0;
          local_50[5] = 0;
          puVar5 = local_50;
          if (0xf < *(ulonglong *)(local_50 + 6)) {
            puVar5 = *(uint **)local_50;
          }
          *(undefined1 *)puVar5 = 0;
        }
      }
      else {
        FUN_14001a45e(local_58);
        local_50[4] = 0;
        local_50[5] = 0;
        puVar5 = local_50;
        if (0xf < *(ulonglong *)(local_50 + 6)) {
          puVar5 = *(uint **)local_50;
        }
        *(undefined1 *)puVar5 = 0;
      }
    }
    puVar5 = local_50;
    if (0xf < *(ulonglong *)(local_50 + 6)) {
      puVar5 = *(uint **)local_50;
    }
    FUN_1400293e4(&local_80,*(longlong *)(local_50 + 4) + (longlong)puVar5);
    puVar4 = local_50;
    puVar5 = local_50;
    if (0xf < *(ulonglong *)(local_50 + 6)) {
      puVar5 = *(uint **)local_50;
    }
    lVar7 = *(longlong *)(local_50 + 4);
    lVar1 = CONCAT44(uStack_7c,local_80);
    uVar3 = (longlong)puVar5 + (lVar7 - lVar1);
    uVar6 = lVar7 - (lVar1 - (longlong)puVar5);
    if (uVar3 <= uVar6) {
      uVar6 = uVar3;
    }
    lVar7 = lVar7 - uVar6;
    FUN_140135ff0(lVar1,uVar6 + lVar1,(lVar7 - (lVar1 - (longlong)puVar5)) + 1);
    *(longlong *)(puVar4 + 4) = lVar7;
    if (0xf < *(ulonglong *)(puVar4 + 6)) {
      puVar4 = *(uint **)local_50;
    }
    FUN_14002930a(&local_80,puVar4,lVar7 + (longlong)puVar4);
    puVar4 = local_50;
    puVar5 = local_50;
    if (0xf < *(ulonglong *)(local_50 + 6)) {
      puVar5 = *(uint **)local_50;
    }
    uVar6 = *(ulonglong *)(local_50 + 4);
    uVar3 = CONCAT44(uStack_7c,local_80) - (longlong)puVar5;
    if (uVar6 < uVar3) {
      uVar3 = uVar6;
    }
    lVar7 = uVar6 - uVar3;
    FUN_140135ff0(puVar5,uVar3 + (longlong)puVar5);
    *(longlong *)(puVar4 + 4) = lVar7;
  }
  FUN_1400017de(local_50);
  return local_58;
}

