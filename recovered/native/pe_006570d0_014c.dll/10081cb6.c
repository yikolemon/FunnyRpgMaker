/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10081cb6 */

undefined4 * __thiscall FUN_10081cb6(undefined4 *param_1,undefined4 *param_2,undefined1 param_3)

{
  lconv *plVar1;
  int iVar2;
  undefined4 *local_24;
  undefined4 *local_20;
  undefined4 *local_1c;
  undefined1 *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = (undefined1 *)&local_24;
  local_10 = &LAB_100c3190;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined1 *)(param_1 + 2) = param_3;
  param_1[3] = 0xffffffff;
  *(undefined1 *)(param_1 + 4) = 0;
  local_24 = param_1 + 8;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined8 *)(param_1 + 9) = 0;
  local_20 = param_1 + 0xb;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0xf;
  local_c = 2;
  param_1[0x11] = &DAT_10356101;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  local_1c = param_1;
  plVar1 = _localeconv();
  if (plVar1->decimal_point == (char *)0x0) {
    iVar2 = 0x2e;
  }
  else {
    iVar2 = (int)*plVar1->decimal_point;
  }
  local_1c[0x18] = iVar2;
  local_1c[0x19] = 0xffffffff;
  ExceptionList = local_14;
  return local_1c;
}

