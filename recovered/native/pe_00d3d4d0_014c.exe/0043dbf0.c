/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0043dbf0 */

void __cdecl FUN_0043dbf0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 100);
  FUN_0041c607(iVar1,*(int *)(param_2 + 8));
  *(undefined4 *)(param_2 + 8) = 0;
  FUN_0041c607(iVar1,*(int *)(param_2 + 4));
  *(undefined4 *)(param_2 + 4) = 0;
  return;
}

