/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10274977 */

void FUN_10274977(int param_1,int *param_2,int param_3)

{
  int iVar1;
  
  if ((*param_2 != (&DAT_103a50f0)[param_3]) && ((*(uint *)(param_1 + 0x350) & DAT_1039bbd0) == 0))
  {
    iVar1 = FUN_1027c0cc();
    *param_2 = iVar1;
  }
  return;
}

