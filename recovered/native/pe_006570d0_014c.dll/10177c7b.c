/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10177c7b */

char __fastcall FUN_10177c7b(int *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  
  do {
    iVar1 = *param_1;
    if (*(int *)(iVar1 + 0x10) == 0) {
LAB_10177c9e:
      if (*(uint *)(iVar1 + 0xb0) <= *(uint *)(iVar1 + 0xac)) {
        return -1;
      }
    }
    else {
      iVar3 = (**(code **)(iVar1 + 0x18))(*(undefined4 *)(iVar1 + 0x1c));
      if (iVar3 != 0) {
        if (*(int *)(iVar1 + 0x20) == 0) {
          return -1;
        }
        goto LAB_10177c9e;
      }
    }
    iVar1 = *param_1;
    pcVar4 = *(char **)(iVar1 + 0xac);
    if (pcVar4 < *(char **)(iVar1 + 0xb0)) {
LAB_10177cd7:
      *(char **)(iVar1 + 0xac) = pcVar4 + 1;
      cVar2 = *pcVar4;
    }
    else {
      if (*(int *)(iVar1 + 0x20) != 0) {
        FUN_10170e8c();
        pcVar4 = *(char **)(iVar1 + 0xac);
        goto LAB_10177cd7;
      }
      cVar2 = '\0';
    }
    while (cVar2 == -1) {
      iVar1 = *param_1;
      if (*(int *)(iVar1 + 0x10) == 0) {
LAB_10177d01:
        if (*(uint *)(iVar1 + 0xb0) <= *(uint *)(iVar1 + 0xac)) {
          return -1;
        }
      }
      else {
        iVar3 = (**(code **)(iVar1 + 0x18))(*(undefined4 *)(iVar1 + 0x1c));
        if (iVar3 != 0) {
          if (*(int *)(iVar1 + 0x20) == 0) {
            return -1;
          }
          goto LAB_10177d01;
        }
      }
      iVar1 = *param_1;
      pcVar4 = *(char **)(iVar1 + 0xac);
      if (pcVar4 < *(char **)(iVar1 + 0xb0)) {
LAB_10177d32:
        *(char **)(iVar1 + 0xac) = pcVar4 + 1;
        cVar2 = *pcVar4;
      }
      else {
        if (*(int *)(iVar1 + 0x20) != 0) {
          FUN_10170e8c();
          pcVar4 = *(char **)(iVar1 + 0xac);
          goto LAB_10177d32;
        }
        cVar2 = '\0';
      }
      if ((byte)(cVar2 - 1U) < 0xfe) {
        return cVar2;
      }
    }
  } while( true );
}

