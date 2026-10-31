/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00436b97 */

void __fastcall FUN_00436b97(int param_1,int param_2)

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
      iVar2 = *(int *)(*(int *)(param_1 + 0x30) + iVar4 * 4);
      if ((*(int *)(*(int *)(param_1 + 0x2c) + iVar4 * 4) < iVar2) && (iVar2 <= iVar1)) {
        FUN_00436b5e(param_1,iVar4);
        iVar3 = *(int *)(param_1 + 0x24);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar3);
  }
  return;
}

