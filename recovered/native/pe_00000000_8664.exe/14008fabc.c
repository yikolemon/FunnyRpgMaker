/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14008fabc */

void FUN_14008fabc(void)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(DAT_140f2a910 + 0x1608);
  iVar1 = *(int *)(lVar2 + 600);
  if (0 < (longlong)iVar1) {
    *(undefined4 *)(lVar2 + 0x244) =
         *(undefined4 *)(*(longlong *)(lVar2 + 0x260) + -4 + (longlong)iVar1 * 4);
    *(int *)(lVar2 + 600) = iVar1 + -1;
    return;
  }
  FUN_14007a954("Calling PopTextWrapPos() too many times!");
  return;
}

