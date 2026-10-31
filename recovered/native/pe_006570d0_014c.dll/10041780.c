/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10041780 */

/* WARNING: Unable to track spacebase fully for stack */

undefined4
FUN_10041780(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined1 *puVar1;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined8 local_44;
  undefined8 *local_3c;
  undefined4 *local_38;
  undefined1 *local_34;
  undefined1 *local_30;
  undefined8 local_2c;
  undefined4 local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_34 = (undefined1 *)&local_34;
  local_18 = &LAB_1005a3d0;
  local_1c = ExceptionList;
  local_20 = (undefined1 *)&local_54;
  local_30 = (undefined1 *)&local_54;
  local_2c = CONCAT44(param_8,param_7);
  local_3c = &local_2c;
  local_38 = &local_24;
  local_44 = CONCAT44(param_6,param_5);
  local_54 = param_1;
  uStack_50 = param_2;
  uStack_4c = param_3;
  uStack_48 = param_4;
  local_14 = 4;
  ExceptionList = &local_1c;
  FUN_1004192a();
  puVar1 = local_34;
  local_20 = local_34;
  local_14 = 3;
  *(undefined4 *)(local_34 + -4) = 0x1004186d;
  FUN_100431d4();
  local_14 = 0xffffffff;
  *(undefined4 *)(puVar1 + -4) = 0x1004188c;
  FUN_10001fee();
  *(undefined4 *)(puVar1 + -4) = 0x10041894;
  FUN_100431d4();
  ExceptionList = local_1c;
  return local_24;
}

