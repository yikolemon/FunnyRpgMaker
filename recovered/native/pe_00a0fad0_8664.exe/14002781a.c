/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14002781a */

longlong * FUN_14002781a(longlong *param_1,undefined8 param_2,longlong param_3,undefined1 param_4)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 unaff_RBX;
  ulonglong uVar4;
  uint *puVar5;
  undefined1 local_e8 [32];
  undefined1 local_c8 [64];
  uint local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong *local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_4);
  puVar5 = &local_88;
  local_40 = param_1;
  FUN_140006874(puVar5);
  if (0xf < uStack_70) {
    puVar5 = (uint *)CONCAT44(uStack_84,local_88);
  }
  FUN_140017bc5(&local_68,puVar5,local_78 + (longlong)puVar5,puVar5);
  local_68 = CONCAT44(uStack_84,local_88);
  uStack_60 = CONCAT44(uStack_7c,uStack_80);
  local_58 = local_78;
  uStack_50 = (undefined4)uStack_70;
  uStack_4c = uStack_70._4_4_;
  local_78 = 0;
  uStack_70 = 0xf;
  local_88 = local_88 & 0xffffff00;
  FUN_1400017de(&local_88);
  cVar2 = FUN_14000d7b8(&local_68,"default");
  FUN_1400017de(&local_68);
  if (cVar2 == '\0') {
    lVar3 = FUN_14000e108(param_2,uVar4 & 0xffffffff,0);
    if (lVar3 == -1) {
      FUN_140006874(&local_68,param_2);
      FUN_140020e9e(local_40,&local_68,1);
      FUN_1400017de(&local_68);
    }
    else {
      FUN_140006874(local_e8,param_2);
      FUN_14002823b(&local_68,local_e8,uVar4 & 0xffffffff);
      plVar1 = local_40;
      if (local_40 != &local_68) {
        FUN_14000eeca(local_40);
        *plVar1 = local_68;
        plVar1[1] = uStack_60;
        plVar1[2] = local_58;
        local_68 = 0;
        uStack_60 = 0;
        local_58 = 0;
      }
      FUN_14000eeca(&local_68);
    }
  }
  lVar3 = FUN_14000e108(param_3,uVar4 & 0xffffffff,0);
  if (lVar3 != -1) {
    FUN_140006874(local_c8,param_3);
    FUN_14002823b(&local_68,local_c8,uVar4 & 0xffffffff);
    lVar3 = uStack_60 + -0x20;
    if (param_3 != lVar3) {
      if (0xf < *(ulonglong *)(uStack_60 + -8)) {
        lVar3 = *(longlong *)(uStack_60 + -0x20);
      }
      FUN_140017200(param_3,lVar3,*(undefined8 *)(uStack_60 + -0x10));
    }
    FUN_1400017de(uStack_60 + -0x20);
    uStack_60 = uStack_60 + -0x20;
    FUN_1400294be(local_40,local_40[1],local_68,uStack_60 - local_68 >> 5);
    FUN_14000eeca(&local_68);
  }
  FUN_140029006(local_40);
  return local_40;
}

