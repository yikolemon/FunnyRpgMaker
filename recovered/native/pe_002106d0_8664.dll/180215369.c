/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180215369 */

char * FUN_180215369(longlong *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  char *pcVar4;
  
  FUN_180215445();
  if ((int)param_1[3] < 2) {
    pcVar2 = (char *)*param_1 + -1;
    uVar3 = 3;
    pcVar4 = (char *)*param_1;
    do {
      if ((char *)param_1[2] <= pcVar4) goto LAB_1802153ba;
      *param_1 = (longlong)(pcVar4 + 1);
      cVar1 = *pcVar4;
      if (cVar1 == '\n') break;
      if (cVar1 == '\x1a') goto LAB_1802153ba;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\r');
    uVar3 = 2;
LAB_1802153ba:
    *(undefined4 *)(param_1 + 3) = uVar3;
  }
  else {
    pcVar2 = (char *)0x0;
  }
  return pcVar2;
}

