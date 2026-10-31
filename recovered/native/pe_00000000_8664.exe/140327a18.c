/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140327a18 */

void FUN_140327a18(void)

{
  longlong lVar1;
  uint uVar2;
  
  lVar1 = DAT_14062a630;
  if (1 < *(int *)(DAT_14062a630 + 0x2128)) {
    uVar2 = *(int *)(DAT_14062a630 + 0x2128) - 1;
    *(uint *)(DAT_14062a630 + 0x2128) = uVar2;
    *(undefined4 *)(lVar1 + 0x1fa0) =
         *(undefined4 *)(*(longlong *)(lVar1 + 0x2130) + -4 + (ulonglong)uVar2 * 4);
    return;
  }
  FUN_140312b68(" must be number, but is ");
  return;
}

