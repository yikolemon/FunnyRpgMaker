/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1006bb10 */

undefined4 * __thiscall FUN_1006bb10(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *unaff_FS_OFFSET;
  undefined4 *local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_24;
  local_18 = &LAB_100c24f0;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  *param_1 = 0;
  param_1[1] = 0;
  local_14 = 0;
  local_24 = param_1;
  uVar1 = FUN_1006bb9e(param_1,param_2,0);
  uVar2 = FUN_10002303();
  *param_3 = uVar1;
  param_3[1] = uVar2;
  *unaff_FS_OFFSET = local_1c;
  return local_24;
}

