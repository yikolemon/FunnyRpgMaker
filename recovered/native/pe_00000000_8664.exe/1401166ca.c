/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401166ca */

void FUN_1401166ca(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(DAT_140f2a910 + 0x1608);
  lVar2 = *(longlong *)(lVar1 + 0x208);
  if (*(int *)(lVar2 + 0x10) == 1) {
    return;
  }
  FUN_1401128df(lVar1,lVar2 + 0x3c);
  FUN_1400e0ab6(lVar2 + 0x70,*(undefined8 *)(lVar1 + 800),*(int *)(lVar2 + 0xc) + 1);
  return;
}

