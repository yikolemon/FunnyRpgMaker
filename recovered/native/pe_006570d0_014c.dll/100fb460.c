/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100fb460 */

undefined1 * __thiscall FUN_100fb460(undefined1 *param_1,int param_2)

{
  int *unaff_FS_OFFSET;
  undefined1 *local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_24;
  local_18 = &LAB_1012c950;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  *(undefined4 *)(param_1 + 0x104) = 0;
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  local_14 = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x10c) = 0;
  local_24 = param_1;
  if (param_2 != 0) {
    FUN_100fa19f(param_1,param_2,0x100);
    FUN_100fb51c();
  }
  *unaff_FS_OFFSET = local_1c;
  return local_24;
}

