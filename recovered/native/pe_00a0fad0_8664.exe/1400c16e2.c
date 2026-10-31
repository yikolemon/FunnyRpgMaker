/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400c16e2 */

void FUN_1400c16e2(longlong param_1)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  bool bVar7;
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
  uVar5 = FUN_1400052b8(&PTR_DAT_1401c97b0,"Loading Databases ... ");
  FUN_140041192(uVar5);
  FUN_140005554(local_158,"BasicData",0);
  FUN_14007dcb3(local_1f0,local_80,local_158);
  FUN_1400058d0(&local_60,local_1f0);
  FUN_140005690(local_1f0);
  FUN_140005690(local_158);
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
  FUN_140005942(&local_78);
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
  FUN_140005942(&local_98);
  local_80 = local_80 + 0x2f8;
  while (cVar2 = FUN_14004351d(&local_a8,&local_d8), cVar2 == '\0') {
    FUN_1400c5422(local_158,local_a8);
    FUN_140041956(local_210,local_138);
    FUN_140005554(local_1f0,".project",0);
    FUN_14000559c(local_210,local_178);
    local_c8 = local_1f0;
    if (7 < local_1d8) {
      local_c8 = local_1f0[0];
    }
    local_c0 = local_1e0;
    iVar3 = FUN_140041fc4(local_178,&local_c8);
    uVar6 = iVar3 == 0;
    if ((bool)uVar6) {
      local_4c = 1;
      FUN_140005554(local_f8,"SysDataBaseBasic.project",0);
      local_4a = 1;
      local_4b = 0;
      local_49 = 1;
      FUN_140055d5e(local_210,local_118);
      local_4d = 1;
      local_4e = 0;
      local_c8 = local_f8;
      if (7 < local_e0) {
        local_c8 = local_f8[0];
      }
      local_c0 = local_e8;
      iVar4 = FUN_140041fc4(local_118,&local_c8);
      bVar7 = iVar4 != 0;
    }
    else {
      bVar7 = false;
    }
    local_4e = uVar6;
    local_4d = uVar6;
    uVar1 = uVar6;
    if (iVar3 == 0) {
      FUN_140005690(local_118);
      local_4b = uVar6;
      local_4a = uVar6;
      FUN_140005690(local_f8);
      uVar6 = local_4b;
      uVar1 = local_4a;
    }
    local_4a = uVar1;
    local_4b = uVar6;
    FUN_140005690(local_178);
    FUN_140005690(local_1f0);
    if (bVar7) {
      FUN_140041956(local_178,local_210);
      FUN_140041956(&local_c8,local_210);
      FUN_140005554(local_1f0,".dat",0);
      FUN_14007f1da(&local_c8,local_1f0);
      FUN_140005690(local_1f0);
      FUN_14007f23c(local_1f0,local_178);
      FUN_1400c5486(local_80,local_1f0);
      FUN_14007f7bc(local_1f0);
      FUN_140005690(&local_c8);
      FUN_140005690(local_178);
    }
    FUN_140005690(local_210);
    FUN_140043372(local_158);
    FUN_140005988(&local_a8);
  }
  FUN_140005942(&local_d8);
  FUN_140005942(&local_a8);
  FUN_140005942(&local_60);
  uVar5 = FUN_1400052b8(&PTR_DAT_1401c97b0,"Done");
  FUN_1400054d7(uVar5);
  return;
}

