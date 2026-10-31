/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0041838a */

int * __fastcall FUN_0041838a(int *param_1)

{
  int iVar1;
  int *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_24;
  local_14 = 0xffffffff;
  local_18 = &LAB_0041a0b0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  *param_1 = 0;
  param_1[1] = 0;
  local_24 = param_1;
  iVar1 = FUN_0047f230(0x30);
  *(int *)iVar1 = iVar1;
  *(int *)(iVar1 + 4) = iVar1;
  *(int *)(iVar1 + 8) = iVar1;
  *(undefined2 *)(iVar1 + 0xc) = 0x101;
  *param_1 = iVar1;
  ExceptionList = local_1c;
  return local_24;
}

