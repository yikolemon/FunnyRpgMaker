/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100c74ca */

int FUN_100c74ca(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int local_1c;
  undefined1 *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = (undefined1 *)&local_1c;
  local_c = 0xffffffff;
  local_10 = &LAB_100c7ed0;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_1006d586(param_1);
  iVar1 = *(int *)(local_1c + 4);
  *(undefined8 *)(iVar1 + 0x20) = 0;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  *(undefined8 *)(iVar1 + 0x20) = *(undefined8 *)(param_3 + 4);
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  *(undefined4 *)(iVar1 + 0x10) = *param_3;
  *(undefined4 *)(iVar1 + 0x14) = uVar2;
  *(undefined4 *)(iVar1 + 0x18) = uVar3;
  *(undefined4 *)(iVar1 + 0x1c) = uVar4;
  param_3[4] = 0;
  param_3[5] = 7;
  *(undefined2 *)param_3 = 0;
  **(undefined4 **)(local_1c + 4) = param_2;
  *(undefined4 *)(*(int *)(local_1c + 4) + 4) = param_2;
  *(undefined4 *)(*(int *)(local_1c + 4) + 8) = param_2;
  *(undefined1 *)(*(int *)(local_1c + 4) + 0xc) = 0;
  *(undefined1 *)(*(int *)(local_1c + 4) + 0xd) = 0;
  ExceptionList = local_14;
  return local_1c;
}

