/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100efd4c */

undefined4 * __thiscall FUN_100efd4c(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *local_3c;
  undefined4 *local_38;
  undefined4 *local_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined1 local_21;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_3c;
  local_14 = 0xffffffff;
  local_18 = &LAB_100f5300;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  param_1[9] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[10] = 0xffffffff;
  *param_1 = 2;
  param_1[0xb] = 0;
  local_3c = param_1 + 0xc;
  local_28 = param_1;
  FUN_100efedc();
  local_14 = 0;
  *(undefined8 *)(local_28 + 0x20) = 0;
  local_28[0x1c] = 0;
  local_28[0x1d] = 0;
  local_28[0x1e] = 0;
  local_28[0x1f] = 0;
  local_28[0x18] = 0;
  local_28[0x19] = 0;
  local_28[0x1a] = 0;
  local_28[0x1b] = 0;
  local_38 = local_28 + 0x22;
  FUN_100eff5e(&local_21);
  local_14 = 1;
  local_34 = local_28 + 0x23;
  FUN_100f003a(&local_21);
  local_14 = 2;
  local_30 = local_28 + 0x24;
  FUN_100f0116();
  local_28[0x29] = 0;
  local_28[0x2a] = 0;
  local_2c = local_28 + 0x2b;
  local_28[0x2b] = 0;
  local_14 = 4;
  *(undefined1 *)((int)local_28 + 0xb1) = 0;
  FUN_100f0198(param_2,param_3);
  ExceptionList = local_1c;
  return local_28;
}

