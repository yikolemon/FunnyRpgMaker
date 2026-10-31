/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100701e0 */

void FUN_100701e0(undefined4 param_1)

{
  undefined4 ****ppppuVar1;
  undefined1 auStack_138 [4];
  int *local_134;
  undefined4 ***local_130 [4];
  undefined4 local_120;
  uint local_11c;
  undefined1 local_118 [16];
  undefined1 local_108 [24];
  undefined1 local_f0 [24];
  undefined1 local_d8 [176];
  undefined1 *local_28;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = auStack_138;
  local_18 = 0xffffffff;
  local_1c = &LAB_100c27f0;
  local_20 = ExceptionList;
  ExceptionList = &local_20;
  FUN_1006aa34(local_130);
  local_18 = 0;
  ppppuVar1 = local_130;
  if (7 < local_11c) {
    ppppuVar1 = (undefined4 ****)local_130[0];
  }
  FUN_10004664(ppppuVar1,local_120);
  FUN_10001cfb(local_108,param_1,local_130);
  local_18 = 1;
  FUN_1007da60(".json");
  FUN_1007eb1c(local_108,2,0x40,1);
  local_18 = 2;
  (**(code **)(*local_134 + 0x14))(local_118);
  local_18 = 3;
  FUN_1007f042(local_f0,(undefined4)DAT_102944b0,DAT_102944b0._4_4_,0,0);
  local_18 = 4;
  FUN_1007f022(local_d8,local_f0);
  local_18 = 0xffffffff;
  FUN_10001fee();
  FUN_1007f222();
  local_18 = 2;
  FUN_1007f296();
  local_18 = 0xffffffff;
  FUN_1007eba6();
  FUN_10001f04();
  FUN_10001f04();
  ExceptionList = local_20;
  return;
}

