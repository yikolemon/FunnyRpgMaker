/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100fb29c */

void __thiscall FUN_100fb29c(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar5;
  int iVar4;
  
  iVar4 = *param_1;
  iVar2 = param_1[2];
  piVar1 = (int *)FUN_100fb004(iVar2,iVar2 + iVar4 * 8,param_2);
  if ((piVar1 == (int *)(iVar2 + iVar4 * 8)) || (*piVar1 != param_2)) {
    iVar5 = (int)piVar1 - iVar2;
    if (iVar4 == param_1[1]) {
      if (iVar4 == 0) {
        iVar2 = 8;
      }
      else {
        iVar2 = iVar4 / 2 + iVar4;
      }
      iVar3 = iVar4 + 1;
      if (iVar4 + 1 < iVar2) {
        iVar3 = iVar2;
      }
      iVar2 = FUN_100fa1fa(iVar3 * 8);
      if (param_1[2] != 0) {
        FUN_1025b2d0(iVar2,param_1[2],*param_1 << 3);
        FUN_100fa2cb(param_1[2]);
      }
      param_1[2] = iVar2;
      param_1[1] = iVar3;
      iVar4 = *param_1;
    }
    iVar3 = iVar4 - (iVar5 >> 3);
    if (iVar3 != 0 && iVar5 >> 3 <= iVar4) {
      FUN_1025b2d0(iVar2 + iVar5 + 8,iVar2 + iVar5,iVar3 * 8);
      iVar2 = param_1[2];
    }
    *(int *)(iVar2 + 4 + iVar5) = param_3;
    *(int *)(iVar2 + iVar5) = param_2;
    *param_1 = *param_1 + 1;
  }
  else {
    piVar1[1] = param_3;
  }
  return;
}

