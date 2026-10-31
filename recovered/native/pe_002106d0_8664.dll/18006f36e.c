/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18006f36e */

void FUN_18006f36e(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined1 local_200 [200];
  undefined1 local_138 [32];
  undefined1 local_118 [32];
  undefined8 **local_f8;
  undefined8 local_f0;
  undefined1 local_e8 [32];
  undefined1 local_c8 [32];
  longlong local_a8;
  longlong local_a0;
  undefined8 **local_98 [2];
  undefined8 local_88;
  ulonglong local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong lStack_60;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  FUN_1800a69f0(&local_30);
  if (local_28 == 0) {
    local_50 = 0;
  }
  else {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
    local_50 = local_28;
  }
  local_58 = local_30;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1800578f2(&local_48);
  if (local_28 == 0) {
    local_28 = 0;
  }
  else {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  local_68 = local_30;
  local_78 = 0;
  uStack_70 = 0;
  lStack_60 = local_28;
  FUN_1800578f2(&local_68);
  local_a0 = param_1 + 0x260;
  local_a8 = param_1 + 0x21;
  while( true ) {
    cVar1 = FUN_18006cd79(&local_58,&local_78);
    if (cVar1 != '\0') break;
    FUN_18009f6dc(local_138,local_58);
    FUN_180002d2c(local_e8,local_118);
    FUN_180001e04(local_98,&DAT_1803630c6,0);
    FUN_18006a8fc(local_e8,local_c8);
    local_f8 = local_98;
    if (7 < local_80) {
      local_f8 = local_98[0];
    }
    local_f0 = local_88;
    iVar2 = FUN_18006d14a(local_c8,&local_f8);
    FUN_180001e4c(local_c8);
    FUN_180001e4c(local_98);
    if (iVar2 == 0) {
      FUN_18006acce(local_e8,local_c8);
      FUN_18000358a(local_98,local_c8);
      FUN_1800010ec(local_98);
      FUN_180001e4c(local_c8);
      FUN_1800a6a62(local_200,local_e8);
      FUN_1800a717a(local_a0,local_200);
      FUN_1800a6be2(local_200);
    }
    FUN_180001e4c(local_e8);
    FUN_18006c30c(local_138);
    FUN_1800a6cd8(&local_58);
  }
  FUN_1800578f2(&local_78);
  FUN_1800578f2(&local_58);
  FUN_1800578f2(&local_30);
  return;
}

