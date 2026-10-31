/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180147726 */

void FUN_180147726(undefined8 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_180155f5d();
  iVar2 = param_2[1];
  iVar3 = param_2[2];
  if (iVar2 != iVar3) {
    if (iVar1 < iVar2) {
      param_2[1] = iVar1;
      iVar2 = iVar1;
    }
    if (iVar1 < iVar3) {
      param_2[2] = iVar1;
      iVar3 = iVar1;
    }
    if (iVar2 == iVar3) {
      *param_2 = iVar2;
    }
  }
  if (iVar1 < *param_2) {
    *param_2 = iVar1;
  }
  return;
}

