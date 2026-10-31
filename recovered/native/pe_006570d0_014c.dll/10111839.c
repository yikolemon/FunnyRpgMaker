/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10111839 */

void FUN_10111839(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_1039d74c;
  iVar1 = *(int *)(DAT_1039d74c + 0x1fa4);
  if (1 < iVar1) {
    *(int *)(DAT_1039d74c + 0x1fa4) = iVar1 + -1;
    *(undefined4 *)(iVar2 + 0x1e40) = *(undefined4 *)(*(int *)(iVar2 + 0x1fac) + -8 + iVar1 * 4);
    return;
  }
  FUN_100fcef5("Calling PopItemFlag() too many times!");
  return;
}

