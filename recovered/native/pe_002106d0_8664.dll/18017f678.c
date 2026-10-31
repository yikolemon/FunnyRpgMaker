/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18017f678 */

longlong FUN_18017f678(longlong param_1,longlong param_2)

{
  int iVar1;
  char *pcVar2;
  longlong lVar3;
  char cVar4;
  bool bVar5;
  
  pcVar2 = *(char **)(param_1 + 0xc0);
  if (*(char **)(param_1 + 200) <= pcVar2) {
    if (*(int *)(param_1 + 0x30) == 0) {
      cVar4 = '\0';
      goto LAB_18017f6c0;
    }
    FUN_180176673(param_1);
    pcVar2 = *(char **)(param_1 + 0xc0);
  }
  *(char **)(param_1 + 0xc0) = pcVar2 + 1;
  cVar4 = *pcVar2;
  pcVar2 = pcVar2 + 1;
LAB_18017f6c0:
  lVar3 = 0;
  do {
    if (*(longlong *)(param_1 + 0x10) == 0) {
LAB_18017f6e5:
      bVar5 = pcVar2 < *(char **)(param_1 + 200);
    }
    else {
      iVar1 = (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x28));
      if (iVar1 != 0) {
        if (*(int *)(param_1 + 0x30) != 0) {
          pcVar2 = *(char **)(param_1 + 0xc0);
          goto LAB_18017f6e5;
        }
        goto LAB_18017f7b8;
      }
      bVar5 = true;
    }
    if ((cVar4 == '\n') || (!bVar5)) goto LAB_18017f7b8;
    *(char *)(param_2 + lVar3) = cVar4;
    if (lVar3 == 0x3fe) break;
    pcVar2 = *(char **)(param_1 + 0xc0);
    if (pcVar2 < *(char **)(param_1 + 200)) {
LAB_18017f737:
      *(char **)(param_1 + 0xc0) = pcVar2 + 1;
      cVar4 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    }
    else {
      if (*(int *)(param_1 + 0x30) != 0) {
        FUN_180176673(param_1);
        pcVar2 = *(char **)(param_1 + 0xc0);
        goto LAB_18017f737;
      }
      cVar4 = '\0';
    }
    lVar3 = lVar3 + 1;
  } while( true );
LAB_18017f77b:
  if (*(longlong *)(param_1 + 0x10) == 0) {
LAB_18017f793:
    pcVar2 = *(char **)(param_1 + 0xc0);
    if (*(char **)(param_1 + 200) <= pcVar2) goto LAB_18017f7b3;
  }
  else {
    iVar1 = (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x28));
    if (iVar1 != 0) {
      if (*(int *)(param_1 + 0x30) != 0) goto LAB_18017f793;
      goto LAB_18017f7b3;
    }
    pcVar2 = *(char **)(param_1 + 0xc0);
    if (*(char **)(param_1 + 200) <= pcVar2) {
      if (*(int *)(param_1 + 0x30) == 0) goto LAB_18017f77b;
      FUN_180176673(param_1);
      pcVar2 = *(char **)(param_1 + 0xc0);
    }
  }
  *(char **)(param_1 + 0xc0) = pcVar2 + 1;
  if (*pcVar2 == '\n') {
LAB_18017f7b3:
    lVar3 = 0x3ff;
LAB_18017f7b8:
    *(undefined1 *)(param_2 + lVar3) = 0;
    return param_2;
  }
  goto LAB_18017f77b;
}

