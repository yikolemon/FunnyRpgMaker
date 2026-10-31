/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140752f3c */

int FUN_140752f3c(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined8 unaff_RBX;
  int iVar4;
  
  iVar4 = (int)((ulonglong)unaff_RBX >> 0x20);
  iVar1 = *param_1;
  iVar2 = param_1[2];
  piVar3 = (int *)FUN_140752ed4();
  if (((int)piVar3 != iVar2 + iVar1 * 8) && (*piVar3 == (int)unaff_RBX)) {
    iVar4 = piVar3[1];
  }
  return iVar4;
}

