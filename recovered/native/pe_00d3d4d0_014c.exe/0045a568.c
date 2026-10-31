/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0045a568 */

undefined4 __cdecl FUN_0045a568(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(*param_1 + 0x8c);
  FUN_0041ea03(*param_1,param_2);
  param_1[6] = *(int *)(iVar1 + 0x24) << 6;
  param_1[7] = *(int *)(iVar1 + 0x28) * -0x40;
  param_1[9] = (uint)*(ushort *)(iVar1 + 4) << 6;
  return 0;
}

