/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10178283 */

void __fastcall FUN_10178283(int *param_1)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  byte *pbVar4;
  char *pcVar5;
  
  do {
    if (param_1[0x11f2] == 0) {
      iVar1 = *param_1;
      pbVar4 = *(byte **)(iVar1 + 0xac);
      if (*(byte **)(iVar1 + 0xb0) <= pbVar4) {
        if (*(int *)(iVar1 + 0x20) == 0) goto LAB_10178291;
        FUN_10170e8c();
        pbVar4 = *(byte **)(iVar1 + 0xac);
      }
      *(byte **)(iVar1 + 0xac) = pbVar4 + 1;
      bVar3 = *pbVar4;
      if (bVar3 == 0xff) {
        iVar1 = *param_1;
        pcVar5 = *(char **)(iVar1 + 0xac);
        if (*(char **)(iVar1 + 0xb0) <= pcVar5) {
          if (*(int *)(iVar1 + 0x20) == 0) {
            cVar2 = '\0';
            goto LAB_101782fe;
          }
          FUN_10170e8c();
          pcVar5 = *(char **)(iVar1 + 0xac);
        }
        *(char **)(iVar1 + 0xac) = pcVar5 + 1;
        do {
          cVar2 = *pcVar5;
LAB_101782fe:
          do {
            if (cVar2 != -1) {
              if (cVar2 != '\0') {
                *(char *)(param_1 + 0x11f1) = cVar2;
                param_1[0x11f2] = 1;
                return;
              }
              bVar3 = 0xff;
              goto LAB_10178338;
            }
            iVar1 = *param_1;
            pcVar5 = *(char **)(iVar1 + 0xac);
            if (pcVar5 < *(char **)(iVar1 + 0xb0)) goto LAB_10178369;
            cVar2 = '\0';
          } while (*(int *)(iVar1 + 0x20) == 0);
          FUN_10170e8c();
          pcVar5 = *(char **)(iVar1 + 0xac);
LAB_10178369:
          *(char **)(iVar1 + 0xac) = pcVar5 + 1;
        } while( true );
      }
    }
    else {
LAB_10178291:
      bVar3 = 0;
    }
LAB_10178338:
    iVar1 = param_1[0x11f0];
    param_1[0x11ef] = param_1[0x11ef] | (uint)bVar3 << (0x18U - (char)iVar1 & 0x1f);
    param_1[0x11f0] = iVar1 + 8;
    if (0x10 < iVar1) {
      return;
    }
  } while( true );
}

