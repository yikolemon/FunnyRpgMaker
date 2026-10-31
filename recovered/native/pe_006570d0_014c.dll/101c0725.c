/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c0725 */

int FUN_101c0725(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_101c5a0d(param_1);
  iVar2 = *piVar1 + 4;
  if (*piVar1 == 0) {
    iVar2 = 0;
  }
  return iVar2;
}

