/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18011db43 */

longlong FUN_18011db43(longlong param_1)

{
  longlong lVar1;
  
  if ((longlong)*(int *)(param_1 + 0x31c) != -1) {
    return (longlong)*(int *)(param_1 + 0x31c) + *(longlong *)(DAT_180419160 + 0x29a0);
  }
  lVar1 = FUN_18011db05(*(undefined4 *)(param_1 + 0x10));
  return lVar1;
}

