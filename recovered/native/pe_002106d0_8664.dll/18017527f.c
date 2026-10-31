/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18017527f */

undefined8 FUN_18017527f(longlong param_1)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char cVar4;
  
  pcVar2 = *(char **)(param_1 + 0xc0);
  pcVar3 = *(char **)(param_1 + 200);
  if (pcVar2 < pcVar3) {
    *(char **)(param_1 + 0xc0) = pcVar2 + 1;
    cVar4 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    cVar4 = '\0';
  }
  else {
    FUN_180176673(param_1);
    pcVar1 = *(char **)(param_1 + 0xc0);
    pcVar3 = *(char **)(param_1 + 200);
    pcVar2 = pcVar1 + 1;
    *(char **)(param_1 + 0xc0) = pcVar2;
    cVar4 = *pcVar1;
  }
  if (pcVar3 <= pcVar2) {
    if (*(int *)(param_1 + 0x30) == 0) goto LAB_180175316;
    FUN_180176673(param_1);
    pcVar2 = *(char **)(param_1 + 0xc0);
  }
  *(char **)(param_1 + 0xc0) = pcVar2 + 1;
  if ((cVar4 == 'P') && (0xfd < (byte)(*pcVar2 - 0x37U))) {
    return 1;
  }
LAB_180175316:
  FUN_180176664(param_1);
  return 0;
}

