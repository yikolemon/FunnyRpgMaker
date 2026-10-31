/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00436c26 */

void __fastcall FUN_00436c26(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_3 + 8);
  uVar2 = FUN_00436c67(param_1,param_2,*(int *)(param_4 + 4) - *(int *)(param_3 + 4),
                       iVar1 - *(int *)(param_3 + 4),(uint)*(byte *)(param_3 + 0xc),
                       (uint)*(byte *)(param_4 + 0xc));
  *(uint *)(param_4 + 8) = uVar2 + iVar1;
  return;
}

