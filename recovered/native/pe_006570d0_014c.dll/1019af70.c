/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1019af70 */

int __fastcall FUN_1019af70(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0xb4) != 0) {
    iVar2 = 0;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0xbc) + iVar2);
      if (*(int *)(iVar1 + 0x4c) == param_2) {
        return iVar1;
      }
      iVar2 = iVar2 + 4;
    } while (*(int *)(param_1 + 0xb4) << 2 != iVar2);
  }
  return 0;
}

