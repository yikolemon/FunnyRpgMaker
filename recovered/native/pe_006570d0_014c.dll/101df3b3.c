/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101df3b3 */

void __fastcall FUN_101df3b3(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1 + 0x24);
  if (0 < iVar3) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x2c) + param_2 * 4);
    iVar4 = 0;
    do {
      iVar2 = *(int *)(*(int *)(param_1 + 0x2c) + iVar4 * 4);
      if ((iVar2 < *(int *)(*(int *)(param_1 + 0x30) + iVar4 * 4)) && (iVar1 <= iVar2)) {
        FUN_101df3ee();
        iVar3 = *(int *)(param_1 + 0x24);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar3);
  }
  return;
}

