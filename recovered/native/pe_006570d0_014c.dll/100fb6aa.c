/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100fb6aa */

void __thiscall FUN_100fb6aa(undefined4 *param_1,char param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  
  if (param_3[1] < 0) {
    iVar1 = FUN_100fa1fa(0);
    if (param_3[2] != 0) {
      FUN_1025b2d0(iVar1,param_3[2],*param_3 << 3);
      FUN_100fa2cb(param_3[2]);
    }
    param_3[2] = iVar1;
    param_3[1] = 0;
  }
  *param_3 = 0;
  pcVar4 = (char *)*param_1;
  pcVar3 = (char *)param_1[1];
  if (pcVar4 < pcVar3) {
    iVar1 = 0;
    pcVar5 = pcVar4;
    pcVar7 = pcVar4;
    do {
      if (*pcVar5 == param_2) {
        if (iVar1 == param_3[1]) {
          if (iVar1 == 0) {
            iVar2 = 8;
          }
          else {
            iVar2 = iVar1 / 2 + iVar1;
          }
          iVar6 = iVar1 + 1;
          if (iVar1 + 1 < iVar2) {
            iVar6 = iVar2;
          }
          iVar2 = FUN_100fa1fa(iVar6 * 8);
          if (param_3[2] != 0) {
            FUN_1025b2d0(iVar2,param_3[2],*param_3 << 3);
            FUN_100fa2cb(param_3[2]);
          }
          param_3[2] = iVar2;
          param_3[1] = iVar6;
          iVar1 = *param_3;
        }
        else {
          iVar2 = param_3[2];
        }
        *(char **)(iVar2 + iVar1 * 8) = pcVar7;
        *(char **)(iVar2 + 4 + iVar1 * 8) = pcVar4;
        iVar1 = *param_3 + 1;
        *param_3 = iVar1;
        pcVar7 = pcVar5 + 1;
        pcVar3 = (char *)param_1[1];
      }
      pcVar5 = pcVar5 + 1;
      pcVar4 = pcVar4 + 1;
    } while (pcVar5 < pcVar3);
    if (pcVar5 != pcVar7) {
      if (iVar1 == param_3[1]) {
        if (iVar1 == 0) {
          iVar2 = 8;
        }
        else {
          iVar2 = iVar1 / 2 + iVar1;
        }
        iVar6 = iVar1 + 1;
        if (iVar1 + 1 < iVar2) {
          iVar6 = iVar2;
        }
        iVar2 = FUN_100fa1fa(iVar6 * 8);
        if (param_3[2] != 0) {
          FUN_1025b2d0(iVar2,param_3[2],*param_3 << 3);
          FUN_100fa2cb(param_3[2]);
        }
        param_3[2] = iVar2;
        param_3[1] = iVar6;
        iVar1 = *param_3;
      }
      else {
        iVar2 = param_3[2];
      }
      *(char **)(iVar2 + iVar1 * 8) = pcVar7;
      *(char **)(iVar2 + 4 + iVar1 * 8) = pcVar4;
      *param_3 = *param_3 + 1;
    }
  }
  return;
}

