/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10113568 */

void FUN_10113568(void)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(DAT_1039d74c + 0x14cc) + 0x138);
  if (1 < iVar1) {
    *(int *)(*(int *)(DAT_1039d74c + 0x14cc) + 0x138) = iVar1 + -1;
    return;
  }
  FUN_100fcef5("Calling PopID() too many times!");
  return;
}

