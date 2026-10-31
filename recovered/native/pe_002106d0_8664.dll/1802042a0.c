/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802042a0 */

void FUN_1802042a0(char *param_1,char *param_2)

{
  char *pcVar1;
  longlong lVar2;
  size_t sVar3;
  size_t sVar4;
  char *pcVar5;
  
  sVar3 = strlen(param_1);
  sVar4 = strlen(param_2);
  pcVar5 = param_2 + sVar4;
  while( true ) {
    if (pcVar5 <= param_2) {
      pcVar5 = param_1 + sVar3;
      param_1[sVar3] = '\0';
      if (pcVar5 <= param_1) {
        return;
      }
      while( true ) {
        if (0x3f < (byte)pcVar5[-1] - 0x20) {
          return;
        }
        if ((0x8000000000002801U >> ((ulonglong)((byte)pcVar5[-1] - 0x20) & 0x3f) & 1) == 0) break;
        pcVar5 = pcVar5 + -1;
        *pcVar5 = '\0';
        if (pcVar5 <= param_1) {
          return;
        }
      }
      return;
    }
    if (sVar3 == 0) break;
    pcVar1 = pcVar5 + -1;
    pcVar5 = pcVar5 + -1;
    lVar2 = sVar3 - 1;
    sVar3 = sVar3 - 1;
    if (*pcVar1 != param_1[lVar2]) {
      return;
    }
  }
  return;
}

