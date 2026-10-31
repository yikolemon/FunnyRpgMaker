/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10043e68 */

int * __thiscall FUN_10043e68(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  int *local_2c;
  int *local_28;
  int *local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_2c;
  local_14 = 0xffffffff;
  local_18 = &LAB_1005a5d0;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  *param_1 = 0;
  param_1[1] = 0;
  local_28 = param_1;
  local_24 = param_1;
  iVar2 = FUN_10228350(0x38);
  *(int *)iVar2 = iVar2;
  *(int *)(iVar2 + 4) = iVar2;
  *(int *)(iVar2 + 8) = iVar2;
  *(undefined2 *)(iVar2 + 0xc) = 0x101;
  *param_1 = iVar2;
  local_14 = 0;
  local_2c = param_1;
  FUN_10043f0e(param_2);
  piVar1 = local_2c;
  local_24 = (int *)0x0;
  local_14 = 0xffffffff;
  FUN_10043f64();
  *unaff_FS_OFFSET = local_1c;
  return piVar1;
}

