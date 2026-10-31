/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004576ba */

undefined4 __cdecl FUN_004576ba(int *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*param_1 + 0x84);
  FUN_0041ea03(*param_1,0);
  param_1[6] = (uint)*(ushort *)(iVar1 + 0x50) << 6;
  param_1[7] = ((uint)*(ushort *)(iVar1 + 0x50) - (uint)*(ushort *)(iVar1 + 0x60)) * 0x40;
  param_1[9] = (uint)*(ushort *)(iVar1 + 0x66) << 6;
  return 0;
}

