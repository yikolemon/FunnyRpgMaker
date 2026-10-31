/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14007f4ba */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14007f4ba(undefined8 *param_1)

{
  undefined8 uVar1;
  
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[0xe] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  FUN_1400a4db8();
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0xf] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = DAT_1402112d0;
  uVar1 = _UNK_1402113c8;
  param_1[0x10] = _DAT_1402113c0;
  param_1[0x11] = uVar1;
  param_1[0x14] = DAT_1401c8660;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined2 *)((longlong)param_1 + 0xaa) = 0xffff;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x28] = 0x7f7fffff7f7fffff;
  uVar1 = _UNK_140211458;
  param_1[0x26] = _DAT_140211450;
  param_1[0x27] = uVar1;
  return param_1;
}

