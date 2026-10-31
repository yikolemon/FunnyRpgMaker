/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101790cf */

int __fastcall FUN_101790cf(int param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  bool bVar5;
  
  pcVar2 = *(char **)(param_1 + 0xac);
  if (*(char **)(param_1 + 0xb0) <= pcVar2) {
    if (*(int *)(param_1 + 0x20) == 0) {
      cVar3 = '\0';
      goto LAB_10179109;
    }
    FUN_10170e8c();
    pcVar2 = *(char **)(param_1 + 0xac);
  }
  *(char **)(param_1 + 0xac) = pcVar2 + 1;
  cVar3 = *pcVar2;
  pcVar2 = pcVar2 + 1;
LAB_10179109:
  iVar4 = 0;
  do {
    if (*(int *)(param_1 + 0x10) == 0) {
LAB_1017912e:
      bVar5 = pcVar2 < *(char **)(param_1 + 0xb0);
    }
    else {
      iVar1 = (**(code **)(param_1 + 0x18))(*(undefined4 *)(param_1 + 0x1c));
      if (iVar1 != 0) {
        if (*(int *)(param_1 + 0x20) != 0) {
          pcVar2 = *(char **)(param_1 + 0xac);
          goto LAB_1017912e;
        }
        goto LAB_101791e9;
      }
      bVar5 = true;
    }
    if ((cVar3 == '\n') || (!bVar5)) goto LAB_101791e9;
    *(char *)(param_2 + iVar4) = cVar3;
    if (iVar4 == 0x3fe) break;
    pcVar2 = *(char **)(param_1 + 0xac);
    if (pcVar2 < *(char **)(param_1 + 0xb0)) {
LAB_10179178:
      *(char **)(param_1 + 0xac) = pcVar2 + 1;
      cVar3 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    }
    else {
      if (*(int *)(param_1 + 0x20) != 0) {
        FUN_10170e8c();
        pcVar2 = *(char **)(param_1 + 0xac);
        goto LAB_10179178;
      }
      cVar3 = '\0';
    }
    iVar4 = iVar4 + 1;
  } while( true );
LAB_101791af:
  if (*(int *)(param_1 + 0x10) == 0) {
LAB_101791c8:
    pcVar2 = *(char **)(param_1 + 0xac);
    if (*(char **)(param_1 + 0xb0) <= pcVar2) goto LAB_101791e4;
  }
  else {
    iVar4 = (**(code **)(param_1 + 0x18))(*(undefined4 *)(param_1 + 0x1c));
    if (iVar4 != 0) {
      if (*(int *)(param_1 + 0x20) != 0) goto LAB_101791c8;
      goto LAB_101791e4;
    }
    pcVar2 = *(char **)(param_1 + 0xac);
    if (*(char **)(param_1 + 0xb0) <= pcVar2) {
      if (*(int *)(param_1 + 0x20) == 0) goto LAB_101791af;
      FUN_10170e8c();
      pcVar2 = *(char **)(param_1 + 0xac);
    }
  }
  *(char **)(param_1 + 0xac) = pcVar2 + 1;
  if (*pcVar2 == '\n') {
LAB_101791e4:
    iVar4 = 0x3ff;
LAB_101791e9:
    *(undefined1 *)(param_2 + iVar4) = 0;
    return param_2;
  }
  goto LAB_101791af;
}

