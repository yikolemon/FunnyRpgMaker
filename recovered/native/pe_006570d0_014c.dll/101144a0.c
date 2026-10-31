/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101144a0 */

undefined4 FUN_101144a0(undefined4 param_1,uint param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  
  iVar1 = *(int *)(DAT_1039d74c + 0x1e80);
  if ((iVar1 != 0) &&
     ((*(int *)(DAT_1039d74c + 0x1510) == iVar1 || (*(int *)(DAT_1039d74c + 0x1528) == iVar1)))) {
    uVar3 = param_2 | 0xc00000;
    if ((param_2 & 0xc00000) != 0) {
      uVar3 = param_2;
    }
    if ((((uVar3 >> 0x16 & 1) != 0 && *(int *)(DAT_1039d74c + 0x1510) == iVar1) ||
        ((uVar3 >> 0x17 & 1) != 0 && *(int *)(DAT_1039d74c + 0x1528) == iVar1)) &&
       (cVar2 = FUN_10113c9d(param_1,iVar1), cVar2 != '\0')) {
      FUN_101143b4(param_1,iVar1,uVar3 & 0xff3fffff);
      return 1;
    }
  }
  return 0;
}

