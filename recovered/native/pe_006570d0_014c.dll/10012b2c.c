/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10012b2c */

undefined4 * __fastcall FUN_10012b2c(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_24;
  local_14 = 0xffffffff;
  local_18 = &LAB_10058e60;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  param_1[4] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  local_24 = param_1;
  puVar1 = (undefined4 *)FUN_10228350(8);
  puVar1[1] = 0;
  *param_1 = puVar1;
  *puVar1 = param_1;
  ExceptionList = local_1c;
  return local_24;
}

