/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10041404 */

void FUN_10041404(undefined4 *param_1)

{
  undefined4 local_4c;
  undefined1 local_48 [16];
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 *local_30;
  undefined1 *local_2c;
  undefined1 *local_28;
  undefined4 local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_30;
  local_14 = 0xffffffff;
  local_18 = &LAB_1005a380;
  local_1c = ExceptionList;
  uStack_34 = 0x98;
  uStack_38 = 0x1004143a;
  ExceptionList = &local_1c;
  uStack_34 = FUN_10228350();
  local_2c = (undefined1 *)&local_30;
  local_14 = 0;
  local_20 = (undefined1 *)&local_4c;
  local_30 = &local_4c;
  local_28 = local_48;
  local_24 = uStack_34;
  FUN_10001f66("\r\n");
  *local_30 = 0;
  local_14 = 0;
  FUN_100221fe();
  *param_1 = local_24;
  ExceptionList = local_1c;
  return;
}

