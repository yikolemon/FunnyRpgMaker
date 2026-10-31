/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10068746 */

int * __thiscall FUN_10068746(int *param_1,int *param_2)

{
  int iVar1;
  int *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_24;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c2350;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  *param_1 = 0;
  param_1[1] = 0;
  local_24 = param_1;
  iVar1 = FUN_10228350(0x18);
  *(int *)iVar1 = iVar1;
  *(int *)(iVar1 + 4) = iVar1;
  *(int *)(iVar1 + 8) = iVar1;
  *(undefined2 *)(iVar1 + 0xc) = 0x101;
  *param_1 = iVar1;
  *param_1 = *param_2;
  *param_2 = iVar1;
  iVar1 = param_1[1];
  param_1[1] = param_2[1];
  param_2[1] = iVar1;
  ExceptionList = local_1c;
  return local_24;
}

