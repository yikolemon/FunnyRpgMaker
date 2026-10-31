/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100edeb6 */

int FUN_100edeb6(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_24;
  local_14 = 0xffffffff;
  local_18 = &LAB_100f51c0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_100ee024(param_1);
  local_14 = 0;
  FUN_100ee0b5(*(int *)(local_24 + 4) + 0x10,param_3,param_4,param_5);
  **(undefined4 **)(local_24 + 4) = param_2;
  *(undefined4 *)(*(int *)(local_24 + 4) + 4) = param_2;
  *(undefined4 *)(*(int *)(local_24 + 4) + 8) = param_2;
  *(undefined1 *)(*(int *)(local_24 + 4) + 0xc) = 0;
  *(undefined1 *)(*(int *)(local_24 + 4) + 0xd) = 0;
  ExceptionList = local_1c;
  return local_24;
}

