/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10043137 */

undefined4 * FUN_10043137(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_38;
  local_18 = &LAB_1005a510;
  local_1c = ExceptionList;
  uVar1 = param_2[1];
  local_28 = 0;
  local_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  local_24 = 0xf;
  local_14 = 0xffffffff;
  ExceptionList = &local_1c;
  FUN_10001fee();
  uVar2 = *param_2;
  *(undefined8 *)(param_1 + 4) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_1000254c(uVar2,uVar1);
  ExceptionList = local_1c;
  return param_1;
}

