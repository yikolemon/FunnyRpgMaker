/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14037fbca */

void FUN_14037fbca(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(DAT_14062a630 + 0x1608);
  lVar2 = *(longlong *)(lVar1 + 0x208);
  if (*(int *)(lVar2 + 0x10) == 1) {
    return;
  }
  FUN_14037bddf(lVar1,lVar2 + 0x3c);
  FUN_1403a6a12(lVar2 + 0x70,*(undefined8 *)(lVar1 + 800),*(int *)(lVar2 + 0xc) + 1);
  return;
}

