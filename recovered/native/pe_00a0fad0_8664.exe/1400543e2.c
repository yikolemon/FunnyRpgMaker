/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400543e2 */

undefined4 FUN_1400543e2(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 local_108 [32];
  undefined1 local_e8 [32];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong lStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong local_58;
  longlong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  uVar2 = 1;
  if (*(char *)(param_1 + 0x130) == '\x01') {
    local_c8 = 0;
    uStack_c0 = 0;
    local_b8 = 0;
    local_90 = param_1;
    FUN_14000550c(local_e8,param_1 + 0x110,0);
    FUN_1400058d0(&local_58,local_e8);
    FUN_140005690(local_e8);
    if (local_50 == 0) {
      local_80 = 0;
    }
    else {
      LOCK();
      *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
      UNLOCK();
      local_80 = local_50;
    }
    local_88 = local_58;
    local_68 = 0;
    uStack_60 = 0;
    FUN_140005942(&local_68);
    if (local_50 == 0) {
      local_50 = 0;
    }
    else {
      LOCK();
      *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
      UNLOCK();
    }
    local_78 = local_58;
    local_a8 = 0;
    uStack_a0 = 0;
    lStack_70 = local_50;
    FUN_140005942(&local_78);
    while( true ) {
      cVar1 = FUN_14004351d(&local_88,&local_a8);
      if (cVar1 != '\0') break;
      lVar3 = local_88 + 0x20;
      FUN_14000559c(lVar3,local_108);
      FUN_14000892c(local_e8,local_108);
      cVar1 = FUN_1400ae712(local_e8);
      FUN_140005242(local_e8);
      FUN_140005690(local_108);
      if (cVar1 != '\0') {
        FUN_14000892c(local_e8,lVar3);
        FUN_1400436a6(&local_c8,local_e8);
        FUN_140005242(local_e8);
      }
      FUN_140005988(&local_88);
    }
    FUN_140005942(&local_a8);
    FUN_140005942(&local_88);
    FUN_140005942(&local_58);
    uVar2 = FUN_140054968(local_90,&local_c8);
    FUN_140041304(&local_c8);
  }
  return uVar2;
}

