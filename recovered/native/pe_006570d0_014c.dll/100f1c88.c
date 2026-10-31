/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f1c88 */

void __fastcall FUN_100f1c88(int param_1)

{
  int *piVar1;
  int iVar2;
  
  FUN_100f072e();
  piVar1 = (int *)(param_1 + 0x10);
  *piVar1 = *piVar1 + -1;
  iVar2 = 0;
  if (*piVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0xc) + 1;
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}

