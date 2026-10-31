/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101154f4 */

void FUN_101154f4(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(DAT_1039d74c + 0x14cc);
  iVar2 = *(int *)(iVar1 + 0x224);
  if (0 < iVar2) {
    *(undefined4 *)(iVar1 + 0x218) = *(undefined4 *)(*(int *)(iVar1 + 0x22c) + -4 + iVar2 * 4);
    *(int *)(iVar1 + 0x224) = iVar2 + -1;
    return;
  }
  FUN_100fcef5("Calling PopItemWidth() too many times!");
  return;
}

