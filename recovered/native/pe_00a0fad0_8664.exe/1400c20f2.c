/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400c20f2 */

void FUN_1400c20f2(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  code ***local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  ulonglong local_1e8;
  undefined1 local_138 [32];
  undefined1 local_118 [32];
  undefined1 local_f8 [32];
  code *local_d8;
  undefined8 local_d0;
  longlong local_b8;
  longlong local_b0;
  code ***local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  longlong lStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  uVar3 = FUN_1400052b8(&PTR_DAT_1401c97b0,"Loading Maps ... ");
  FUN_140041192(uVar3);
  FUN_1400bda94(&local_58,param_1);
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
  local_b0 = param_1 + 0x260;
  local_b8 = param_1 + 0x21;
  uVar3 = 0;
  while( true ) {
    cVar1 = FUN_14004351d(&local_88,&local_98);
    if (cVar1 != '\0') break;
    FUN_1400c5422(local_138,local_88);
    FUN_140041956(local_f8,local_118);
    FUN_140005554(&local_200,&DAT_14016edb2,0);
    FUN_14000559c(local_f8,&local_d8);
    local_a8 = (code ***)&local_200;
    if (7 < local_1e8) {
      local_a8 = local_200;
    }
    local_a0 = local_1f0;
    iVar2 = FUN_140041fc4(&local_d8,&local_a8);
    FUN_140005690(&local_d8);
    FUN_140005690(&local_200);
    if (iVar2 == 0) {
      uVar4 = FUN_1400ac2d3(&DAT_1401d4890,"\rLoading Map: ");
      FUN_140055d5e(local_f8,&local_200);
      plVar5 = (longlong *)FUN_1400ac5a3(uVar4,&local_200);
      FUN_1400a8a67(&local_a8,0x20);
      *(undefined2 *)((longlong)plVar5 + (longlong)*(int *)(*plVar5 + 4) + 0x58) = local_a8._0_2_;
      FUN_1400da260(&local_d8,uVar3);
      (*local_d8)((longlong)plVar5 + (longlong)*(int *)(*plVar5 + 4),local_d0);
      uVar3 = FUN_1400ac2d3(plVar5,&DAT_1401728de);
      FUN_140041192(uVar3);
      FUN_140005690(&local_200);
      FUN_140055d5e(local_f8,&local_d8);
      FUN_14000892c(&local_200,&local_d8);
      uVar3 = local_1f0;
      FUN_140005242(&local_200);
      FUN_140005690(&local_d8);
      FUN_1400c58c4(&local_200,local_f8);
      FUN_1400c5b3a(local_b0,&local_200);
      FUN_1400c5a44(&local_200);
    }
    FUN_140005690(local_f8);
    FUN_140043372(local_138);
    FUN_1400bdb06(&local_88);
  }
  FUN_140005942(&local_98);
  FUN_140005942(&local_88);
  FUN_140005942(&local_58);
  plVar5 = (longlong *)FUN_1400052b8(&PTR_DAT_1401c97b0,"\rLoading Maps ... Done");
  FUN_1400857d9(local_138,0x20);
  *(undefined1 *)((longlong)plVar5 + (longlong)*(int *)(*plVar5 + 4) + 0x58) = local_138[0];
  FUN_1400da260(&local_200,uVar3);
  (*(code *)local_200)((longlong)*(int *)(*plVar5 + 4) + (longlong)plVar5,local_1f8);
  uVar3 = FUN_1400052b8(plVar5,&DAT_1401728de);
  FUN_1400054d7(uVar3);
  return;
}

