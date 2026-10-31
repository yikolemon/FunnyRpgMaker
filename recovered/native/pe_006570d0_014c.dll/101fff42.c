/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101fff42 */

undefined4 FUN_101fff42(int *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*param_1 + 0x84);
  FUN_101c2486(*param_1,0);
  param_1[6] = (uint)*(ushort *)(iVar1 + 0x50) << 6;
  param_1[7] = ((uint)*(ushort *)(iVar1 + 0x50) - (uint)*(ushort *)(iVar1 + 0x60)) * 0x40;
  param_1[9] = (uint)*(ushort *)(iVar1 + 0x66) << 6;
  return 0;
}

