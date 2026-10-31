/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10175fbb */

char __fastcall FUN_10175fbb(int *param_1)

{
  char cVar1;
  int iVar2;
  char cVar3;
  char *pcVar4;
  
  cVar3 = (char)param_1[0x11f1];
  if (cVar3 == -1) {
    iVar2 = *param_1;
    pcVar4 = *(char **)(iVar2 + 0xac);
    if (*(char **)(iVar2 + 0xb0) <= pcVar4) {
      if (*(int *)(iVar2 + 0x20) == 0) {
        return -1;
      }
      FUN_10170e8c();
      pcVar4 = *(char **)(iVar2 + 0xac);
    }
    *(char **)(iVar2 + 0xac) = pcVar4 + 1;
    cVar3 = -1;
    cVar1 = *pcVar4;
    while (cVar1 == -1) {
      iVar2 = *param_1;
      pcVar4 = *(char **)(iVar2 + 0xac);
      if (*(char **)(iVar2 + 0xb0) <= pcVar4) {
        if (*(int *)(iVar2 + 0x20) == 0) {
          return '\0';
        }
        FUN_10170e8c();
        pcVar4 = *(char **)(iVar2 + 0xac);
      }
      *(char **)(iVar2 + 0xac) = pcVar4 + 1;
      cVar3 = *pcVar4;
      cVar1 = cVar3;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x11f1) = 0xff;
  }
  return cVar3;
}

