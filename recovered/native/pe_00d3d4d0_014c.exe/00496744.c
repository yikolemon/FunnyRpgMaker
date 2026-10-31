/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00496744 */

void __cdecl FUN_00496744(int param_1,int *param_2,int param_3)

{
  int iVar1;
  
  if ((*param_2 != (&DAT_00521ed4)[param_3]) && ((*(uint *)(param_1 + 0x350) & DAT_0051b640) == 0))
  {
    iVar1 = FUN_004978c2();
    *param_2 = iVar1;
  }
  return;
}

