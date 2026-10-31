/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14008f860 */

void FUN_14008f860(void)

{
  longlong lVar1;
  uint uVar2;
  
  lVar1 = DAT_140f2a910;
  if (1 < *(int *)(DAT_140f2a910 + 0x2128)) {
    uVar2 = *(int *)(DAT_140f2a910 + 0x2128) - 1;
    *(uint *)(DAT_140f2a910 + 0x2128) = uVar2;
    *(undefined4 *)(lVar1 + 0x1fa0) =
         *(undefined4 *)(*(longlong *)(lVar1 + 0x2130) + -4 + (ulonglong)uVar2 * 4);
    return;
  }
  FUN_14007a954("Calling PopItemFlag() too many times!");
  return;
}

