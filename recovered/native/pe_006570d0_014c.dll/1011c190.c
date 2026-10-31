/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1011c190 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1011c190(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined8 *)(param_1 + 0x11) = 0;
  param_1[0x16] = 0xffffffff;
  *(undefined1 *)((int)param_1 + 0x71) = 1;
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[0x13] = 0xffffffff;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0x14] = 0xffffffff;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  uVar3 = _UNK_102b8e7c;
  uVar2 = _UNK_102b8e78;
  uVar1 = _UNK_102b8e74;
  param_1[0x22] = _DAT_102b8e70;
  param_1[0x23] = uVar1;
  param_1[0x24] = uVar2;
  param_1[0x25] = uVar3;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = param_1[0x2a] & 0xfffffe00 | 9;
  *(byte *)((int)param_1 + 0xad) = *(byte *)((int)param_1 + 0xad) & 0xf8;
  *(undefined1 *)(param_1 + 0x2b) = 1;
  return;
}

