/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0045e0ea */

char * __fastcall FUN_0045e0ea(int *param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  
  FUN_0045e19c(param_1);
  pcVar2 = (char *)0x0;
  if (param_1[3] < 2) {
    pcVar2 = (char *)*param_1 + -1;
    iVar3 = 3;
    pcVar4 = (char *)*param_1;
    do {
      if ((char *)param_1[2] <= pcVar4) goto LAB_0045e12c;
      *param_1 = (int)(pcVar4 + 1);
      cVar1 = *pcVar4;
      if (cVar1 == '\n') break;
      if (cVar1 == '\x1a') goto LAB_0045e12c;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\r');
    iVar3 = 2;
LAB_0045e12c:
    param_1[3] = iVar3;
  }
  return pcVar2;
}

