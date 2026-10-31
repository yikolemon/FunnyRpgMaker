/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0045cdbb */

int __cdecl FUN_0045cdbb(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if ((param_2 == 0) ||
     (piVar1 = *(int **)(param_1 + 0xc),
     (uint)*(ushort *)((int)piVar1 + 0x16) + param_2 + (uint)*(ushort *)((int)piVar1 + 0x3a) <=
     (uint)piVar1[1])) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_0041c799(piVar1,param_2,0);
  }
  return iVar2;
}

