/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1012a362 */

int __fastcall FUN_1012a362(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x24) != 0) {
    iVar2 = 0;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x2c) + iVar2);
      if (*(int *)(iVar1 + 8) == param_2) {
        return iVar1;
      }
      iVar2 = iVar2 + 4;
    } while (*(int *)(param_1 + 0x24) << 2 != iVar2);
  }
  return 0;
}

