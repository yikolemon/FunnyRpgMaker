/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100ab664 */

void __fastcall FUN_100ab664(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != *(int *)(param_1 + 8)) {
    FUN_100ab808(iVar1);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x44;
    return;
  }
  FUN_100ab68e(iVar1);
  return;
}

