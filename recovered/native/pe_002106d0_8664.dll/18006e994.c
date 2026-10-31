/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18006e994 */

void FUN_18006e994(longlong param_1)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined1 uVar5;
  bool bVar6;
  undefined1 local_210 [32];
  undefined8 ***local_1f0 [2];
  undefined8 local_1e0;
  ulonglong local_1d8;
  undefined1 local_178 [32];
  undefined1 local_158 [32];
  undefined1 local_138 [32];
  undefined1 local_118 [32];
  undefined8 ***local_f8 [2];
  undefined8 local_e8;
  ulonglong local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 ***local_c8;
  undefined8 local_c0;
  undefined8 local_a8;
  longlong local_a0;
  undefined8 local_98;
  longlong lStack_90;
  longlong local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_60;
  longlong local_58;
  undefined1 local_4e;
  undefined1 local_4d;
  undefined1 local_4c;
  undefined1 local_4b;
  undefined1 local_4a;
  undefined1 local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_80 = param_1;
  FUN_180001e04(local_158,"BasicData",0);
  FUN_180001c90(local_1f0,local_80,local_158);
  FUN_18006a88a(&local_60,local_1f0);
  FUN_180001e4c(local_1f0);
  FUN_180001e4c(local_158);
  if (local_58 == 0) {
    local_a0 = 0;
  }
  else {
    LOCK();
    *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + 1;
    UNLOCK();
    local_a0 = local_58;
  }
  local_a8 = local_60;
  local_78 = 0;
  uStack_70 = 0;
  FUN_1800578f2(&local_78);
  if (local_58 == 0) {
    local_58 = 0;
  }
  else {
    LOCK();
    *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + 1;
    UNLOCK();
  }
  local_98 = local_60;
  local_d8 = 0;
  uStack_d0 = 0;
  lStack_90 = local_58;
  FUN_1800578f2(&local_98);
  local_80 = local_80 + 0x2f8;
  while (cVar2 = FUN_18006cd79(&local_a8,&local_d8), cVar2 == '\0') {
    FUN_18009f6dc(local_158,local_a8);
    FUN_180002d2c(local_210,local_138);
    FUN_180001e04(local_1f0,".project",0);
    FUN_18006a8fc(local_210,local_178);
    local_c8 = local_1f0;
    if (7 < local_1d8) {
      local_c8 = local_1f0[0];
    }
    local_c0 = local_1e0;
    iVar3 = FUN_18006d14a(local_178,&local_c8);
    uVar5 = iVar3 == 0;
    if ((bool)uVar5) {
      local_4c = 1;
      FUN_180001e04(local_f8,"SysDataBaseBasic.project",0);
      local_4a = 1;
      local_4b = 0;
      local_49 = 1;
      FUN_18006acce(local_210,local_118);
      local_4d = 1;
      local_4e = 0;
      local_c8 = local_f8;
      if (7 < local_e0) {
        local_c8 = local_f8[0];
      }
      local_c0 = local_e8;
      iVar4 = FUN_18006d14a(local_118,&local_c8);
      bVar6 = iVar4 != 0;
    }
    else {
      bVar6 = false;
    }
    local_4e = uVar5;
    local_4d = uVar5;
    uVar1 = uVar5;
    if (iVar3 == 0) {
      FUN_180001e4c(local_118);
      local_4b = uVar5;
      local_4a = uVar5;
      FUN_180001e4c(local_f8);
      uVar5 = local_4b;
      uVar1 = local_4a;
    }
    local_4a = uVar1;
    local_4b = uVar5;
    FUN_180001e4c(local_178);
    FUN_180001e4c(local_1f0);
    if (bVar6) {
      FUN_180002d2c(local_178,local_210);
      FUN_180002d2c(&local_c8,local_210);
      FUN_180001e04(local_1f0,".dat",0);
      FUN_18009f740(&local_c8,local_1f0);
      FUN_180001e4c(local_1f0);
      FUN_18009f7a2(local_1f0,local_178);
      FUN_18009fa7a(local_80,local_1f0);
      FUN_18009f8ba(local_1f0);
      FUN_180001e4c(&local_c8);
      FUN_180001e4c(local_178);
    }
    FUN_180001e4c(local_210);
    FUN_18006c30c(local_158);
    FUN_18006ab46(&local_a8);
  }
  FUN_1800578f2(&local_d8);
  FUN_1800578f2(&local_a8);
  FUN_1800578f2(&local_60);
  return;
}

