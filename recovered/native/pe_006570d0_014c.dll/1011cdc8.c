/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1011cdc8 */

int __fastcall FUN_1011cdc8(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x1c);
  while ((iVar1 = param_1, iVar2 != 0 && (iVar1 = FUN_1011cdc8(), iVar1 == 0))) {
    param_1 = *(int *)(param_1 + 0x20);
    iVar2 = *(int *)(param_1 + 0x1c);
  }
  return iVar1;
}

