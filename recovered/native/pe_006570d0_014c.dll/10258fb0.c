/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10258fb0 */

void FUN_10258fb0(int *param_1,int *param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  
  if (((char)param_1[1] != '\0') && (pcVar4 = (char *)*param_1, pcVar4 != (char *)0x0)) {
    pcVar1 = pcVar4 + 1;
    do {
      cVar2 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar2 != '\0');
    iVar3 = FUN_1026faa0(pcVar4 + (1 - (int)pcVar1));
    if (iVar3 != 0) {
      FUN_102733f0(iVar3,pcVar4 + (1 - (int)pcVar1),*param_1);
      *param_2 = iVar3;
      *(undefined1 *)(param_2 + 1) = 1;
    }
    thunk_FUN_10274120(0);
    return;
  }
  *param_2 = *param_1;
  *(undefined1 *)(param_2 + 1) = 0;
  return;
}

