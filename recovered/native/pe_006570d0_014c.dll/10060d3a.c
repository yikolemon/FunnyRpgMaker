/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10060d3a */

undefined4 * FUN_10060d3a(undefined4 *param_1)

{
  undefined1 local_1c [4];
  undefined1 *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = local_1c;
  local_c = 0xffffffff;
  local_10 = &LAB_100c1f50;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_1005c9b8();
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  ExceptionList = local_14;
  return param_1;
}

