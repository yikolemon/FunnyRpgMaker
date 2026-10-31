/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101da686 */

int __fastcall FUN_101da686(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = -param_1;
  if (param_2 < param_1) {
    if (param_2 < iVar2) {
      iVar2 = -2;
      iVar3 = -param_2;
      param_2 = param_1;
    }
    else {
      iVar2 = 1;
      iVar3 = param_1;
    }
  }
  else {
    iVar3 = iVar2;
    if (iVar2 < param_2) {
      iVar3 = param_2;
    }
    bVar1 = iVar2 <= param_2;
    if (iVar2 <= param_2) {
      param_2 = param_1;
    }
    iVar2 = (uint)bVar1 * 3 + -1;
  }
  iVar5 = -param_2;
  if (-param_2 < 0) {
    iVar5 = param_2;
  }
  iVar4 = 4;
  if (iVar5 * 0xe < iVar3) {
    iVar4 = iVar2;
  }
  return iVar4;
}

