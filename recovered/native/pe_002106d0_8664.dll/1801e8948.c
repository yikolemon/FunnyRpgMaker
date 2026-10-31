/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801e8948 */

void FUN_1801e8948(longlong param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = *(int *)(param_1 + 0x2c);
  if (0 < iVar2) {
    lVar3 = 0;
    do {
      iVar1 = *(int *)(*(longlong *)(param_1 + 0x38) + lVar3 * 4);
      if ((param_2 < iVar1) && (iVar1 < *(int *)(*(longlong *)(param_1 + 0x40) + lVar3 * 4))) {
        FUN_1801ea15a(*(undefined8 *)(*(longlong *)(param_1 + 0x30) + lVar3 * 8),param_3);
        iVar2 = *(int *)(param_1 + 0x2c);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar2);
  }
  return;
}

