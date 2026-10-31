/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800fba6b */

char * FUN_1800fba6b(char *param_1,undefined8 *param_2)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  
  if (param_1 == (char *)0x0) {
    pcVar5 = (char *)0x0;
  }
  else {
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = 0;
    }
    cVar2 = *param_1;
    if (cVar2 == -1) {
      if (param_1[1] == '%') {
        iVar1 = *(int *)(param_1 + 2);
        cVar2 = FUN_1800fb986(param_1,param_1 + (longlong)iVar1 + 6);
        if (cVar2 != '\0') {
          param_1 = *(char **)(param_1 + (longlong)iVar1 + 6);
        }
      }
      cVar2 = *param_1;
    }
    pcVar5 = param_1;
    if (cVar2 == -0x15) {
      cVar2 = param_1[1];
      pcVar4 = param_1 + (longlong)cVar2 + 2;
      pcVar5 = pcVar4;
      if (*pcVar4 == -0x17) {
        iVar1 = *(int *)(param_1 + (longlong)cVar2 + 3);
        pcVar3 = pcVar4 + (longlong)iVar1 + 5;
        pcVar5 = pcVar3;
        if (((*pcVar3 == -1) && (pcVar4[(longlong)iVar1 + 6] == '%')) &&
           (pcVar5 = pcVar4, *(int *)(pcVar4 + (longlong)iVar1 + 7) != 0xffa)) {
          pcVar5 = pcVar3;
        }
      }
      else if ((*pcVar4 == -1) && (param_1[(longlong)cVar2 + 3] == '%')) {
        iVar1 = *(int *)(param_1 + (longlong)cVar2 + 4);
        cVar2 = FUN_1800fb986(pcVar4,pcVar4 + (longlong)iVar1 + 6);
        if (cVar2 != '\0') {
          pcVar5 = *(char **)(pcVar4 + (longlong)iVar1 + 6);
        }
      }
    }
  }
  return pcVar5;
}

