/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10026226 */

undefined4 __thiscall
FUN_10026226(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined1 auStack_a0 [12];
  int local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 *local_28;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = auStack_a0;
  local_18 = 0xffffffff;
  local_1c = &LAB_10059890;
  local_20 = ExceptionList;
  local_90 = param_2;
  local_40 = param_3;
  uStack_3c = param_4;
  uStack_38 = param_5;
  uStack_34 = param_6;
  local_8c = param_7;
  ExceptionList = &local_20;
  FUN_1000334a(param_1 + 8);
  local_18 = 3;
  local_94 = param_1;
  FUN_1000334a(param_1 + 0x20);
  local_18 = 4;
  FUN_1000334a(local_94 + 0x38);
  local_18 = 6;
  uVar1 = FUN_10026508(&local_90);
  local_18 = 0xffffffff;
  FUN_10001fee();
  FUN_10001fee();
  FUN_10001fee();
  ExceptionList = local_20;
  return uVar1;
}

