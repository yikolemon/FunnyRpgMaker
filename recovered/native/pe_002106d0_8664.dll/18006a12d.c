/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18006a12d */

longlong FUN_18006a12d(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x40) - *(longlong *)(param_1 + 0x38) >> 4;
    lVar1 = 0;
    if ((*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 4) * 0x6db6db6db6db6db7 +
        lVar2 * 0x7b425ed097b425ed == 0) {
      lVar1 = lVar2 * -0x7b425ed097b425ed;
    }
    return lVar1;
  }
  return 0;
}

