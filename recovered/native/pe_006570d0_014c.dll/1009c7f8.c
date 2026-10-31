/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1009c7f8 */

undefined4 * __thiscall FUN_1009c7f8(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  int *unaff_FS_OFFSET;
  undefined4 *local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_30;
  local_18 = &LAB_100c3dc0;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_30 = param_1 + 3;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  local_14 = 1;
  *(undefined2 *)(param_1 + 6) = 0;
  local_2c = param_1 + 7;
  local_24 = param_1;
  FUN_10002e46(param_2);
  local_14 = 2;
  local_28 = local_24 + 0xd;
  FUN_10002e46(param_3);
  local_14 = 3;
  uVar1 = FUN_1009d298();
  *(undefined1 *)((int)local_24 + 0x19) = uVar1;
  *unaff_FS_OFFSET = local_1c;
  return local_24;
}

