/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101df4b6 */

void FUN_101df4b6(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = FUN_101df4f7(*(int *)(param_2 + 4) - *(int *)(param_1 + 4),iVar1 - *(int *)(param_1 + 4),
                       *(undefined1 *)(param_1 + 0xc),*(undefined1 *)(param_2 + 0xc));
  *(int *)(param_2 + 8) = iVar2 + iVar1;
  return;
}

