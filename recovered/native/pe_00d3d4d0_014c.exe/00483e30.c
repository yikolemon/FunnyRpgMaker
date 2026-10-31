/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00483e30 */

int __cdecl FUN_00483e30(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (DAT_0051bef8 == -1) {
    iVar1 = FUN_0048f3a6();
    iVar2 = 0;
    if (iVar1 == 0) {
      iVar2 = param_1;
    }
    return (iVar2 != 0) - 1;
  }
  iVar1 = FUN_0048f335();
  iVar2 = 0;
  if (iVar1 == 0) {
    iVar2 = param_1;
  }
  return (iVar2 != 0) - 1;
}

