/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100ebeca */

void FUN_100ebeca(int param_1,int param_2)

{
  undefined4 uVar1;
  int local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_24;
  local_14 = 0xffffffff;
  local_18 = &LAB_100ec090;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_1000334a(param_2);
  local_14 = 0;
  uVar1 = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  local_24 = param_1 + 0x20;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  FUN_100b0562(*(int *)(param_2 + 0x24) - *(int *)(param_2 + 0x20) >> 5,param_2 + 0x20,
               param_2 + 0x24);
  ExceptionList = local_1c;
  return;
}

