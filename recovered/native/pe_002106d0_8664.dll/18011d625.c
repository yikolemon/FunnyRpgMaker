/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18011d625 */

void FUN_18011d625(char *param_1,size_t param_2)

{
  char *pcVar1;
  char cVar2;
  longlong lVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  undefined1 *puVar7;
  longlong lVar8;
  int iVar9;
  char *pcVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  
  lVar3 = DAT_180419160;
  if (param_2 == 0) {
    param_2 = strlen(param_1);
  }
  iVar11 = (int)param_2 + 1;
  iVar9 = *(int *)(lVar3 + 0x297c);
  if ((int)param_2 < iVar9) {
    pcVar4 = *(char **)(lVar3 + 0x2980);
  }
  else {
    if (iVar9 == 0) {
      iVar9 = 8;
    }
    else {
      iVar9 = iVar9 / 2 + iVar9;
    }
    if (iVar9 <= iVar11) {
      iVar9 = iVar11;
    }
    pcVar4 = (char *)FUN_1800fe7f8((longlong)iVar9);
    if (*(longlong *)(lVar3 + 0x2980) != 0) {
      FUN_1802a82f0(pcVar4,*(longlong *)(lVar3 + 0x2980),(longlong)*(int *)(lVar3 + 0x2978));
      FUN_1800fe8d4(*(undefined8 *)(lVar3 + 0x2980));
    }
    *(char **)(lVar3 + 0x2980) = pcVar4;
    *(int *)(lVar3 + 0x297c) = iVar9;
  }
  *(int *)(lVar3 + 0x2978) = iVar11;
  FUN_1802a82f0(pcVar4,param_1,param_2);
  pcVar4[param_2] = '\0';
  if ((longlong)*(int *)(lVar3 + 0x2988) != 0) {
    lVar13 = *(longlong *)(lVar3 + 0x2990);
    lVar12 = (longlong)*(int *)(lVar3 + 0x2988) * 0x48;
    do {
      if (*(code **)(lVar13 + 0x18) != (code *)0x0) {
        (**(code **)(lVar13 + 0x18))(lVar3,lVar13);
      }
      lVar13 = lVar13 + 0x48;
      lVar12 = lVar12 + -0x48;
    } while (lVar12 != 0);
  }
  if (param_2 != 0) {
    pcVar1 = pcVar4 + param_2;
    lVar12 = 0;
    lVar13 = 0;
    pcVar10 = pcVar4;
    pcVar5 = pcVar4;
    do {
      while( true ) {
        cVar2 = *pcVar10;
        if ((cVar2 != '\n') && (cVar2 != '\r')) break;
        pcVar10 = pcVar10 + 1;
        pcVar5 = pcVar5 + 1;
      }
      pcVar5 = pcVar5 + 1;
      pcVar6 = pcVar10;
      if (pcVar10 < pcVar1) {
        while ((cVar2 != '\n' && (cVar2 != '\r'))) {
          pcVar6 = pcVar5;
          if (pcVar1 <= pcVar5) goto LAB_18011d786;
          cVar2 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        }
        pcVar6 = pcVar5 + -1;
      }
LAB_18011d786:
      *pcVar6 = '\0';
      if (*pcVar10 != ';') {
        if (((*pcVar10 == '[') && (pcVar10 < pcVar6)) && (pcVar6[-1] == ']')) {
          pcVar5 = pcVar6 + -1;
          *pcVar5 = '\0';
          puVar7 = (undefined1 *)FUN_1800fe91c(pcVar10 + 1,pcVar5,0x5d);
          if (puVar7 != (undefined1 *)0x0) {
            lVar8 = FUN_1800fe91c(puVar7 + 1,pcVar5,0x5b);
            if (lVar8 != 0) {
              *puVar7 = 0;
              lVar13 = FUN_18011d4f0(pcVar10 + 1);
              if (lVar13 == 0) {
                lVar13 = 0;
                lVar12 = 0;
              }
              else {
                lVar12 = (**(code **)(lVar13 + 0x20))(lVar3,lVar13,lVar8 + 1);
              }
            }
          }
        }
        else if ((lVar13 != 0) && (lVar12 != 0)) {
          (**(code **)(lVar13 + 0x28))(lVar3,lVar13,lVar12,pcVar10);
        }
      }
      pcVar10 = pcVar6 + 1;
      pcVar5 = pcVar10;
    } while (pcVar10 < pcVar1);
  }
  *(undefined1 *)(lVar3 + 0x2970) = 1;
  FUN_1802a82f0(pcVar4,param_1,param_2);
  if ((longlong)*(int *)(lVar3 + 0x2988) != 0) {
    lVar13 = *(longlong *)(lVar3 + 0x2990);
    lVar12 = (longlong)*(int *)(lVar3 + 0x2988) * 0x48;
    do {
      if (*(code **)(lVar13 + 0x30) != (code *)0x0) {
        (**(code **)(lVar13 + 0x30))(lVar3,lVar13);
      }
      lVar13 = lVar13 + 0x48;
      lVar12 = lVar12 + -0x48;
    } while (lVar12 != 0);
  }
  return;
}

