/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180116548 */

void FUN_180116548(void)

{
  longlong lVar1;
  uint uVar2;
  
  lVar1 = DAT_180419160;
  if (1 < *(int *)(DAT_180419160 + 0x2128)) {
    uVar2 = *(int *)(DAT_180419160 + 0x2128) - 1;
    *(uint *)(DAT_180419160 + 0x2128) = uVar2;
    *(undefined4 *)(lVar1 + 0x1fa0) =
         *(undefined4 *)(*(longlong *)(lVar1 + 0x2130) + -4 + (ulonglong)uVar2 * 4);
    return;
  }
  FUN_180101698("Calling PopItemFlag() too many times!");
  return;
}

