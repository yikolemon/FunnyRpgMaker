/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801ea16f */

void FUN_1801ea16f(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  
  iVar3 = *(int *)(param_1 + 0x2c);
  if (0 < iVar3) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x38) + (longlong)param_2 * 4);
    uVar4 = 0;
    do {
      iVar2 = *(int *)(*(longlong *)(param_1 + 0x40) + uVar4 * 4);
      if ((*(int *)(*(longlong *)(param_1 + 0x38) + uVar4 * 4) < iVar2) && (iVar2 <= iVar1)) {
        FUN_1801ea126(param_1,uVar4 & 0xffffffff);
        iVar3 = *(int *)(param_1 + 0x2c);
      }
      uVar4 = uVar4 + 1;
    } while ((longlong)uVar4 < (longlong)iVar3);
  }
  return;
}

