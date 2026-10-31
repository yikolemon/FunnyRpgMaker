/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1006fca2 */

void __thiscall
FUN_1006fca2(undefined4 *param_1,undefined4 param_2,int *param_3,undefined4 *param_4,
            undefined1 *param_5,undefined2 *param_6)

{
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
  local_18 = &LAB_100c27c0;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  *param_1 = WolfDataBase::vftable;
  local_28 = param_1 + 1;
  FUN_10002e46(param_2);
  local_14 = 0;
  local_24 = param_1 + 7;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  local_2c = param_1;
  FUN_10044618(param_3[1] - *param_3,param_3,param_3 + 1);
  local_2c[10] = param_3[3];
  *(undefined1 *)(local_2c + 0xb) = *param_5;
  local_2c[0xc] = *param_4;
  *(undefined2 *)(local_2c + 0xd) = *param_6;
  *(undefined1 *)((int)local_2c + 0x36) = *(undefined1 *)(param_6 + 1);
  *unaff_FS_OFFSET = local_1c;
  return;
}

