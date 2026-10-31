/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801ca18d */

void FUN_1801ca18d(longlong param_1,undefined8 param_2)

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
        FUN_1801c9b65(param_2,*(undefined8 *)(lVar2 + lVar3 * 8));
        *(undefined8 *)(lVar2 + lVar3 * 8) = 0;
        lVar3 = lVar3 + 1;
      } while (iVar1 != (int)lVar3);
      lVar2 = *(longlong *)(param_1 + 0x20);
    }
    FUN_1801c9b65(param_2,lVar2);
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  return;
}

