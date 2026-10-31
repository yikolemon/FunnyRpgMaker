/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101dbc2b */

void FUN_101dbc2b(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_101dbddc(*(int *)(param_2 + 4) - *(int *)(param_1 + 4));
  *(int *)(param_2 + 8) = iVar1 + *(int *)(param_1 + 8);
  return;
}

