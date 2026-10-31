/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140096dff */

longlong FUN_140096dff(longlong param_1)

{
  longlong lVar1;
  
  if ((longlong)*(int *)(param_1 + 0x31c) != -1) {
    return (longlong)*(int *)(param_1 + 0x31c) + *(longlong *)(DAT_140f2a910 + 0x29a0);
  }
  lVar1 = FUN_140096dc1(*(undefined4 *)(param_1 + 0x10));
  return lVar1;
}

