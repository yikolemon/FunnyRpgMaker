/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801192ee */

undefined8 FUN_1801192ee(undefined4 param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  
  iVar1 = *(int *)(DAT_180419160 + 0x1fe0);
  if ((iVar1 != 0) &&
     ((*(int *)(DAT_180419160 + 0x1664) == iVar1 || (*(int *)(DAT_180419160 + 0x167c) == iVar1)))) {
    uVar2 = param_2 | 0xc00000;
    if ((param_2 & 0xc00000) != 0) {
      uVar2 = param_2;
    }
    if ((((uVar2 >> 0x16 & 1) != 0 && *(int *)(DAT_180419160 + 0x1664) == iVar1) ||
        ((uVar2 >> 0x17 & 1) != 0 && *(int *)(DAT_180419160 + 0x167c) == iVar1)) &&
       (cVar3 = FUN_180118ab7(param_1,iVar1), cVar3 != '\0')) {
      FUN_1801191ef(param_1,iVar1,uVar2 & 0xff3fffff);
      return 1;
    }
  }
  return 0;
}

