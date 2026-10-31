/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1017dd44 */

int * __fastcall FUN_1017dd44(int *param_1)

{
  int iVar1;
  int *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_24;
  local_14 = 0xffffffff;
  local_18 = &LAB_10180450;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  *param_1 = 0;
  param_1[1] = 0;
  local_24 = param_1;
  iVar1 = FUN_10228350(0x20);
  *(int *)iVar1 = iVar1;
  *(int *)(iVar1 + 4) = iVar1;
  *(int *)(iVar1 + 8) = iVar1;
  *(undefined2 *)(iVar1 + 0xc) = 0x101;
  *param_1 = iVar1;
  ExceptionList = local_1c;
  return local_24;
}

