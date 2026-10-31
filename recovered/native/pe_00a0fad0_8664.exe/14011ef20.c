/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14011ef20 */

undefined8 FUN_14011ef20(int *param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *param_1) {
    do {
      iVar1 = param_1[1];
      lVar2 = FUN_1401070c0();
      if (*(int *)(lVar2 + iVar1 + 4 + (longlong)iVar3 * 0x14) == 0) {
        lVar2 = 0;
      }
      else {
        iVar1 = param_1[1];
        lVar2 = FUN_1401070c0();
        iVar1 = *(int *)(lVar2 + (longlong)iVar3 * 0x14 + 4 + (longlong)iVar1);
        lVar2 = FUN_1401070c0();
        lVar2 = lVar2 + iVar1;
      }
      iVar1 = FUN_140107e30(lVar2 + 8,0x1401cb138);
      if (iVar1 == 0) {
        return 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *param_1);
  }
  return 0;
}

