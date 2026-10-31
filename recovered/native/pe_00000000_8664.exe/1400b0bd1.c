/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400b0bd1 */

void FUN_1400b0bd1(void)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  lVar2 = *(longlong *)(DAT_140f2a910 + 0x1608);
  if (*(char *)(lVar2 + 0x10e) != '\0') {
    return;
  }
  iVar1 = *(int *)(lVar2 + 0x214);
  lVar2 = *(longlong *)(lVar2 + 0x208);
  uVar3 = FUN_14007b71f(*(undefined4 *)(DAT_140f2a910 + 0xea8),DAT_1401c86c8);
  FUN_1400b0945((iVar1 == 0) + (lVar2 != 0) * '\x04' + '\x01',uVar3);
  return;
}

