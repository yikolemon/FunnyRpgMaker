/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1027494a */

void FUN_1027494a(int param_1,int *param_2)

{
  int iVar1;
  
  if ((*param_2 != DAT_103a5454) && ((*(uint *)(param_1 + 0x350) & DAT_1039bbd0) == 0)) {
    iVar1 = FUN_1027660b();
    *param_2 = iVar1;
  }
  return;
}

