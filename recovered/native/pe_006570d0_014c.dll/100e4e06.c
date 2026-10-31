/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100e4e06 */

int FUN_100e4e06(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  int local_1c;
  undefined1 *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = (undefined1 *)&local_1c;
  local_c = 0xffffffff;
  local_10 = &LAB_100eaaa0;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_10067920(param_1);
  iVar1 = *(int *)(local_1c + 4);
  *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)*param_4;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  **(undefined4 **)(local_1c + 4) = param_2;
  *(undefined4 *)(*(int *)(local_1c + 4) + 4) = param_2;
  *(undefined4 *)(*(int *)(local_1c + 4) + 8) = param_2;
  *(undefined1 *)(*(int *)(local_1c + 4) + 0xc) = 0;
  *(undefined1 *)(*(int *)(local_1c + 4) + 0xd) = 0;
  ExceptionList = local_14;
  return local_1c;
}

