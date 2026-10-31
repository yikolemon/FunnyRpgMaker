/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400a9324 */

longlong FUN_1400a9324(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_1 + 0x30) != 0) {
    lVar2 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x38) + lVar2);
      if (*(int *)(lVar1 + 0x10) == param_2) {
        return lVar1;
      }
      lVar2 = lVar2 + 8;
    } while ((longlong)*(int *)(param_1 + 0x30) * 8 != lVar2);
  }
  return 0;
}

