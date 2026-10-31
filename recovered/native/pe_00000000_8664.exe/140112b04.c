/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140112b04 */

undefined8 FUN_140112b04(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  
  lVar1 = *(longlong *)(DAT_140f2a910 + 0x24f8);
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    if ((*(char *)(lVar1 + 0x23a) == '\x01') &&
       (*(int *)(lVar1 + 0x74) + 1 < *(int *)(lVar1 + 0x6c))) {
      if (*(int *)(lVar1 + 0x74) == -1) {
        iVar4 = 0;
      }
      else {
        FUN_14011281c(lVar1);
        iVar4 = *(int *)(lVar1 + 0x74) + 1;
      }
    }
    else {
      iVar4 = 0;
      FUN_14011264b(0,0);
    }
    FUN_140112998(lVar1,iVar4);
    lVar2 = (longlong)*(int *)(lVar1 + 0x74) * 0x74;
    uVar3 = CONCAT71((int7)((ulonglong)lVar2 >> 8),
                     *(undefined1 *)(*(longlong *)(lVar1 + 0x18) + 0x6b + lVar2));
  }
  return uVar3;
}

