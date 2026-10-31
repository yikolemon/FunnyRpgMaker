/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101dda5c */

int __fastcall FUN_101dda5c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = *(int *)(param_1 + 0x24);
  iVar4 = 0;
  if (2 < iVar1) {
    iVar3 = FUN_101ddee0();
    iVar6 = -0x80000000;
    iVar4 = 0;
    iVar5 = 0;
    do {
      if (((iVar3 != iVar5) &&
          (iVar2 = *(int *)(*(int *)(param_1 + 0x30) + iVar5 * 4), iVar6 < iVar2)) &&
         (*(int *)(*(int *)(param_1 + 0x2c) + iVar5 * 4) <
          *(int *)(*(int *)(param_1 + 0x2c) + iVar3 * 4))) {
        iVar4 = iVar5;
        iVar6 = iVar2;
      }
      iVar5 = iVar5 + 1;
    } while (iVar1 != iVar5);
  }
  return iVar4;
}

