/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10142648 */

undefined4 __fastcall FUN_10142648(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  return CONCAT31((int3)((uint)iVar1 >> 8),*(int *)(iVar1 + 4) != *(int *)(iVar1 + 8));
}

