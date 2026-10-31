/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100d91ae */

void __fastcall
FUN_100d91ae(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined1 *local_88;
  undefined8 local_84;
  undefined1 *local_7c;
  undefined4 *local_78;
  undefined4 *local_74;
  undefined4 local_6c;
  undefined4 local_68;
  char *local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [4];
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40 [24];
  undefined1 *local_28;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = (undefined1 *)&local_88;
  local_18 = 0xffffffff;
  local_1c = &LAB_100ddc80;
  local_20 = ExceptionList;
  local_6c = param_3;
  local_54 = param_6;
  local_58 = param_5;
  local_78 = &local_48;
  local_44 = param_4;
  local_48 = param_3;
  local_7c = local_50;
  local_60 = "$gameActors.actor({})._paramPlus[{}] = {};";
  uStack_5c = 0x2a;
  local_84 = 0x2a1033d453;
  local_74 = &local_58;
  ExceptionList = &local_20;
  local_88 = local_40;
  local_68 = param_2;
  local_4c = param_2;
  FUN_100d9ba0();
  local_18 = 0;
  local_88 = local_40;
  FUN_10014730();
  local_18 = 0xffffffff;
  FUN_10001fee();
  ExceptionList = local_20;
  return;
}

