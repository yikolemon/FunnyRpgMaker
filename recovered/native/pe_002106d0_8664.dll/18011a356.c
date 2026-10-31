/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18011a356 */

void FUN_18011a356(void)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(DAT_180419160 + 0x1608);
  iVar1 = *(int *)(lVar2 + 0x248);
  if (0 < (longlong)iVar1) {
    *(undefined4 *)(lVar2 + 0x23c) =
         *(undefined4 *)(*(longlong *)(lVar2 + 0x250) + -4 + (longlong)iVar1 * 4);
    *(int *)(lVar2 + 0x248) = iVar1 + -1;
    return;
  }
  FUN_180101698("Calling PopItemWidth() too many times!");
  return;
}

