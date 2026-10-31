/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100ef87c */

undefined4 * FUN_100ef87c(undefined4 *param_1,undefined4 param_2,char param_3)

{
  undefined4 uVar1;
  undefined4 local_2c [2];
  undefined1 local_24 [4];
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)local_2c;
  local_14 = 0xffffffff;
  local_18 = &LAB_100f52c0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_100f1e26(param_2);
  local_14 = 3;
  FUN_100f20c2(local_24,(int)param_3);
  uVar1 = local_2c[0];
  local_2c[0] = 0;
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = 1;
  local_14 = 0xffffffff;
  FUN_100f072e();
  FUN_100ef9e6();
  ExceptionList = local_1c;
  return param_1;
}

