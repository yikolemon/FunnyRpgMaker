/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18006a39c */

longlong FUN_18006a39c(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_1 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x38);
    lVar2 = *(longlong *)(param_1 + 0x40) - lVar1 >> 3;
    lVar3 = 0;
    if (((*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 3) * 0x6db6db6db6db6db7 +
         lVar2 * -0x21cfb2b78c13521d == 0) && (param_2 < (ulonglong)(lVar2 * 0x21cfb2b78c13521d))) {
      lVar3 = *(longlong *)(lVar1 + 0xd8 + param_2 * 0x1a8) -
              *(longlong *)(lVar1 + 0xd0 + param_2 * 0x1a8) >> 5;
    }
    return lVar3;
  }
  return 0;
}

