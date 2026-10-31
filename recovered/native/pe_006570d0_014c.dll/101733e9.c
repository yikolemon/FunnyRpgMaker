/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101733e9 */

undefined4 __fastcall FUN_101733e9(undefined4 *param_1,int *param_2)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  
  pcVar6 = (char *)param_1[0x2b];
  if ((char *)param_1[0x2c] <= pcVar6) {
    if (param_1[8] == 0) goto LAB_101734ed;
    FUN_10170e8c();
    pcVar6 = (char *)param_1[0x2b];
  }
  pcVar1 = pcVar6 + 1;
  param_1[0x2b] = pcVar1;
  if (*pcVar6 != 'B') goto LAB_101734ed;
  if ((char *)param_1[0x2c] <= pcVar1) {
    if (param_1[8] == 0) goto LAB_101734ed;
    FUN_10170e8c();
    pcVar1 = (char *)param_1[0x2b];
  }
  param_1[0x2b] = pcVar1 + 1;
  if (*pcVar1 != 'M') goto LAB_101734ed;
  FUN_10173352();
  FUN_1017336c();
  FUN_1017336c();
  iVar2 = FUN_10173352();
  param_2[1] = iVar2;
  iVar2 = FUN_10173352();
  param_2[2] = iVar2;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[8] = 0xe;
  if (param_2[1] < 0) goto LAB_101734ed;
  if (iVar2 < 0x38) {
    if (iVar2 != 0xc) {
      if (iVar2 != 0x28) goto LAB_101734ed;
      goto LAB_101734b0;
    }
    uVar3 = FUN_1017336c();
    *param_1 = uVar3;
    uVar3 = FUN_1017336c();
  }
  else {
    if (((iVar2 != 0x38) && (iVar2 != 0x6c)) && (iVar2 != 0x7c)) goto LAB_101734ed;
LAB_101734b0:
    uVar3 = FUN_10173352();
    *param_1 = uVar3;
    uVar3 = FUN_10173352();
  }
  param_1[1] = uVar3;
  iVar4 = FUN_1017336c();
  if (iVar4 == 1) {
    iVar4 = FUN_1017336c();
    *param_2 = iVar4;
    if (iVar2 == 0xc) {
      return 1;
    }
    iVar4 = FUN_10173352();
    if (((1 < iVar4 - 1U) && (iVar4 < 4)) &&
       ((iVar4 != 3 || ((*param_2 == 0x10 || (*param_2 == 0x20)))))) {
      FUN_10173352();
      FUN_10173352();
      FUN_10173352();
      FUN_10173352();
      FUN_10173352();
      if (iVar2 < 0x6c) {
        if (iVar2 != 0x28) {
          if (iVar2 != 0x38) goto LAB_101734ed;
          FUN_10173352();
          FUN_10173352();
          FUN_10173352();
          FUN_10173352();
        }
        if ((*param_2 == 0x20) || (*param_2 == 0x10)) {
          if (iVar4 != 0) {
            if (iVar4 == 3) {
              iVar2 = FUN_10173352();
              param_2[3] = iVar2;
              iVar2 = FUN_10173352();
              param_2[4] = iVar2;
              iVar2 = FUN_10173352();
              param_2[5] = iVar2;
              param_2[8] = param_2[8] + 0xc;
              if (param_2[4] != iVar2 || param_2[3] != param_2[4]) {
                return 1;
              }
            }
            goto LAB_101734ed;
          }
          FUN_10173770();
        }
      }
      else {
        if ((iVar2 != 0x6c) && (iVar2 != 0x7c)) goto LAB_101734ed;
        iVar5 = FUN_10173352();
        param_2[3] = iVar5;
        iVar5 = FUN_10173352();
        param_2[4] = iVar5;
        iVar5 = FUN_10173352();
        param_2[5] = iVar5;
        iVar5 = FUN_10173352();
        param_2[6] = iVar5;
        if (iVar4 != 3) {
          FUN_10173770();
        }
        FUN_10173352();
        iVar4 = 0xc;
        do {
          FUN_10173352();
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        if (iVar2 != 0x6c) {
          if (iVar2 != 0x7c) {
            return 0;
          }
          FUN_10173352();
          FUN_10173352();
          FUN_10173352();
          FUN_10173352();
        }
      }
      return 1;
    }
  }
LAB_101734ed:
  FUN_10170e07();
  return 0;
}

