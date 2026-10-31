/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10116f68 */

undefined1 FUN_10116f68(uint param_1)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  
  iVar1 = *(int *)(DAT_1039d74c + 0x2048);
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
    if ((param_1 & 4) == 0) {
      iVar2 = *(int *)(DAT_1039d74c + 0x14cc);
      if ((param_1 & 2) != 0) {
        iVar2 = FUN_10111b0e((param_1 & 0x10) >> 4);
      }
      if ((param_1 & 1) == 0) {
        uVar3 = iVar1 == iVar2;
      }
      else {
        uVar3 = FUN_10111ac1(iVar1,iVar2,(param_1 & 8) == 0,(param_1 & 0x10) >> 4);
      }
    }
  }
  return uVar3;
}

