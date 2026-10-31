/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14032f013 */

longlong FUN_14032f013(longlong param_1)

{
  longlong lVar1;
  
  if ((longlong)*(int *)(param_1 + 0x31c) != -1) {
    return (longlong)*(int *)(param_1 + 0x31c) + *(longlong *)(DAT_14062a630 + 0x29a0);
  }
  lVar1 = FUN_14032efd5(*(undefined4 *)(param_1 + 0x10));
  return lVar1;
}

