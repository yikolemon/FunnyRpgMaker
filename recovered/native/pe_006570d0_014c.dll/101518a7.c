/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101518a7 */

int __fastcall FUN_101518a7(int param_1,int param_2)

{
  int iVar1;
  
  if (0 < param_2) {
    iVar1 = FUN_100fab4a(*(int *)(param_1 + 0x14),param_2 + *(int *)(param_1 + 0x14));
    return iVar1 - *(int *)(param_1 + 0x14);
  }
  return -1;
}

