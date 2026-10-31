/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10111a82 */

void FUN_10111a82(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(DAT_1039d74c + 0x14cc);
  iVar2 = *(int *)(iVar1 + 0x230);
  if (0 < iVar2) {
    *(undefined4 *)(iVar1 + 0x220) = *(undefined4 *)(*(int *)(iVar1 + 0x238) + -4 + iVar2 * 4);
    *(int *)(iVar1 + 0x230) = iVar2 + -1;
    return;
  }
  FUN_100fcef5("Calling PopTextWrapPos() too many times!");
  return;
}

