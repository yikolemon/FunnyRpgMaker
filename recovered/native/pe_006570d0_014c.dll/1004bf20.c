/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1004bf20 */

undefined4 * __thiscall FUN_1004bf20(undefined4 *param_1,undefined4 *param_2,undefined1 param_3)

{
  undefined4 uVar1;
  lconv *plVar2;
  int iVar3;
  int *unaff_FS_OFFSET;
  undefined4 *local_24;
  undefined4 *local_20;
  undefined1 *local_1c;
  int local_18;
  undefined1 *local_14;
  undefined4 local_10;
  
  local_1c = (undefined1 *)&local_24;
  local_14 = &LAB_1005a810;
  local_18 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_18;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 2) = param_3;
  param_1[3] = 0xffffffff;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 9) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  local_24 = param_1 + 0xb;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0xf;
  local_10 = 1;
  param_1[0x11] = &DAT_10356101;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  local_20 = param_1;
  plVar2 = _localeconv();
  if (plVar2->decimal_point == (char *)0x0) {
    iVar3 = 0x2e;
  }
  else {
    iVar3 = (int)*plVar2->decimal_point;
  }
  param_1[0x18] = iVar3;
  param_1[0x19] = 0xffffffff;
  *unaff_FS_OFFSET = local_18;
  return local_20;
}

