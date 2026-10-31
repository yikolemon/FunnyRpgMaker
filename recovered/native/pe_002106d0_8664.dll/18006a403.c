/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18006a403 */

longlong FUN_18006a403(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_1 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x48);
    lVar2 = *(longlong *)(param_1 + 0x50) - lVar1 >> 4;
    lVar3 = 0;
    if (((*(longlong *)(param_1 + 0x30) - *(longlong *)(param_1 + 0x28) >> 3) * -0x71c71c71c71c71c7
         + lVar2 * 0x79435e50d79435e5 == 0) && (param_2 < (ulonglong)(lVar2 * -0x79435e50d79435e5)))
    {
      lVar3 = (*(longlong *)(lVar1 + 0x80 + param_2 * 0x130) -
               *(longlong *)(lVar1 + 0x78 + param_2 * 0x130) >> 3) * -0x3333333333333333;
    }
    return lVar3;
  }
  return 0;
}

