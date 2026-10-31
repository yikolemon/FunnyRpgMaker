/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10202df0 */

undefined4 FUN_10202df0(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(*param_1 + 0x8c);
  FUN_101c2486(*param_1,param_2);
  param_1[6] = *(int *)(iVar1 + 0x24) << 6;
  param_1[7] = *(int *)(iVar1 + 0x28) * -0x40;
  param_1[9] = (uint)*(ushort *)(iVar1 + 4) << 6;
  return 0;
}

