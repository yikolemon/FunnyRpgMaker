/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10043f8a */

undefined4 * __thiscall FUN_10043f8a(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int *unaff_FS_OFFSET;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_2c;
  local_14 = 0xffffffff;
  local_18 = &LAB_1005a5e0;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  local_24 = (undefined4 *)*param_1;
  if (*(char *)((int)param_2 + 0xd) == '\0') {
    local_2c = param_1;
    local_24 = (undefined4 *)FUN_1004406a(param_1,local_24,param_2 + 4);
    local_24[1] = param_3;
    *(undefined1 *)(local_24 + 3) = *(undefined1 *)(param_2 + 3);
    local_14 = 0;
    local_28 = local_2c;
    uVar1 = FUN_10043f8a(*param_2,local_24);
    *local_24 = uVar1;
    local_28 = local_2c;
    uVar1 = FUN_10043f8a(param_2[2],local_24);
    local_24[2] = uVar1;
  }
  *unaff_FS_OFFSET = local_1c;
  return local_24;
}

