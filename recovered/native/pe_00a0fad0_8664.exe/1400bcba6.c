/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400bcba6 */

void FUN_1400bcba6(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint *puVar6;
  undefined8 ***pppuVar7;
  uint local_128 [8];
  undefined8 **local_108 [2];
  longlong local_f8;
  ulonglong local_f0;
  longlong local_e8 [4];
  undefined1 local_c8 [32];
  undefined1 local_a8 [56];
  longlong local_70;
  longlong *local_68;
  longlong local_60;
  longlong *local_58;
  uint local_40;
  undefined4 uStack_3c;
  longlong *local_38;
  longlong local_30;
  ulonglong local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  iVar4 = *(int *)(*param_2 + 0x20);
  if (iVar4 == 0x79) {
    FUN_1400cc4cf(&local_60);
    if (*(uint **)(local_60 + 8) == *(uint **)(local_60 + 0x10)) {
      local_40 = 0;
    }
    else {
      local_40 = **(uint **)(local_60 + 8);
      uVar3 = local_40 - 2000000;
      if (uVar3 < 1000000) {
        local_40 = uVar3;
      }
    }
    FUN_1400ccc4c(*param_1 + 0x28,local_e8);
    local_128[0] = 0;
    if (4 < (ulonglong)(*(longlong *)(local_60 + 0x10) - *(longlong *)(local_60 + 8))) {
      local_128[0] = *(uint *)(*(longlong *)(local_60 + 8) + 4);
    }
    FUN_1400ccfbc(local_e8[0] + 0x28,local_e8);
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_58 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_58)(local_58);
        LOCK();
        piVar2 = (int *)((longlong)local_58 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_58 + 8))(local_58);
        }
      }
    }
  }
  else if (iVar4 == 1000) {
    FUN_1400cc531(&local_70);
    if ((*(int **)(local_70 + 8) != *(int **)(local_70 + 0x10)) && (**(int **)(local_70 + 8) == 7))
    {
      lVar5 = *param_1;
      puVar6 = &local_40;
      FUN_14009d6a2(local_70,puVar6);
      FUN_14007709a(local_e8);
      if (7 < local_28) {
        puVar6 = (uint *)CONCAT44(uStack_3c,local_40);
      }
      FUN_140031ece(local_e8,&local_60,puVar6,(longlong)puVar6 + local_30 * 2);
      FUN_14007720c(local_e8);
      FUN_1400cc594(local_70,local_108);
      FUN_14007709a(local_e8);
      pppuVar7 = local_108;
      if (7 < local_f0) {
        pppuVar7 = (undefined8 ***)local_108[0];
      }
      FUN_140031ece(local_e8,local_128,pppuVar7,(longlong)pppuVar7 + local_f8 * 2);
      FUN_14007720c(local_e8);
      FUN_1400bca0a(local_e8,&local_60,local_128);
      FUN_1400cbd66(lVar5,local_e8);
      FUN_140016e5c(local_a8);
      FUN_1400017de(local_c8);
      FUN_1400017de(local_e8);
      FUN_1400017de(local_128);
      FUN_140005242(local_108);
      FUN_1400017de(&local_60);
      FUN_140005242(&local_40);
    }
    if (local_68 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_68 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_68)(local_68);
        LOCK();
        piVar2 = (int *)((longlong)local_68 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_68 + 8))(local_68);
        }
      }
    }
  }
  else if (iVar4 == 0x7a) {
    FUN_1400cc363(&local_40);
    puVar6 = *(uint **)(CONCAT44(uStack_3c,local_40) + 8);
    if (puVar6 == *(uint **)(CONCAT44(uStack_3c,local_40) + 0x10)) {
      local_128[0] = 0;
    }
    else {
      local_128[0] = *puVar6;
      if (local_128[0] - 3000000 < 1000000) {
        local_128[0] = local_128[0] % 1000000;
      }
    }
    FUN_1400cc5d4(*param_1 + 0x18,local_e8);
    FUN_1400cc3c6(CONCAT44(uStack_3c,local_40));
    FUN_1400cc9b2(local_e8[0] + 0x28,&local_60,local_e8);
    FUN_1400017de(local_e8);
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_38 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar2 = (int *)((longlong)local_38 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_38 + 8))(local_38);
        }
      }
    }
  }
  return;
}

