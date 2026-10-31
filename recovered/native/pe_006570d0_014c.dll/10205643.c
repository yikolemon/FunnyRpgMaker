/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10205643 */

undefined4 FUN_10205643(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_2 == 0) ||
     (iVar1 = *(int *)(param_1 + 0xc),
     (uint)*(ushort *)(iVar1 + 0x16) + param_2 + (uint)*(ushort *)(iVar1 + 0x3a) <=
     *(uint *)(iVar1 + 4))) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_101c01a9(iVar1,param_2,0);
  }
  return uVar2;
}

