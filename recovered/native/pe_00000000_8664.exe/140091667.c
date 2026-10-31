/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140091667 */

void FUN_140091667(void)

{
  int iVar1;
  
  iVar1 = *(int *)(*(longlong *)(DAT_140f2a910 + 0x1608) + 0x148);
  if (1 < iVar1) {
    *(int *)(*(longlong *)(DAT_140f2a910 + 0x1608) + 0x148) = iVar1 + -1;
    return;
  }
  FUN_14007a954("Calling PopID() too many times!");
  return;
}

