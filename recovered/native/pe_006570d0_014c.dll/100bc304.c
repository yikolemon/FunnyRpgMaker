/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100bc304 */

int FUN_100bc304(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_24;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c4c50;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_10067534(param_1);
  local_14 = 0;
  FUN_100bc3c9(*(int *)(local_24 + 4) + 0x10,param_3,param_4,param_5);
  **(undefined4 **)(local_24 + 4) = param_2;
  *(undefined4 *)(*(int *)(local_24 + 4) + 4) = param_2;
  *(undefined4 *)(*(int *)(local_24 + 4) + 8) = param_2;
  *(undefined1 *)(*(int *)(local_24 + 4) + 0xc) = 0;
  *(undefined1 *)(*(int *)(local_24 + 4) + 0xd) = 0;
  ExceptionList = local_1c;
  return local_24;
}

