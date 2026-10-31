/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0045f3fa */

void __fastcall FUN_0045f3fa(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  iVar2 = *(int *)(iVar1 + 0x1e8);
  param_1[6] = *(int *)(iVar1 + 0x1a4);
  param_1[7] = *(int *)(iVar1 + 0x1a8);
  param_1[5] = *(int *)(iVar2 + 0x14);
  param_1[4] = *(int *)(iVar2 + 0x18 + (uint)(param_2 != 0) * 4);
  return;
}

