/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100522f5 */

int FUN_100522f5(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  void **ppvVar1;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined1 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_18 = &LAB_1005aa00;
  ppvVar1 = &local_1c;
  local_1c = ExceptionList;
  for (; ExceptionList = ppvVar1, param_1 != param_2; param_1 = param_1 + 4) {
    local_20 = (undefined1 *)&local_34;
    local_24 = (undefined1 *)&local_34;
    local_34 = *param_1;
    uStack_30 = param_1[1];
    uStack_2c = param_1[2];
    uStack_28 = param_1[3];
    *(undefined1 *)param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    local_14 = 0xffffffff;
    FUN_1004eed0();
    param_3 = param_3 + 0x10;
    ppvVar1 = ExceptionList;
  }
  ExceptionList = local_1c;
  return param_3;
}

