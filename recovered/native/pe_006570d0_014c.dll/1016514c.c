/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1016514c */

undefined4 FUN_1016514c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(DAT_1039d74c + 0x2308);
  if (iVar1 != 0) {
    if (param_1 < 0) {
      param_1 = *(int *)(iVar1 + 0x48);
    }
    uVar2 = FUN_10165174(iVar1,param_1);
    return uVar2;
  }
  return 0;
}

