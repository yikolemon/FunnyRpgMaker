/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18006a1b9 */

longlong FUN_18006a1b9(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x50) - *(longlong *)(param_1 + 0x48) >> 4;
    lVar1 = 0;
    if ((*(longlong *)(param_1 + 0x30) - *(longlong *)(param_1 + 0x28) >> 3) * -0x71c71c71c71c71c7 +
        lVar2 * 0x79435e50d79435e5 == 0) {
      lVar1 = lVar2 * -0x79435e50d79435e5;
    }
    return lVar1;
  }
  return 0;
}

