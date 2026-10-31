/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0041cd15 */

int __fastcall FUN_0041cd15(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = FUN_00421a95(param_1);
  iVar2 = *piVar1 + 4;
  if (*piVar1 == 0) {
    iVar2 = 0;
  }
  return iVar2;
}

