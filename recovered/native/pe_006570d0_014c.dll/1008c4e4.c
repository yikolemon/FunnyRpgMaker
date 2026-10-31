/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1008c4e4 */

undefined4 * FUN_1008c4e4(int *param_1,int *param_2)

{
  int local_30;
  int local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_30;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c36b0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  local_28 = (undefined4 *)FUN_10228350(0xc);
  local_14 = 0;
  local_2c = *param_2;
  local_30 = *param_1;
  *local_28 = 0;
  local_28[1] = 0;
  local_28[2] = 0;
  local_24 = local_28;
  FUN_1008c656((local_2c - local_30 >> 3) * -0x55555555,&local_30,&local_2c);
  ExceptionList = local_1c;
  return local_28;
}

