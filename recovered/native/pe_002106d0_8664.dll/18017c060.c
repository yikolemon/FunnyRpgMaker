/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18017c060 */

char FUN_18017c060(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  char cVar3;
  char *pcVar4;
  
  cVar3 = (char)param_1[0x905];
  if (cVar3 == -1) {
    lVar2 = *param_1;
    pcVar4 = *(char **)(lVar2 + 0xc0);
    if (*(char **)(lVar2 + 200) <= pcVar4) {
      if (*(int *)(lVar2 + 0x30) == 0) {
        return -1;
      }
      FUN_180176673(lVar2);
      pcVar4 = *(char **)(lVar2 + 0xc0);
    }
    *(char **)(lVar2 + 0xc0) = pcVar4 + 1;
    cVar3 = -1;
    cVar1 = *pcVar4;
    while (cVar1 == -1) {
      lVar2 = *param_1;
      pcVar4 = *(char **)(lVar2 + 0xc0);
      if (*(char **)(lVar2 + 200) <= pcVar4) {
        if (*(int *)(lVar2 + 0x30) == 0) {
          return '\0';
        }
        FUN_180176673(lVar2);
        pcVar4 = *(char **)(lVar2 + 0xc0);
      }
      *(char **)(lVar2 + 0xc0) = pcVar4 + 1;
      cVar3 = *pcVar4;
      cVar1 = cVar3;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x905) = 0xff;
  }
  return cVar3;
}

