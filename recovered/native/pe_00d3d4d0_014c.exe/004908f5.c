/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004908f5 */

uint __cdecl FUN_004908f5(int param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = (int *)0x0;
  if (param_1 != 0) {
    piVar1 = (int *)(*(uint *)(param_1 + 0xc) >> 0xd);
    if (((uint)piVar1 & 1) != 0) {
      uVar2 = FUN_004908d2(*(uint *)(param_1 + 0xc));
      if ((char)uVar2 != '\0') {
        return CONCAT31((int3)(uVar2 >> 8),1);
      }
      *param_2 = *param_2 + 1;
      piVar1 = param_2;
    }
  }
  return (uint)piVar1 & 0xffffff00;
}

