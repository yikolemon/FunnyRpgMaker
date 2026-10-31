/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f092a */

void __fastcall FUN_100f092a(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
  while (iVar1 != 0) {
    FUN_100f0950();
    iVar1 = *(int *)(param_1 + 0x10);
  }
  if (*(int *)(param_1 + 4) == 0) {
    return;
  }
  FUN_100b6596();
  return;
}

