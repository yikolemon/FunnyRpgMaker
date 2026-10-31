/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b53c8 */

void __fastcall FUN_100b53c8(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != *(int *)(param_1 + 8)) {
    FUN_100b55a0(iVar1);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x30;
    return;
  }
  FUN_100b53f2(iVar1);
  return;
}

