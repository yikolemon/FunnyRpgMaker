/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801e4e87 */

int FUN_1801e4e87(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = -param_1;
  if (param_2 < param_1) {
    iVar4 = 1;
    if (param_2 < iVar2) {
      iVar2 = -param_2;
      iVar4 = -2;
      param_2 = param_1;
      param_1 = iVar2;
    }
  }
  else {
    iVar3 = iVar2;
    if (iVar2 < param_2) {
      iVar3 = param_2;
    }
    bVar1 = iVar2 <= param_2;
    if (param_2 < iVar2) {
      param_1 = param_2;
    }
    param_2 = param_1;
    iVar4 = (uint)bVar1 * 3 + -1;
    param_1 = iVar3;
  }
  iVar2 = -param_2;
  if (-param_2 < 0) {
    iVar2 = param_2;
  }
  iVar3 = 4;
  if (iVar2 * 0xe < param_1) {
    iVar3 = iVar4;
  }
  return iVar3;
}

