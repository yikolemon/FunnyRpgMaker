/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1011ca97 */

void __fastcall FUN_1011ca97(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x26a8);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x26b0);
    iVar3 = 0;
    do {
      if (*(int *)(iVar2 + 8 + iVar3) == param_2) {
        *(undefined4 *)(iVar2 + iVar3) = 0;
      }
      iVar3 = iVar3 + 0x24;
    } while (iVar1 * 0x24 != iVar3);
  }
  return;
}

