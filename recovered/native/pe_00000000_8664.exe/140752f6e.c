/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140752f6e */

int FUN_140752f6e(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined8 unaff_RDI;
  
  iVar1 = *param_1;
  iVar2 = param_1[2];
  uVar3 = FUN_140752ed4();
  iVar4 = 0;
  if ((uVar3 != iVar2 + iVar1 * 8) &&
     (*(int *)(ulonglong)uVar3 == (int)((ulonglong)unaff_RDI >> 0x20))) {
    iVar4 = ((int *)(ulonglong)uVar3)[1];
  }
  return iVar4;
}

