/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140031ece */

undefined4 *
FUN_140031ece(longlong param_1,undefined4 *param_2,undefined1 *param_3,undefined1 *param_4)

{
  code *pcVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  undefined8 ****ppppuVar6;
  undefined8 ***local_a0;
  undefined8 ***local_98;
  undefined8 uStack_90;
  ulonglong local_88;
  ulonglong local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 *local_58;
  undefined1 *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_98 = (undefined8 ****)0x0;
  uStack_90 = 0;
  local_88 = 0;
  local_80 = 0xf;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0xf;
  if (*(char *)(param_1 + 0x68) == '\0') {
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  local_58 = param_2;
  local_50 = param_3;
  FUN_14002548a(&local_98,8,0);
  lVar3 = 0;
  puVar5 = param_3;
  do {
    *(longlong *)(param_1 + 0x70) = lVar3;
    if (puVar5 == param_4) {
      *(undefined8 *)(local_58 + 4) = local_68;
      *(undefined8 *)(local_58 + 6) = uStack_60;
      *local_58 = (undefined4)local_78;
      local_58[1] = local_78._4_4_;
      local_58[2] = (undefined4)uStack_70;
      local_58[3] = uStack_70._4_4_;
      local_68 = 0;
      uStack_60 = 0xf;
      local_78 = local_78 & 0xffffffffffffff00;
LAB_140032086:
      FUN_1400017de(&local_78);
      FUN_1400017de(&local_98);
      return local_58;
    }
    ppppuVar6 = &local_98;
    if (0xf < local_80) {
      ppppuVar6 = (undefined8 ****)local_98;
    }
    uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x38))
                      (*(longlong **)(param_1 + 8),param_1 + 0x60,puVar5,param_4,&local_50,ppppuVar6
                       ,local_88 + (longlong)ppppuVar6,&local_a0);
    if (uVar2 < 2) {
      if (ppppuVar6 < local_a0) {
        FUN_14000b1f8(&local_78,ppppuVar6,(longlong)local_a0 - (longlong)ppppuVar6);
      }
      else {
        if (0xf < local_88) {
          if (*(char *)(param_1 + 0x69) != '\x01') goto LAB_1400320be;
          FUN_140006874(local_58,param_1 + 0x20);
          goto LAB_140032086;
        }
        FUN_14002548a(&local_98,8,0);
      }
    }
    else {
      if (uVar2 != 3) {
        if (*(char *)(param_1 + 0x69) != '\x01') {
          FUN_140008984("bad conversion");
LAB_1400320be:
          FUN_140008984("bad conversion");
          pcVar1 = (code *)swi(3);
          puVar4 = (undefined4 *)(*pcVar1)();
          return puVar4;
        }
        FUN_140006874(local_58,param_1 + 0x20);
        goto LAB_140032086;
      }
      for (; local_50 != param_4; local_50 = local_50 + 2) {
        FUN_14000cf50(&local_78,*local_50);
      }
    }
    lVar3 = (longlong)local_50 - (longlong)param_3 >> 1;
    puVar5 = local_50;
  } while( true );
}

