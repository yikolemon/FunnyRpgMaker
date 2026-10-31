/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14005368c */

undefined4 FUN_14005368c(int *param_1,int *param_2)

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  char cVar4;
  undefined4 uVar5;
  longlong local_f0;
  longlong local_e8;
  int local_d8 [8];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong lStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong local_58;
  longlong local_50;
  int local_48;
  undefined1 local_41;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  uVar5 = 1;
  if ((char)param_1[0x4c] == '\x01') {
    local_48 = *param_2;
    bVar1 = local_48 >= 0;
    if (local_48 < 0) {
      bVar2 = true;
    }
    else {
      FUN_1400786ec(&local_f0);
      bVar2 = (int)((ulonglong)(local_e8 - local_f0) >> 5) <= local_48;
    }
    local_41 = bVar1;
    if (-1 < local_48) {
      FUN_14000eeca(&local_f0);
    }
    uVar5 = 0xb;
    if (!bVar2) {
      local_b8 = 0;
      uStack_b0 = 0;
      local_a8 = 0;
      *param_1 = *param_2;
      FUN_14000550c(local_d8,param_1 + 0x44,0);
      FUN_1400058d0(&local_58,local_d8);
      FUN_140005690(local_d8);
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
      local_98 = 0;
      uStack_90 = 0;
      lStack_70 = local_50;
      FUN_140005942(&local_78);
      while( true ) {
        cVar4 = FUN_14004351d(&local_88,&local_98);
        lVar3 = local_88;
        if (cVar4 != '\0') break;
        FUN_140043528(local_88,local_d8);
        if (local_d8[0] == 3) {
          FUN_14000892c(local_d8,lVar3 + 0x20);
          FUN_1400436a6(&local_b8,local_d8);
          FUN_140005242(local_d8);
        }
        FUN_140005988(&local_88);
      }
      FUN_140005942(&local_98);
      FUN_140005942(&local_88);
      FUN_140005942(&local_58);
      uVar5 = FUN_140053bcc(param_1,&local_b8);
      FUN_140041304(&local_b8);
    }
  }
  return uVar5;
}

