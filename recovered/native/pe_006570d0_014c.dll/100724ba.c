/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100724ba */

undefined1 * __thiscall
FUN_100724ba(undefined1 *param_1,undefined4 param_2,int *param_3,int *param_4,undefined2 *param_5)

{
  int *unaff_FS_OFFSET;
  uint local_30;
  undefined1 *local_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_30;
  local_18 = &LAB_100c2850;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  *param_1 = 0;
  *(int *)(param_1 + 4) = *param_3;
  param_1[10] = *(undefined1 *)(param_5 + 1);
  *(undefined2 *)(param_1 + 8) = *param_5;
  *(int *)(param_1 + 0xc) = *param_4;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  local_2c = param_1 + 0x10;
  local_14 = 1;
  local_28 = param_1 + 0x38;
  local_24 = param_1;
  FUN_10072afc();
  local_14 = 2;
  if (*param_3 == 1) {
    if (DAT_1039cbb9 == '\x01') {
      FUN_10072d50(param_2);
    }
    FUN_10072f0a(param_2);
    if (1 < *param_4 - 3U) {
      local_30 = local_30 & 0xffffff00;
      FUN_1007e5fc(&local_30);
    }
  }
  else if (*param_3 == 0) {
    local_30 = 0;
    FUN_100754c0(param_2,&local_30);
    FUN_10072bac();
  }
  *unaff_FS_OFFSET = local_1c;
  return local_24;
}

