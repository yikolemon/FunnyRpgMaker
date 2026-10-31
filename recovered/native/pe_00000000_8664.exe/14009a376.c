/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14009a376 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_14009a376(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  FUN_14009a920(param_1,0);
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0xffffffff;
  uVar2 = _UNK_1402114a8;
  uVar1 = _DAT_1402114a0;
  lVar3 = 0xf0;
  do {
    *(undefined8 *)(param_1 + lVar3) = uVar1;
    ((undefined8 *)(param_1 + lVar3))[1] = uVar2;
    lVar3 = lVar3 + 0x10;
  } while (lVar3 != 0x140);
  return param_1;
}

