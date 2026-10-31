/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1004192a */

/* WARNING: Unable to track spacebase fully for stack */

undefined4
FUN_1004192a(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined8 param_7)

{
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined8 local_3c;
  undefined4 uStack_30;
  undefined1 *local_2c;
  undefined1 *local_28;
  undefined4 local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_2c = (undefined1 *)&local_2c;
  local_18 = &LAB_1005a3e0;
  local_1c = ExceptionList;
  local_20 = (undefined1 *)&local_4c;
  local_28 = (undefined1 *)&local_4c;
  local_3c = CONCAT44(param_6,param_5);
  local_4c = param_1;
  uStack_48 = param_2;
  uStack_44 = param_3;
  uStack_40 = param_4;
  uStack_30 = (undefined4)((ulonglong)param_7 >> 0x20);
  local_14 = 0;
  ExceptionList = &local_1c;
  FUN_10041bb6();
  local_20 = local_2c;
  local_14 = 0xffffffff;
  *(undefined4 *)(local_2c + -4) = 0x100419e4;
  FUN_10001fee();
  ExceptionList = local_1c;
  return local_24;
}

