/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0043339b */

void __fastcall FUN_0043339b(int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  
  uVar1 = FUN_0043354c(param_1,param_2,*(int *)(param_4 + 4) - *(int *)(param_3 + 4));
  *(uint *)(param_4 + 8) = uVar1 + *(int *)(param_3 + 8);
  return;
}

