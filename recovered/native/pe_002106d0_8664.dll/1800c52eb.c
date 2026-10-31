/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800c52eb */

ulonglong FUN_1800c52eb(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (86400000000000 < lVar1) {
    return 0x105265c00;
  }
  return (ulonglong)((uint)((lVar1 / 1000000) * 1000000 < lVar1) + (int)(lVar1 / 1000000));
}

