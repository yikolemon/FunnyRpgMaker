/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00435607 */

void __fastcall FUN_00435607(int param_1,int param_2,int param_3)

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
        FUN_00436b86(*(int *)(*(int *)(param_1 + 0x28) + iVar3 * 4),-param_3);
        iVar2 = *(int *)(param_1 + 0x24);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  return;
}

