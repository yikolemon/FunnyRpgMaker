/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101016d2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __fastcall FUN_101016d2(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *local_24 [2];
  undefined1 *local_1c;
  void *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  
  local_1c = (undefined1 *)local_24;
  local_10 = 0xffffffff;
  local_14 = &LAB_1012cb20;
  local_18 = ExceptionList;
  ExceptionList = &local_18;
  *(undefined8 *)(param_1 + 0x14) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  local_24[0] = param_1 + 0x26;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  FUN_10125f2a();
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x16] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  *(undefined8 *)(param_1 + 0x22) = DAT_102b89a0;
  uVar3 = _UNK_102b8adc;
  uVar2 = _UNK_102b8ad8;
  uVar1 = _UNK_102b8ad4;
  param_1[0x17] = _DAT_102b8ad0;
  param_1[0x18] = uVar1;
  param_1[0x19] = uVar2;
  param_1[0x1a] = uVar3;
  *(undefined8 *)(param_1 + 0x1f) = DAT_102b70a0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  *(undefined2 *)((int)param_1 + 0x86) = 0xffff;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x3e] = 0x7f7fffff;
  param_1[0x3f] = 0x7f7fffff;
  uVar3 = _UNK_102b8b7c;
  uVar2 = _UNK_102b8b78;
  uVar1 = _UNK_102b8b74;
  param_1[0x3a] = _DAT_102b8b70;
  param_1[0x3b] = uVar1;
  param_1[0x3c] = uVar2;
  param_1[0x3d] = uVar3;
  ExceptionList = local_18;
  return param_1;
}

