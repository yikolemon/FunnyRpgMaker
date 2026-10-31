/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18017dfa6 */

char FUN_18017dfa6(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  
  do {
    lVar1 = *param_1;
    if (*(longlong *)(lVar1 + 0x10) == 0) {
LAB_18017dfce:
      if (*(ulonglong *)(lVar1 + 200) <= *(ulonglong *)(lVar1 + 0xc0)) {
        return -1;
      }
    }
    else {
      iVar3 = (**(code **)(lVar1 + 0x20))(*(undefined8 *)(lVar1 + 0x28));
      if (iVar3 != 0) {
        if (*(int *)(lVar1 + 0x30) == 0) {
          return -1;
        }
        goto LAB_18017dfce;
      }
    }
    lVar1 = *param_1;
    pcVar4 = *(char **)(lVar1 + 0xc0);
    if (pcVar4 < *(char **)(lVar1 + 200)) {
LAB_18017e00e:
      *(char **)(lVar1 + 0xc0) = pcVar4 + 1;
      cVar2 = *pcVar4;
    }
    else {
      if (*(int *)(lVar1 + 0x30) != 0) {
        FUN_180176673(lVar1);
        pcVar4 = *(char **)(lVar1 + 0xc0);
        goto LAB_18017e00e;
      }
      cVar2 = '\0';
    }
    while (cVar2 == -1) {
      lVar1 = *param_1;
      if (*(longlong *)(lVar1 + 0x10) == 0) {
LAB_18017e03a:
        if (*(ulonglong *)(lVar1 + 200) <= *(ulonglong *)(lVar1 + 0xc0)) {
          return -1;
        }
      }
      else {
        iVar3 = (**(code **)(lVar1 + 0x20))(*(undefined8 *)(lVar1 + 0x28));
        if (iVar3 != 0) {
          if (*(int *)(lVar1 + 0x30) == 0) {
            return -1;
          }
          goto LAB_18017e03a;
        }
      }
      lVar1 = *param_1;
      pcVar4 = *(char **)(lVar1 + 0xc0);
      if (pcVar4 < *(char **)(lVar1 + 200)) {
LAB_18017e072:
        *(char **)(lVar1 + 0xc0) = pcVar4 + 1;
        cVar2 = *pcVar4;
      }
      else {
        if (*(int *)(lVar1 + 0x30) != 0) {
          FUN_180176673(lVar1);
          pcVar4 = *(char **)(lVar1 + 0xc0);
          goto LAB_18017e072;
        }
        cVar2 = '\0';
      }
      if ((byte)(cVar2 - 1U) < 0xfe) {
        return cVar2;
      }
    }
  } while( true );
}

