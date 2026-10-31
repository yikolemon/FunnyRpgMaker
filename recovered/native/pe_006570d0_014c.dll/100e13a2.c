/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100e13a2 */

void __fastcall FUN_100e13a2(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
  while (iVar1 != 0) {
    FUN_100e13c8();
    iVar1 = *(int *)(param_1 + 0x10);
  }
  if (*(int *)(param_1 + 4) == 0) {
    return;
  }
  FUN_100e13f6();
  return;
}

