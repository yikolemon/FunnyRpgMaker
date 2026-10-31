/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400d8723 */

longlong FUN_1400d8723(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_1 + 0x150) != 0) {
    lVar2 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x158) + lVar2);
      if (*(longlong *)(lVar1 + 0x60) == param_2) {
        return lVar1;
      }
      lVar2 = lVar2 + 8;
    } while ((longlong)*(int *)(param_1 + 0x150) * 8 != lVar2);
  }
  return 0;
}

