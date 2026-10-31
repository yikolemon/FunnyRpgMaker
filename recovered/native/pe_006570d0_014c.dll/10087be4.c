/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10087be4 */

int FUN_10087be4(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 local_20 [4];
  int local_1c;
  undefined1 *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = local_20;
  local_c = 0xffffffff;
  local_10 = &LAB_100c33a0;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_1000334a(param_1);
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)(local_1c + 0x18) = *param_2;
  *(undefined4 *)(local_1c + 0x1c) = uVar1;
  *(undefined4 *)(local_1c + 0x20) = uVar2;
  *(undefined4 *)(local_1c + 0x24) = uVar3;
  *(undefined1 *)param_2 = 0;
  param_2[3] = 0;
  param_2[2] = 0;
  ExceptionList = local_14;
  return local_1c;
}

