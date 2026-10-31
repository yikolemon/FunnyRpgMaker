/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0041de08 */

void __cdecl FUN_0041de08(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if ((param_1 != 0) && (*(short *)(param_1 + 2) != 0)) {
    iVar2 = *(int *)(param_1 + 4);
    iVar3 = 0;
    do {
      piVar1 = (int *)(iVar2 + iVar3 * 8);
      *piVar1 = *piVar1 + param_2;
      piVar1 = (int *)(iVar2 + 4 + iVar3 * 8);
      *piVar1 = *piVar1 + param_3;
      iVar3 = iVar3 + 1;
    } while ((ushort)iVar3 < *(ushort *)(param_1 + 2));
  }
  return;
}

