/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0045f8e8 */

int __fastcall FUN_0045f8e8(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 0xc);
  if ((uint)piVar1[1] <
      (uint)*(ushort *)((int)piVar1 + 0x16) + param_2 + (uint)*(ushort *)((int)piVar1 + 0x3a)) {
    iVar2 = FUN_0041c799(piVar1,param_2,0);
    return iVar2;
  }
  return 0;
}

