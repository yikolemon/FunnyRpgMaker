/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14012a574 */

void FUN_14012a574(longlong param_1,int param_2,int param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((param_1 != 0) && (*(short *)(param_1 + 2) != 0)) {
    lVar2 = *(longlong *)(param_1 + 8);
    lVar3 = 0;
    do {
      piVar1 = (int *)(lVar2 + lVar3 * 8);
      *piVar1 = *piVar1 + param_2;
      piVar1 = (int *)(lVar2 + 4 + lVar3 * 8);
      *piVar1 = *piVar1 + param_3;
      lVar3 = lVar3 + 1;
    } while ((ushort)lVar3 < *(ushort *)(param_1 + 2));
  }
  return;
}

