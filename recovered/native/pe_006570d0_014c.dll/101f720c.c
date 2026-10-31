/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101f720c */

void __fastcall FUN_101f720c(char *param_1,char *param_2)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  size_t sVar4;
  size_t sVar5;
  char *pcVar6;
  
  sVar4 = _strlen(param_1);
  sVar5 = _strlen(param_2);
  pcVar6 = param_2 + sVar5;
  while( true ) {
    if (pcVar6 <= param_2) {
      pcVar6 = param_1 + sVar4;
      param_1[sVar4] = '\0';
      if (pcVar6 <= param_1) {
        return;
      }
      while( true ) {
        uVar2 = (byte)pcVar6[-1] - 0x20;
        if (((0xd < uVar2) || ((0x2801U >> (uVar2 & 0x1f) & 1) == 0)) && ((byte)pcVar6[-1] != 0x5f))
        break;
        pcVar6 = pcVar6 + -1;
        *pcVar6 = '\0';
        if (pcVar6 <= param_1) {
          return;
        }
      }
      return;
    }
    if (sVar4 == 0) break;
    pcVar1 = pcVar6 + -1;
    pcVar6 = pcVar6 + -1;
    iVar3 = sVar4 - 1;
    sVar4 = sVar4 - 1;
    if (*pcVar1 != param_1[iVar3]) {
      return;
    }
  }
  return;
}

