/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1017eab7 */

undefined8 * FUN_1017eab7(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *local_34;
  undefined8 *local_30;
  undefined8 *local_2c;
  undefined8 *local_28;
  undefined8 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_34;
  local_18 = &LAB_10180510;
  local_1c = ExceptionList;
  local_28 = param_3;
  ExceptionList = &local_1c;
  while (param_1 != param_2) {
    *param_3 = *param_1;
    local_30 = param_3 + 1;
    local_24 = local_28;
    local_14 = 0;
    local_34 = param_1;
    local_2c = param_3;
    FUN_1000334a(param_1 + 1);
    local_14 = 1;
    local_30 = local_2c + 4;
    *(undefined4 *)(local_2c + 4) = 0;
    *(undefined4 *)((int)local_2c + 0x24) = 0;
    *(undefined4 *)(local_2c + 5) = 0;
    FUN_1017ea00((*(int *)((int)local_34 + 0x24) - *(int *)(local_34 + 4) >> 2) * -0x45d1745d,
                 local_34 + 4,(int)local_34 + 0x24);
    param_3 = (undefined8 *)((int)local_2c + 0x2c);
    param_1 = (undefined8 *)((int)local_34 + 0x2c);
  }
  ExceptionList = local_1c;
  return param_3;
}

