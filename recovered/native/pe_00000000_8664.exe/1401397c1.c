/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401397c1 */

void FUN_1401397c1(longlong param_1,int param_2)

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
      iVar2 = *(int *)(*(longlong *)(param_1 + 0x38) + uVar4 * 4);
      if ((iVar2 < *(int *)(*(longlong *)(param_1 + 0x40) + uVar4 * 4)) && (iVar1 <= iVar2)) {
        FUN_140139812(param_1,uVar4 & 0xffffffff);
        iVar3 = *(int *)(param_1 + 0x2c);
      }
      uVar4 = uVar4 + 1;
    } while ((longlong)uVar4 < (longlong)iVar3);
  }
  return;
}

