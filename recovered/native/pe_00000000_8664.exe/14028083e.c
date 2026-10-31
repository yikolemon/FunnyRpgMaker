/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14028083e */

void FUN_14028083e(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined1 local_200 [200];
  undefined1 local_138 [32];
  undefined1 local_118 [32];
  undefined8 ***local_f8;
  undefined8 local_f0;
  undefined1 local_e8 [32];
  undefined1 local_c8 [32];
  longlong local_a8;
  longlong local_a0;
  undefined8 ***local_98 [2];
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
  FUN_1402b7ec0(&local_30);
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
  FUN_140268dc2(&local_48);
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
  FUN_140268dc2(&local_68);
  local_a0 = param_1 + 0x260;
  local_a8 = param_1 + 0x21;
  while( true ) {
    cVar1 = FUN_14027e249(&local_58,&local_78);
    if (cVar1 != '\0') break;
    FUN_1402b0bac(local_138,local_58);
    FUN_1402141fc(local_e8,local_118);
    FUN_1402132d4(local_98,"es",0);
    FUN_14027bdcc(local_e8,local_c8);
    local_f8 = local_98;
    if (7 < local_80) {
      local_f8 = local_98[0];
    }
    local_f0 = local_88;
    iVar2 = FUN_14027e61a(local_c8,&local_f8);
    FUN_14021331c(local_c8);
    FUN_14021331c(local_98);
    if (iVar2 == 0) {
      FUN_14027c19e(local_e8,local_c8);
      FUN_140214a5a(local_98,local_c8);
      FUN_1402125bc(local_98);
      FUN_14021331c(local_c8);
      FUN_1402b7f32(local_200,local_e8);
      FUN_1402b864a(local_a0,local_200);
      FUN_1402b80b2(local_200);
    }
    FUN_14021331c(local_e8);
    FUN_14027d7dc(local_138);
    FUN_1402b81a8(&local_58);
  }
  FUN_140268dc2(&local_78);
  FUN_140268dc2(&local_58);
  FUN_140268dc2(&local_30);
  return;
}

