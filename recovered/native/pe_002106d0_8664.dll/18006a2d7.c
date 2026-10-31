/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18006a2d7 */

longlong FUN_18006a2d7(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_1 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x28);
    lVar2 = *(longlong *)(param_1 + 0x50) - *(longlong *)(param_1 + 0x48) >> 4;
    lVar3 = 0;
    if (((*(longlong *)(param_1 + 0x30) - lVar1 >> 3) * -0x71c71c71c71c71c7 +
         lVar2 * 0x79435e50d79435e5 == 0) && (param_2 < (ulonglong)(lVar2 * -0x79435e50d79435e5))) {
      lVar3 = *(longlong *)(lVar1 + 0x30 + param_2 * 0x48) -
              *(longlong *)(lVar1 + 0x28 + param_2 * 0x48) >> 6;
    }
    return lVar3;
  }
  return 0;
}

