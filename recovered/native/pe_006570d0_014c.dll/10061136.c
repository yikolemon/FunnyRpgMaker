/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10061136 */

int FUN_10061136(int param_1,int param_2)

{
  int local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_24;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c1f90;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_100611f8(param_2);
  local_14 = 0;
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  local_24 = param_1 + 0x24;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  FUN_10061af0(*(int *)(param_2 + 0x28) - *(int *)(param_2 + 0x24) >> 2,param_2 + 0x24,
               param_2 + 0x28);
  ExceptionList = local_1c;
  return param_1;
}

