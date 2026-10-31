/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400377a3 */

void FUN_1400377a3(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = *(int *)(param_1 + 0x2c);
  if (0 < iVar3) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x38) + (longlong)param_2 * 4);
    lVar4 = 0;
    do {
      iVar2 = *(int *)(*(longlong *)(param_1 + 0x40) + lVar4 * 4);
      if ((*(int *)(*(longlong *)(param_1 + 0x38) + lVar4 * 4) < iVar2) && (iVar2 <= iVar1)) {
        FUN_14003775a(param_1,(int)lVar4);
        iVar3 = *(int *)(param_1 + 0x2c);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar3);
  }
  return;
}

