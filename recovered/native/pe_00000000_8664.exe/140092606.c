/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140092606 */

undefined8 FUN_140092606(undefined4 param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  
  iVar1 = *(int *)(DAT_140f2a910 + 0x1fe0);
  if ((iVar1 != 0) &&
     ((*(int *)(DAT_140f2a910 + 0x1664) == iVar1 || (*(int *)(DAT_140f2a910 + 0x167c) == iVar1)))) {
    uVar2 = param_2 | 0xc00000;
    if ((param_2 & 0xc00000) != 0) {
      uVar2 = param_2;
    }
    if ((((uVar2 >> 0x16 & 1) != 0 && *(int *)(DAT_140f2a910 + 0x1664) == iVar1) ||
        ((uVar2 >> 0x17 & 1) != 0 && *(int *)(DAT_140f2a910 + 0x167c) == iVar1)) &&
       (cVar3 = FUN_140091dcf(param_1,iVar1), cVar3 != '\0')) {
      FUN_140092507(param_1,iVar1,uVar2 & 0xff3fffff);
      return 1;
    }
  }
  return 0;
}

