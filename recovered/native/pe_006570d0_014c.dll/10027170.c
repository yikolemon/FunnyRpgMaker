/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10027170 */

undefined4 * __thiscall
FUN_10027170(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
            undefined4 param_13)

{
  undefined4 *local_1c;
  undefined4 *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_14 = (undefined1 *)&local_1c;
  local_c = &LAB_10059910;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined8 *)(param_1 + 4) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(ulonglong *)(param_1 + 4) = CONCAT44(param_7,param_6);
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  local_1c = param_1 + 6;
  *(undefined8 *)(param_1 + 10) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(ulonglong *)(param_1 + 10) = CONCAT44(param_13,param_12);
  param_1[6] = param_8;
  param_1[7] = param_9;
  param_1[8] = param_10;
  param_1[9] = param_11;
  local_8 = 0xffffffff;
  local_18 = param_1;
  FUN_10001fee();
  FUN_10001fee();
  ExceptionList = local_10;
  return local_18;
}

