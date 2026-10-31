/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801167a4 */

void FUN_1801167a4(void)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(DAT_180419160 + 0x1608);
  iVar1 = *(int *)(lVar2 + 600);
  if (0 < (longlong)iVar1) {
    *(undefined4 *)(lVar2 + 0x244) =
         *(undefined4 *)(*(longlong *)(lVar2 + 0x260) + -4 + (longlong)iVar1 * 4);
    *(int *)(lVar2 + 600) = iVar1 + -1;
    return;
  }
  FUN_180101698("Calling PopTextWrapPos() too many times!");
  return;
}

