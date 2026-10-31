/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1018e78e */

void FUN_1018e78e(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  
  if (*(undefined4 **)(param_1 + 0x294) != param_2) {
    iVar2 = *(int *)(param_1 + 0x54);
    if (iVar2 != 0) {
      iVar3 = *(int *)(param_1 + 0x5c);
      iVar6 = 0;
      do {
        FUN_1018e667(param_1,*(undefined4 *)(iVar3 + iVar6));
        iVar6 = iVar6 + 4;
      } while (iVar2 << 2 != iVar6);
    }
    if (((*(int *)(param_1 + 0x290) != 0) && (*(int *)(param_1 + 0x294) != 0)) &&
       (pcVar4 = *(code **)(*(int *)(param_1 + 0x294) + 8), pcVar4 != (code *)0x0)) {
      (*pcVar4)(param_1);
    }
    *(undefined4 **)(param_1 + 0x294) = param_2;
    if (param_2 == (undefined4 *)0x0) {
      *(char **)(param_1 + 0x298) = "NULL";
    }
    else {
      *(undefined4 *)(param_1 + 0x298) = *param_2;
      if ((*(int *)(param_1 + 0x290) != 0) && ((code *)param_2[1] != (code *)0x0)) {
        (*(code *)param_2[1])(param_1);
      }
    }
    iVar2 = *(int *)(param_1 + 0x54);
    if (iVar2 != 0) {
      iVar3 = *(int *)(param_1 + 0x5c);
      iVar6 = 0;
      do {
        FUN_101908d5(param_1,*(undefined4 *)(iVar3 + iVar6));
        iVar6 = iVar6 + 4;
      } while (iVar2 << 2 != iVar6);
      if (*(int *)(param_1 + 0x54) != 0) {
        piVar5 = *(int **)(param_1 + 0x5c);
        piVar1 = piVar5 + *(int *)(param_1 + 0x54);
        do {
          iVar2 = *piVar5;
          iVar3 = *(int *)(iVar2 + 0x18);
          if (iVar3 != 0) {
            iVar6 = *(int *)(iVar2 + 0x20);
            iVar7 = 0;
            do {
              FUN_1018f6b9(param_1,iVar2,*(undefined4 *)(iVar6 + iVar7));
              iVar7 = iVar7 + 4;
            } while (iVar3 << 2 != iVar7);
          }
          piVar5 = piVar5 + 1;
        } while (piVar5 != piVar1);
      }
    }
  }
  return;
}

