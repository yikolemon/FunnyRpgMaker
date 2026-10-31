/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10118381 */

void FUN_10118381(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = DAT_1039d74c;
  if (*(char *)(DAT_1039d74c + 0x2748) == '\0') {
    FUN_101182f9(1,param_1);
    uVar2 = FUN_1025e77b(1);
    *(undefined4 *)(iVar1 + 0x2754) = uVar2;
  }
  return;
}

