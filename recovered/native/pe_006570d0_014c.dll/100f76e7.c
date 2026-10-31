/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f76e7 */

char * FUN_100f76e7(char *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  char cVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  
  if (param_1 == (char *)0x0) {
    pcVar6 = (char *)0x0;
  }
  else {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = 0;
    }
    cVar3 = *param_1;
    if (cVar3 == -1) {
      if (param_1[1] == '%') {
        puVar1 = *(undefined4 **)(param_1 + 2);
        cVar3 = FUN_100f75df(param_1,puVar1);
        if (cVar3 != '\0') {
          param_1 = (char *)*puVar1;
        }
      }
      cVar3 = *param_1;
    }
    pcVar6 = param_1;
    if (cVar3 == -0x15) {
      cVar3 = param_1[1];
      pcVar5 = param_1 + cVar3 + 2;
      pcVar6 = pcVar5;
      if (*pcVar5 == -0x17) {
        iVar2 = *(int *)(param_1 + cVar3 + 3);
        pcVar4 = pcVar5 + iVar2 + 5;
        pcVar6 = pcVar4;
        if (((*pcVar4 == -1) && (pcVar5[iVar2 + 6] == '%')) &&
           (pcVar6 = pcVar5, *(char **)(pcVar5 + iVar2 + 7) != pcVar5 + iVar2 + 0x1005)) {
          pcVar6 = pcVar4;
        }
      }
      else if ((*pcVar5 == -1) && (param_1[cVar3 + 3] == '%')) {
        puVar1 = *(undefined4 **)(param_1 + cVar3 + 4);
        cVar3 = FUN_100f75df(pcVar5,puVar1);
        if (cVar3 != '\0') {
          pcVar6 = (char *)*puVar1;
        }
      }
    }
  }
  return pcVar6;
}

