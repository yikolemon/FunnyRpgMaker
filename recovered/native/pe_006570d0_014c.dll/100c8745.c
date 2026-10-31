/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100c8745 */

undefined4 FUN_100c8745(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int in_stack_0000001c;
  undefined1 local_6c [24];
  uint local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  uint local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_6c;
  local_18 = &LAB_100cc260;
  local_1c = ExceptionList;
  local_24 = param_1;
  local_14 = 0;
  ExceptionList = &local_1c;
  puVar1 = local_6c;
  if (in_stack_0000001c == 0) {
    FUN_100c522a(&local_54,0);
    local_3c = local_54;
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    local_44 = 0;
    uStack_40 = 7;
    local_54 = local_54 & 0xffff0000;
    local_14 = 4;
    FUN_10001c62(local_6c);
    local_14 = 5;
    FUN_100128b2(local_6c);
    local_14 = 0xffffffff;
    FUN_10001f04();
    FUN_10001f04();
    FUN_10001134();
    puVar1 = local_20;
  }
  local_20 = puVar1;
  local_14 = 0;
  FUN_100c8cbe("FunnyGamePlayer");
  FUN_100c8d46(param_2);
  local_3c = 0;
  uStack_38 = FUN_10002303();
  FUN_10001c62(local_6c);
  local_14 = 1;
  FUN_1006cb64(local_6c,&local_3c);
  local_14 = 0xffffffff;
  FUN_10001f04();
  FUN_1006d7c2(&stack0x0000000c);
  FUN_10001f04();
  ExceptionList = local_1c;
  return param_1;
}

