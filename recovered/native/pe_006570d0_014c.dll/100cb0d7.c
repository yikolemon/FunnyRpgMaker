/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100cb0d7 */

void FUN_100cb0d7(undefined4 *param_1,undefined4 param_2)

{
  undefined1 auStack_88 [52];
  undefined1 local_54 [24];
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 *local_34;
  undefined1 *local_30;
  undefined1 *local_2c;
  undefined4 local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_34;
  local_14 = 0xffffffff;
  local_18 = &LAB_100cc490;
  local_1c = ExceptionList;
  uStack_38 = 0x98;
  uStack_3c = 0x100cb10d;
  ExceptionList = &local_1c;
  uStack_38 = FUN_10228350();
  local_34 = (undefined1 *)&local_34;
  local_14 = 0;
  local_20 = auStack_88;
  local_24 = auStack_88;
  local_30 = local_54;
  local_28 = uStack_38;
  FUN_10022d74();
  local_14 = 1;
  local_2c = local_24 + 0x1c;
  FUN_10001f66("\r\n");
  local_14 = 2;
  FUN_1000334a(param_2);
  *(undefined4 *)(local_24 + 0x18) = 0;
  local_14 = 0;
  FUN_100342ae();
  *param_1 = local_28;
  ExceptionList = local_1c;
  return;
}

