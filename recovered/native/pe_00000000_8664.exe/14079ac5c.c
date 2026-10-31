/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14079ac5c */

void FUN_14079ac5c(undefined8 param_1,ulonglong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)(param_2 & 0xffffffff);
  iVar1 = FUN_1407a9c61();
  iVar2 = piVar4[1];
  iVar3 = piVar4[2];
  if (iVar2 != iVar3) {
    if (iVar1 < iVar2) {
      piVar4[1] = iVar1;
      iVar2 = iVar1;
    }
    if (iVar1 < iVar3) {
      piVar4[2] = iVar1;
      iVar3 = iVar1;
    }
    if (iVar2 == iVar3) {
      *piVar4 = iVar2;
    }
  }
  if (iVar1 < *piVar4) {
    *piVar4 = iVar1;
  }
  return;
}

