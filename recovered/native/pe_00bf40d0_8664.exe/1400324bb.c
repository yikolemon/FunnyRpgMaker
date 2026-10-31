/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400324bb */

int FUN_1400324bb(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = -param_1;
  if (param_2 < param_1) {
    iVar4 = 1;
    iVar2 = param_1;
    if (param_2 < iVar1) {
      iVar4 = -2;
      iVar2 = -param_2;
      param_2 = param_1;
    }
  }
  else {
    iVar2 = iVar1;
    if (iVar1 < param_2) {
      iVar2 = param_2;
    }
    if (param_2 < iVar1) {
      param_1 = param_2;
    }
    iVar4 = (uint)(iVar1 <= param_2) * 3 + -1;
    param_2 = param_1;
  }
  iVar1 = -param_2;
  if (-param_2 < 0) {
    iVar1 = param_2;
  }
  iVar3 = 4;
  if (iVar1 * 0xe < iVar2) {
    iVar3 = iVar4;
  }
  return iVar3;
}

