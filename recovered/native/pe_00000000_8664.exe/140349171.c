/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140349171 */

void FUN_140349171(void)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  lVar2 = *(longlong *)(DAT_14062a630 + 0x1608);
  if (*(char *)(lVar2 + 0x10e) != '\0') {
    return;
  }
  iVar1 = *(int *)(lVar2 + 0x214);
  lVar2 = *(longlong *)(lVar2 + 0x208);
  uVar3 = FUN_140313933(*(undefined4 *)(DAT_14062a630 + 0xea8),DAT_1404bda40);
  FUN_140348ee5((iVar1 == 0) + (lVar2 != 0) * '\x04' + '\x01',uVar3);
  return;
}

