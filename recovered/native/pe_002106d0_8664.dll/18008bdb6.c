/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18008bdb6 */

undefined4 *
FUN_18008bdb6(longlong param_1,undefined4 *param_2,undefined1 *param_3,undefined1 *param_4)

{
  code *pcVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  undefined8 ***pppuVar6;
  undefined8 **local_a0;
  undefined8 **local_98;
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
  local_98 = (undefined8 ***)0x0;
  uStack_90 = 0;
  local_88 = 0;
  local_80 = 7;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 7;
  if (*(char *)(param_1 + 0x68) == '\0') {
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  local_58 = param_2;
  local_50 = param_3;
  FUN_180004aca(&local_98,8,0);
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
      uStack_60 = 7;
      local_78 = local_78 & 0xffffffffffff0000;
LAB_18008bf71:
      FUN_1800010ec(&local_78);
      FUN_1800010ec(&local_98);
      return local_58;
    }
    pppuVar6 = &local_98;
    if (7 < local_80) {
      pppuVar6 = (undefined8 ***)local_98;
    }
    uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))
                      (*(longlong **)(param_1 + 8),param_1 + 0x60,puVar5,param_4,&local_50,pppuVar6,
                       (longlong)pppuVar6 + local_88 * 2,&local_a0);
    if (uVar2 < 2) {
      if (pppuVar6 < local_a0) {
        FUN_180004718(&local_78,pppuVar6,(longlong)local_a0 - (longlong)pppuVar6 >> 1);
      }
      else {
        if (0xf < local_88) {
          if (*(char *)(param_1 + 0x6a) != '\x01') goto LAB_18008bfa9;
          FUN_18000358a(local_58,param_1 + 0x40);
          goto LAB_18008bf71;
        }
        FUN_180004aca(&local_98,8,0);
      }
    }
    else {
      if (uVar2 != 3) {
        if (*(char *)(param_1 + 0x6a) != '\x01') {
          FUN_180077343("bad conversion");
LAB_18008bfa9:
          FUN_180077343("bad conversion");
          pcVar1 = (code *)swi(3);
          puVar4 = (undefined4 *)(*pcVar1)();
          return puVar4;
        }
        FUN_18000358a(local_58,param_1 + 0x40);
        goto LAB_18008bf71;
      }
      for (; local_50 != param_4; local_50 = local_50 + 1) {
        FUN_180004450(&local_78,*local_50);
      }
    }
    lVar3 = (longlong)local_50 - (longlong)param_3;
    puVar5 = local_50;
  } while( true );
}

