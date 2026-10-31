/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1017aec2 */

void __thiscall FUN_1017aec2(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_3c [4];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = auStack_3c;
  local_18 = &LAB_10180350;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  local_14 = 0;
  local_24 = param_1;
  uVar1 = FUN_10013d2e(&DAT_10330a0b);
  local_38 = 0;
  FUN_100e1fe0(uVar1,&local_38);
  *local_24 = local_38;
  uVar1 = FUN_10013d2e("dy");
  local_38 = 0;
  FUN_100e1fe0(uVar1,&local_38);
  local_24[1] = local_38;
  FUN_1017afb6(param_2);
  local_24[6] = local_28;
  local_24[2] = local_38;
  local_24[3] = uStack_34;
  local_24[4] = uStack_30;
  local_24[5] = uStack_2c;
  ExceptionList = local_1c;
  return;
}

