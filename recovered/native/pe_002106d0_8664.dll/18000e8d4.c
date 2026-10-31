/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18000e8d4 */

undefined8
FUN_18000e8d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
             longlong param_5)

{
  char *pcVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined8 ****local_78;
  undefined8 local_70;
  undefined8 ****local_68;
  longlong *local_60;
  undefined8 local_58;
  ulonglong local_50;
  byte local_45;
  undefined1 local_44;
  byte local_43;
  byte local_42;
  byte local_41;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  local_41 = (byte)param_3;
  if ((*(char *)(param_4 + 2) == '\0') || (*(char *)(param_4 + 2) == 's')) {
    if (*(char *)(param_4 + 3) == '\x01') {
      *(undefined1 *)(param_4 + 3) = 0;
      if (param_5 == 0) {
        local_60 = (longlong *)FUN_18023d070(1);
      }
      else {
        local_60 = *(longlong **)(param_5 + 8);
        (**(code **)(*local_60 + 8))(local_60);
      }
      plVar2 = (longlong *)FUN_18000b3c1(&local_68);
      if ((local_60 != (longlong *)0x0) &&
         (puVar3 = (undefined8 *)(**(code **)(*local_60 + 0x10))(), puVar3 != (undefined8 *)0x0)) {
        (**(code **)*puVar3)(puVar3,1);
      }
      if (local_41 == 0) {
        local_44 = 1;
        (**(code **)(*plVar2 + 0x30))(plVar2,&local_68);
      }
      else {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_68);
        local_45 = 0;
      }
      local_78 = &local_68;
      if (0xf < local_50) {
        local_78 = local_68;
      }
      local_70 = local_58;
      bVar4 = local_41 ^ 1;
      local_43 = bVar4;
      local_42 = bVar4;
      FUN_18000bc9a(param_1,param_2,&local_78,param_4,param_5);
      local_43 = bVar4;
      local_42 = bVar4;
      if (local_41 == 0) {
        FUN_180001ef2(&local_68);
      }
      local_45 = local_41;
      if (local_41 != 0) {
        FUN_180001ef2(&local_68);
      }
    }
    else {
      pcVar1 = "Set to false";
      if (local_41 != 0) {
        pcVar1 = "Set to true";
      }
      FUN_18000eba1(param_1,param_2,pcVar1 + 7,param_4,param_5);
    }
  }
  else {
    local_88 = param_4[4];
    local_98 = *param_4;
    uStack_94 = param_4[1];
    uStack_90 = param_4[2];
    uStack_8c = param_4[3];
    FUN_18000b7de(param_1,param_2,param_3,&local_98,param_5);
  }
  return param_1;
}

