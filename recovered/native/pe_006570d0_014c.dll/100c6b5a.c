/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100c6b5a */

int * __fastcall FUN_100c6b5a(int *param_1)

{
  int iVar1;
  int *unaff_FS_OFFSET;
  int *local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_24;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c7e50;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  *param_1 = 0;
  param_1[1] = 0;
  local_24 = param_1;
  iVar1 = FUN_10228350(0x28);
  *(int *)iVar1 = iVar1;
  *(int *)(iVar1 + 4) = iVar1;
  *(int *)(iVar1 + 8) = iVar1;
  *(undefined2 *)(iVar1 + 0xc) = 0x101;
  *param_1 = iVar1;
  *unaff_FS_OFFSET = local_1c;
  return local_24;
}

