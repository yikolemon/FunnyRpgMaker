/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100a64c2 */

undefined4 * __thiscall FUN_100a64c2(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int *unaff_FS_OFFSET;
  undefined4 *local_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_34;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c4290;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  *param_1 = *param_2;
  local_34 = param_1 + 1;
  local_24 = param_1;
  FUN_10003728(param_2 + 1);
  local_14 = 0;
  uVar1 = param_2[7];
  local_24[8] = param_2[8];
  local_24[7] = uVar1;
  local_30 = local_24 + 9;
  local_24[9] = 0;
  local_24[10] = 0;
  local_24[0xb] = 0;
  FUN_100a663a(((int)(param_2[10] - param_2[9]) >> 5) * -0x55555555,param_2 + 9,param_2 + 10);
  local_14 = 1;
  *(undefined1 *)(local_24 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  local_2c = local_24 + 0xd;
  local_24[0xd] = 0;
  local_24[0xe] = 0;
  local_24[0xf] = 0;
  FUN_10044618(param_2[0xe] - param_2[0xd],param_2 + 0xd,param_2 + 0xe);
  local_14 = 2;
  local_28 = local_24 + 0x10;
  local_24[0x10] = 0;
  local_24[0x11] = 0;
  local_24[0x12] = 0;
  FUN_10044618(param_2[0x11] - param_2[0x10],param_2 + 0x10,param_2 + 0x11);
  *unaff_FS_OFFSET = local_1c;
  return local_24;
}

