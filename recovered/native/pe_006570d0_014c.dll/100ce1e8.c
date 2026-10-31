/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100ce1e8 */

int FUN_100ce1e8(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int local_20;
  undefined1 *local_1c;
  void *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  
  local_1c = (undefined1 *)&local_20;
  local_10 = 0xffffffff;
  local_14 = &LAB_100ce560;
  local_18 = ExceptionList;
  ExceptionList = &local_18;
  FUN_100ce33e(param_1);
  iVar1 = *(int *)(local_20 + 4);
  *(undefined4 *)(iVar1 + 0x10) = *param_3;
  uVar2 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  *(undefined4 *)(iVar1 + 0x18) = *param_4;
  *(undefined4 *)(iVar1 + 0x1c) = uVar2;
  *(undefined4 *)(iVar1 + 0x20) = uVar3;
  *(undefined4 *)(iVar1 + 0x24) = uVar4;
  *(undefined8 *)(iVar1 + 0x28) = *(undefined8 *)(param_4 + 4);
  **(undefined4 **)(local_20 + 4) = param_2;
  *(undefined4 *)(*(int *)(local_20 + 4) + 4) = param_2;
  *(undefined4 *)(*(int *)(local_20 + 4) + 8) = param_2;
  *(undefined1 *)(*(int *)(local_20 + 4) + 0xc) = 0;
  *(undefined1 *)(*(int *)(local_20 + 4) + 0xd) = 0;
  ExceptionList = local_18;
  return local_20;
}

