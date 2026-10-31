/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407595a2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407595a2(undefined8 *param_1)

{
  undefined8 uVar1;
  char unaff_BL;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong in_FS_OFFSET;
  
  uVar3 = (ulonglong)&stack0xfffffffffffffff8 & 0xffffffff;
  uVar2 = (int)&stack0xffffffffffffffe8 - 0x18;
  uVar4 = (ulonglong)param_1 & 0xffffffff;
  uVar5 = (ulonglong)((int)&stack0xfffffffffffffff8 - 0x14);
  *(uint *)(uVar5 - 4) = uVar2;
  *(undefined4 *)(uVar5 + 8) = 0xffffffff;
  *(undefined4 *)(uVar5 + 4) = 0x1012cb20;
  param_1[10] = 0;
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
  *(undefined8 *)(uVar4 + 0x6c) = 0;
  *(undefined8 *)(uVar4 + 0x74) = 0;
  *(int *)(uVar3 - 0x20) = (int)param_1 + 0x98;
  *(undefined8 *)((ulonglong)uVar2 - 8) = 0x1407595ff;
  FUN_14077ddfa();
  *(undefined4 *)(uVar5 + 8) = 0;
  *(int *)(uVar3 - 0x1c) = (int)param_1 + 0xd4;
  *(undefined4 *)(uVar3 - 0xc) = 0xffffffff;
  *(undefined8 *)(uVar4 + 0xd4) = 0;
  *(undefined8 *)(uVar4 + 0xdc) = 0;
  *(undefined4 *)(uVar4 + 0xe4) = 0;
  *(undefined4 *)(uVar3 - 0xc) = 1;
  *(undefined4 *)(uVar4 + 0x58) = 0;
  *(undefined8 *)(uVar4 + 0x100) = 0;
  *(undefined8 *)(uVar4 + 0x108) = 0;
  *(undefined8 *)(uVar4 + 0x110) = 0;
  *(undefined8 *)(uVar4 + 0x118) = 0;
  *(undefined8 *)(uVar4 + 0x88) = _DAT_150a11fec;
  uVar1 = uRam0000000150a12133;
  *(undefined8 *)(uVar4 + 0x5c) = _DAT_150a1212b;
  *(undefined8 *)(uVar4 + 100) = uVar1;
  *(undefined8 *)(uVar4 + 0x7c) = _DAT_150a10707;
  *(undefined1 *)(uVar4 + 0x84) = 0;
  *(undefined2 *)(uVar4 + 0x86) = 0xffff;
  *(undefined4 *)(uVar4 + 0x94) = 0;
  *(undefined4 *)(uVar4 + 0x90) = 0;
  *(undefined4 *)(uVar4 + 0xf8) = 0x7f7fffff;
  *(undefined4 *)(uVar4 + 0xfc) = 0x7f7fffff;
  uVar1 = uRam0000000150a12218;
  *(undefined8 *)(uVar4 + 0xe8) = _DAT_150a12210;
  *(undefined8 *)(uVar4 + 0xf0) = uVar1;
  *(undefined4 *)(uVar3 - 0xc) = 0xffffffff;
  *(undefined4 *)(in_FS_OFFSET + -0x3b7c0f7700000000) = *(undefined4 *)(uVar3 - 0x14);
  *(char *)(uVar4 + 0x5f) = *(char *)(uVar4 + 0x5f) - unaff_BL;
  return;
}

