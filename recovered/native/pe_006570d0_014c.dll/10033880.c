/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10033880 */

void FUN_10033880(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined1 auStack_8c [52];
  undefined1 auStack_58 [24];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 *local_38;
  undefined4 local_34;
  undefined1 *local_30;
  undefined1 *local_2c;
  undefined4 local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_38;
  local_14 = 0xffffffff;
  local_18 = &LAB_10059ab0;
  local_1c = ExceptionList;
  uStack_3c = 0x98;
  uStack_40 = 0x100338b6;
  ExceptionList = &local_1c;
  local_28 = FUN_10228350();
  local_38 = (undefined1 *)&local_38;
  local_14 = 0;
  uStack_3c = param_5;
  local_20 = auStack_8c;
  local_24 = auStack_8c;
  local_30 = auStack_58;
  FUN_1003423e(param_5);
  local_14 = 1;
  local_2c = local_24 + 0x1c;
  FUN_1000334a(param_4);
  local_14 = 2;
  local_34 = *param_3;
  FUN_1000334a(param_2);
  *(undefined4 *)(local_24 + 0x18) = local_34;
  local_14 = 0;
  FUN_100342ae();
  *param_1 = local_28;
  ExceptionList = local_1c;
  return;
}

