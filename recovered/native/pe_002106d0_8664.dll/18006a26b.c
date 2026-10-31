/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18006a26b */

longlong FUN_18006a26b(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_1 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x20);
    lVar2 = *(longlong *)(param_1 + 0x40) - *(longlong *)(param_1 + 0x38) >> 3;
    lVar3 = 0;
    if (((*(longlong *)(param_1 + 0x28) - lVar1 >> 3) * 0x6db6db6db6db6db7 +
         lVar2 * -0x21cfb2b78c13521d == 0) && (param_2 < (ulonglong)(lVar2 * 0x21cfb2b78c13521d))) {
      lVar3 = (*(longlong *)(lVar1 + 0x20 + param_2 * 0x38) -
               *(longlong *)(lVar1 + 0x18 + param_2 * 0x38) >> 3) * -0x71c71c71c71c71c7;
    }
    return lVar3;
  }
  return 0;
}

