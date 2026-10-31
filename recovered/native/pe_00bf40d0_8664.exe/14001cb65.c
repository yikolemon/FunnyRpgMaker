/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14001cb65 */

void FUN_14001cb65(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 4);
    lVar2 = *(longlong *)(param_1 + 0x20);
    if (iVar1 != 0) {
      lVar3 = 0;
      do {
        FUN_14001c53d(param_2,*(longlong *)(lVar2 + lVar3 * 8));
        *(undefined8 *)(lVar2 + lVar3 * 8) = 0;
        lVar3 = lVar3 + 1;
      } while (iVar1 != (int)lVar3);
      lVar2 = *(longlong *)(param_1 + 0x20);
    }
    FUN_14001c53d(param_2,lVar2);
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  return;
}

