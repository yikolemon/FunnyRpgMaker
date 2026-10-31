/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18006a173 */

longlong FUN_18006a173(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x40) - *(longlong *)(param_1 + 0x38) >> 3;
    lVar1 = 0;
    if ((*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 3) * 0x6db6db6db6db6db7 +
        lVar2 * -0x21cfb2b78c13521d == 0) {
      lVar1 = lVar2 * 0x21cfb2b78c13521d;
    }
    return lVar1;
  }
  return 0;
}

