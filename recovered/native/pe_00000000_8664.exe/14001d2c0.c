/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14001d2c0 */

int FUN_14001d2c0(char *param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  char cVar5;
  
  if (*(longlong *)(param_1 + 0x30) == 0) {
    return 0;
  }
  pcVar3 = param_1;
  if (0xf < *(ulonglong *)(param_1 + 0x18)) {
    pcVar3 = *(char **)param_1;
  }
  pcVar2 = pcVar3 + *(longlong *)(param_1 + 0x10);
  iVar1 = 0;
  iVar4 = 0;
  while( true ) {
    if (pcVar3 == pcVar2) {
      cVar5 = pcVar2[-1];
    }
    else {
      cVar5 = *pcVar3;
      if ((byte)(cVar5 + 0x81U) < 0x82) {
        return iVar1;
      }
      pcVar3 = pcVar3 + 1;
    }
    iVar4 = iVar4 + cVar5;
    if (param_2 <= iVar4) break;
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}

