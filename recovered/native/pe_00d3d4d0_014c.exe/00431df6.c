/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00431df6 */

int __fastcall FUN_00431df6(int param_1,int param_2)

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
    }
    else {
      iVar2 = 1;
      iVar3 = param_1;
      param_1 = param_2;
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
    param_1 = param_2;
  }
  iVar5 = -param_1;
  if (-param_1 < 0) {
    iVar5 = param_1;
  }
  iVar4 = 4;
  if (iVar5 * 0xe < iVar3) {
    iVar4 = iVar2;
  }
  return iVar4;
}

