/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18028ea80 */

undefined8 FUN_18028ea80(int *param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *param_1) {
    do {
      iVar1 = param_1[1];
      lVar2 = FUN_18026e580();
      if (*(int *)(lVar2 + iVar1 + 4 + (longlong)iVar3 * 0x14) == 0) {
        lVar2 = 0;
      }
      else {
        iVar1 = param_1[1];
        lVar2 = FUN_18026e580();
        iVar1 = *(int *)(lVar2 + (longlong)iVar3 * 0x14 + 4 + (longlong)iVar1);
        lVar2 = FUN_18026e580();
        lVar2 = lVar2 + iVar1;
      }
      iVar1 = FUN_18026eb10(lVar2 + 8,0x180401278);
      if (iVar1 == 0) {
        return 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *param_1);
  }
  return 0;
}

