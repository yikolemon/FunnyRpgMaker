/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100808f9 */

int * FUN_100808f9(int *param_1,undefined4 param_2)

{
  int *local_118;
  int *local_114;
  undefined4 local_110;
  undefined1 local_10c [36];
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  void **local_dc;
  undefined4 local_d8;
  undefined1 *local_d4;
  int **local_d0;
  undefined1 *local_cc;
  int local_c8 [9];
  int *local_a4;
  undefined1 *local_28;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_1c = &LAB_100c30c0;
  local_20 = ExceptionList;
  local_24 = (undefined1 *)&local_118;
  local_d4 = (undefined1 *)&local_118;
  local_cc = local_10c;
  local_e8 = 0;
  local_d0 = &local_114;
  local_114 = param_1;
  local_110 = *(undefined4 *)((int)param_1 + *(int *)(*param_1 + 4) + 0x38);
  local_118 = local_c8;
  local_dc = &local_20;
                    /* WARNING: Ignoring partial resolution of indirect */
  local_dc._0_1_ = 0;
  local_18 = 0xffffffff;
  local_d8 = 0;
  ExceptionList = &local_20;
  FUN_1008121e();
  local_18 = 4;
  local_dc = (void **)param_2;
  local_e0 = 0;
  local_e4 = 0x100809c9;
  local_24 = (undefined1 *)&local_d8;
  FUN_1008139e();
  local_18 = 0xffffffff;
  local_dc = (void **)0x100809fd;
  FUN_10081dd6();
  if (local_a4 != (int *)0x0) {
    local_dc = (void **)(uint)(local_a4 != local_c8);
    local_e0 = 0x10080a15;
    (**(code **)(*local_a4 + 0x10))();
  }
  ExceptionList = local_20;
  return param_1;
}

