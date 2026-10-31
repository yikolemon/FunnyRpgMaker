/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10118683 */

void FUN_10118683(char *param_1,size_t param_2)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  int iVar10;
  
  iVar3 = DAT_1039d74c;
  if (param_2 == 0) {
    param_2 = _strlen(param_1);
  }
  iVar7 = param_2 + 1;
  iVar10 = *(int *)(iVar3 + 0x26d4);
  if ((int)param_2 < iVar10) {
    pcVar4 = *(char **)(iVar3 + 0x26d8);
  }
  else {
    if (iVar10 == 0) {
      iVar10 = 8;
    }
    else {
      iVar10 = iVar10 / 2 + iVar10;
    }
    if (iVar10 <= iVar7) {
      iVar10 = iVar7;
    }
    pcVar4 = (char *)FUN_100fa1fa(iVar10);
    if (*(int *)(iVar3 + 0x26d8) != 0) {
      FUN_1025b2d0(pcVar4,*(int *)(iVar3 + 0x26d8),*(undefined4 *)(iVar3 + 0x26d0));
      FUN_100fa2cb(*(undefined4 *)(iVar3 + 0x26d8));
    }
    *(char **)(iVar3 + 0x26d8) = pcVar4;
    *(int *)(iVar3 + 0x26d4) = iVar10;
  }
  *(int *)(iVar3 + 0x26d0) = iVar7;
  FUN_1025b2d0(pcVar4,param_1,param_2);
  pcVar4[param_2] = '\0';
  if (*(int *)(iVar3 + 0x26dc) != 0) {
    iVar7 = *(int *)(iVar3 + 0x26e4);
    iVar10 = *(int *)(iVar3 + 0x26dc) * 0x24;
    do {
      if (*(code **)(iVar7 + 0xc) != (code *)0x0) {
        (**(code **)(iVar7 + 0xc))(iVar3,iVar7);
      }
      iVar7 = iVar7 + 0x24;
      iVar10 = iVar10 + -0x24;
    } while (iVar10 != 0);
  }
  if (param_2 != 0) {
    pcVar1 = pcVar4 + param_2;
    iVar10 = 0;
    iVar7 = 0;
    pcVar9 = pcVar4;
    do {
      for (; (*pcVar9 == '\n' || (pcVar8 = pcVar9, pcVar2 = pcVar9, *pcVar9 == '\r'));
          pcVar9 = pcVar9 + 1) {
      }
      for (; ((pcVar2 < pcVar1 && (pcVar8 = pcVar2, *pcVar2 != '\n')) && (*pcVar2 != '\r'));
          pcVar2 = pcVar2 + 1) {
        pcVar8 = pcVar1;
      }
      *pcVar8 = '\0';
      if (*pcVar9 != ';') {
        if (((*pcVar9 == '[') && (pcVar9 < pcVar8)) && (pcVar8[-1] == ']')) {
          pcVar8[-1] = '\0';
          puVar5 = (undefined1 *)FUN_100fa313(pcVar9 + 1,pcVar8 + -1,0x5d);
          if ((puVar5 != (undefined1 *)0x0) &&
             (iVar6 = FUN_100fa313(puVar5 + 1,pcVar8 + -1,0x5b), iVar6 != 0)) {
            *puVar5 = 0;
            iVar7 = FUN_10118575(pcVar9 + 1,iVar6);
            if (iVar7 == 0) {
              iVar7 = 0;
              iVar10 = 0;
            }
            else {
              iVar10 = (**(code **)(iVar7 + 0x10))(iVar3,iVar7,iVar6 + 1);
            }
          }
        }
        else if ((iVar7 != 0) && (iVar10 != 0)) {
          (**(code **)(iVar7 + 0x14))(iVar3,iVar7,iVar10,pcVar9);
        }
      }
      pcVar9 = pcVar8 + 1;
    } while (pcVar9 < pcVar1);
  }
  *(undefined1 *)(iVar3 + 0x26c8) = 1;
  FUN_1025b2d0(pcVar4,param_1,param_2);
  if (*(int *)(iVar3 + 0x26dc) != 0) {
    iVar7 = *(int *)(iVar3 + 0x26e4);
    iVar10 = *(int *)(iVar3 + 0x26dc) * 0x24;
    do {
      if (*(code **)(iVar7 + 0x18) != (code *)0x0) {
        (**(code **)(iVar7 + 0x18))(iVar3,iVar7);
      }
      iVar7 = iVar7 + 0x24;
      iVar10 = iVar10 + -0x24;
    } while (iVar10 != 0);
  }
  return;
}

