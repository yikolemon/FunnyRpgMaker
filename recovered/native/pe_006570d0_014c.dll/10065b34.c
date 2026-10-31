/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10065b34 */

undefined4 * __thiscall FUN_10065b34(undefined4 *param_1,int param_2,byte *param_3)

{
  int local_24;
  undefined4 *local_20;
  undefined1 *local_1c;
  void *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  
  local_1c = (undefined1 *)&local_24;
  local_10 = 0xffffffff;
  local_14 = &LAB_100c21b0;
  local_18 = ExceptionList;
  local_24 = -(uint)*param_3;
  ExceptionList = &local_18;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_20 = param_1;
  FUN_10065bcc(param_2 + 0x1fU >> 5,&local_24);
  local_20[3] = 0;
  ExceptionList = local_18;
  return local_20;
}

