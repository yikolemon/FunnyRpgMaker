/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10206972 */

char * __fastcall FUN_10206972(int *param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  
  FUN_10206a24();
  pcVar2 = (char *)0x0;
  if (param_1[3] < 2) {
    pcVar2 = (char *)*param_1 + -1;
    iVar3 = 3;
    pcVar4 = (char *)*param_1;
    do {
      if ((char *)param_1[2] <= pcVar4) goto LAB_102069b4;
      *param_1 = (int)(pcVar4 + 1);
      cVar1 = *pcVar4;
      if (cVar1 == '\n') break;
      if (cVar1 == '\x1a') goto LAB_102069b4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\r');
    iVar3 = 2;
LAB_102069b4:
    param_1[3] = iVar3;
  }
  return pcVar2;
}

