/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1005bb5e */

undefined4 * __fastcall FUN_1005bb5e(undefined4 *param_1)

{
  undefined4 *local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_28;
  local_18 = &LAB_100c1ed0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_28 = param_1 + 3;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  local_14 = 1;
  local_24 = param_1;
  FUN_10060b96();
  ExceptionList = local_1c;
  return local_24;
}

