/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101dde97 */

void __fastcall FUN_101dde97(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x24);
  if (0 < iVar2) {
    iVar3 = 0;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x30) + iVar3 * 4);
      if (iVar1 < param_2 && *(int *)(*(int *)(param_1 + 0x2c) + iVar3 * 4) < iVar1) {
        FUN_101df416();
        iVar2 = *(int *)(param_1 + 0x24);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  return;
}

