/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1014b44d */

void __fastcall FUN_1014b44d(int *param_1,int param_2,byte param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  piVar1 = (int *)FUN_100fb004(param_1[7],param_1[7] + param_4 * 8,param_2);
  iVar4 = param_1[7];
  uVar5 = 0;
  bVar3 = 1;
  if ((piVar1 != (int *)(iVar4 + param_4 * 8)) && (*piVar1 == param_2)) {
    uVar5 = (uint)(piVar1[1] != 0);
    bVar3 = 0;
  }
  if (uVar5 != param_3) {
    if ((param_3 & bVar3) == 1) {
      iVar2 = param_1[5];
      if (iVar2 == param_1[6]) {
        if (iVar2 == 0) {
          iVar4 = 8;
        }
        else {
          iVar4 = iVar2 / 2 + iVar2;
        }
        iVar6 = iVar2 + 1;
        if (iVar2 + 1 < iVar4) {
          iVar6 = iVar4;
        }
        iVar4 = FUN_100fa1fa(iVar6 * 8);
        if (param_1[7] != 0) {
          FUN_1025b2d0(iVar4,param_1[7],param_1[5] << 3);
          FUN_100fa2cb(param_1[7]);
        }
        param_1[7] = iVar4;
        param_1[6] = iVar6;
        iVar2 = param_1[5];
      }
      *(int *)(iVar4 + 4 + iVar2 * 8) = param_5;
      *(int *)(iVar4 + iVar2 * 8) = param_2;
      param_1[5] = param_1[5] + 1;
    }
    else if (bVar3 == 0) {
      iVar4 = 0;
      if (param_3 != 0) {
        iVar4 = param_5;
      }
      piVar1[1] = iVar4;
    }
    *param_1 = *param_1 + (param_3 - 1 | 1);
  }
  return;
}

