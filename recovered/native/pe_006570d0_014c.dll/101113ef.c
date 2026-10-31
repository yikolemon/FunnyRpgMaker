/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101113ef */

void FUN_101113ef(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = DAT_1039d74c;
  iVar1 = *(int *)(DAT_1039d74c + 0x1f98);
  if (*(short *)(*(int *)(DAT_1039d74c + 0x27ac) + 0xc) < iVar1) {
    *(int *)(DAT_1039d74c + 0x1f98) = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(*(int *)(iVar2 + 0x1fa0) + -0x10 + iVar1 * 8);
    }
    *(undefined4 *)(iVar2 + 0x1e3c) = uVar3;
    return;
  }
  FUN_100fcef5("Calling PopFocusScope() too many times!");
  return;
}

