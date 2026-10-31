/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400fa055 */

void FUN_1400fa055(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x30);
    lVar3 = 0;
    do {
      FUN_1400fa055(*(undefined8 *)(lVar2 + lVar3));
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  FUN_1400fa098(param_1);
  return;
}

