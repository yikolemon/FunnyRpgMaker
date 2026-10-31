/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1016fcac */

undefined4 __fastcall FUN_1016fcac(int param_1)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char cVar4;
  
  pcVar2 = *(char **)(param_1 + 0xac);
  pcVar3 = *(char **)(param_1 + 0xb0);
  if (pcVar2 < pcVar3) {
    *(char **)(param_1 + 0xac) = pcVar2 + 1;
    cVar4 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  }
  else if (*(int *)(param_1 + 0x20) == 0) {
    cVar4 = '\0';
  }
  else {
    FUN_10170e8c();
    pcVar1 = *(char **)(param_1 + 0xac);
    pcVar3 = *(char **)(param_1 + 0xb0);
    pcVar2 = pcVar1 + 1;
    *(char **)(param_1 + 0xac) = pcVar2;
    cVar4 = *pcVar1;
  }
  if (pcVar3 <= pcVar2) {
    if (*(int *)(param_1 + 0x20) == 0) goto LAB_1016fd29;
    FUN_10170e8c();
    pcVar2 = *(char **)(param_1 + 0xac);
  }
  *(char **)(param_1 + 0xac) = pcVar2 + 1;
  if ((cVar4 == 'P') && (0xfd < (byte)(*pcVar2 - 0x37U))) {
    return 1;
  }
LAB_1016fd29:
  FUN_10170e7b();
  return 0;
}

