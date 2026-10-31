/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1016da42 */

void __fastcall
FUN_1016da42(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,char param_6)

{
  int *local_a0;
  undefined8 local_9c;
  int *piStack_94;
  char **ppcStack_90;
  undefined4 local_8c;
  char *local_88 [4];
  undefined1 local_78 [4];
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  char *local_68;
  undefined4 uStack_64;
  char *local_60;
  undefined4 uStack_5c;
  int local_58 [6];
  int local_40 [6];
  undefined1 *local_28;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = (undefined1 *)&local_a0;
  local_18 = 0xffffffff;
  local_1c = &LAB_10180140;
  local_20 = ExceptionList;
  local_6c = param_4;
  local_70 = param_3;
  ExceptionList = &local_20;
  local_74 = param_2;
  FUN_100446d6();
  local_18 = 0;
  local_60 = "{},{},{}";
  uStack_5c = 8;
  local_9c = 0x81032f6d1;
  local_8c = param_5;
  ppcStack_90 = (char **)&local_70;
  piStack_94 = (int *)local_78;
  local_a0 = local_58;
  FUN_1017cf7c();
  local_18 = 1;
  local_a0 = local_58;
  FUN_100dc9d0();
  local_18 = 2;
  local_9c._0_4_ = (undefined4)DAT_1028f540;
  local_9c._4_4_ = DAT_1028f540._4_4_;
  piStack_94 = (int *)0x0;
  ppcStack_90 = (char **)0x0;
  local_a0 = local_40;
  FUN_100141c8();
  local_18 = 0xffffffff;
  FUN_10013efc();
  FUN_10001fee();
  local_18 = 3;
  local_9c = CONCAT44(local_9c._4_4_,local_40);
  local_a0 = local_58;
  FUN_1017d032();
  local_a0 = local_58;
  piStack_94 = local_40;
  local_88[0] = "Set to false";
  if (param_6 != '\0') {
    local_88[0] = "Set to true";
  }
  local_88[0] = local_88[0] + 7;
  *(char *)(local_58[0] + 0x20) = param_6;
  local_68 = "$gameSelfSwitches.setValue({}, {});";
  uStack_64 = 0x23;
  local_9c = 0x231033d4e2;
  ppcStack_90 = local_88;
  FUN_1006f677();
  local_a0 = local_58;
  local_18 = 4;
  FUN_10014730();
  local_18 = 0xffffffff;
  FUN_10001fee();
  FUN_10001fee();
  local_a0 = (int *)&DAT_1038a098;
  FUN_1022c200();
  ExceptionList = local_20;
  return;
}

