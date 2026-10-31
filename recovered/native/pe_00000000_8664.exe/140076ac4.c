/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140076ac4 */

void FUN_140076ac4(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  
  uVar2 = DAT_1402112d0;
  lVar1 = *(longlong *)(param_1 + 0xe0);
  uVar3 = 0xffffff70;
  lVar4 = 0x144;
  do {
    if (6 < uVar3) {
      *(undefined1 *)(lVar1 + -4 + lVar4) = 0;
      *(undefined8 *)(lVar1 + lVar4) = uVar2;
    }
    uVar3 = uVar3 + 1;
    lVar4 = lVar4 + 0x10;
  } while (lVar4 != 0xaf4);
  *(undefined8 *)(param_1 + 0x108) = 0;
  if (*(int *)(param_1 + 0xbec) < 0) {
    uVar2 = FUN_140077ab4(0);
    if (*(longlong *)(param_1 + 0xbf0) != 0) {
      FUN_1401c5180(uVar2,*(longlong *)(param_1 + 0xbf0),(longlong)*(int *)(param_1 + 0xbe8) * 2);
      FUN_140077b90(*(undefined8 *)(param_1 + 0xbf0));
    }
    *(undefined8 *)(param_1 + 0xbf0) = uVar2;
    *(undefined4 *)(param_1 + 0xbec) = 0;
  }
  *(undefined4 *)(param_1 + 0xbe8) = 0;
  return;
}

