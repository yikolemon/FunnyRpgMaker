/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1002732e */

int __thiscall FUN_1002732e(char *param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  char cVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x28) == 0) {
    return 0;
  }
  pcVar3 = param_1;
  if (0xf < *(uint *)(param_1 + 0x14)) {
    pcVar3 = *(char **)param_1;
  }
  pcVar2 = pcVar3 + *(int *)(param_1 + 0x10);
  iVar1 = 0;
  iVar5 = 0;
  while( true ) {
    if (pcVar3 == pcVar2) {
      cVar4 = pcVar2[-1];
    }
    else {
      cVar4 = *pcVar3;
      if ((byte)(cVar4 + 0x81U) < 0x82) {
        return iVar1;
      }
      pcVar3 = pcVar3 + 1;
    }
    iVar5 = iVar5 + cVar4;
    if (param_2 <= iVar5) break;
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}

