/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10208170 */

undefined4 __fastcall FUN_10208170(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (*(uint *)(iVar1 + 4) <
      (uint)*(ushort *)(iVar1 + 0x16) + param_2 + (uint)*(ushort *)(iVar1 + 0x3a)) {
    uVar2 = FUN_101c01a9(iVar1,param_2,0);
    return uVar2;
  }
  return 0;
}

