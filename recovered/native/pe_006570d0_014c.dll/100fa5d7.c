/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100fa5d7 */

void FUN_100fa5d7(size_t *param_1,int *param_2,char *param_3,size_t *param_4)

{
  int iVar1;
  size_t sVar2;
  int iVar3;
  char *pcVar4;
  
  iVar1 = DAT_1039d74c;
  if (*param_3 == '%') {
    if (param_3[1] == '.') {
      if (((param_3[2] != '*') || (param_3[3] != 's')) || (param_3[4] != '\0')) goto LAB_100fa638;
      sVar2 = *param_4;
      pcVar4 = (char *)param_4[1];
      if (pcVar4 == (char *)0x0) {
        pcVar4 = "(null)";
        sVar2 = FUN_100fa683(sVar2,6);
      }
      *param_1 = (size_t)pcVar4;
    }
    else {
      if ((param_3[1] != 's') || (param_3[2] != '\0')) goto LAB_100fa638;
      pcVar4 = "(null)";
      if ((char *)*param_4 != (char *)0x0) {
        pcVar4 = (char *)*param_4;
      }
      *param_1 = (size_t)pcVar4;
      if (param_2 == (int *)0x0) {
        return;
      }
      sVar2 = _strlen(pcVar4);
    }
    pcVar4 = pcVar4 + sVar2;
  }
  else {
LAB_100fa638:
    iVar3 = FUN_100fa534(*(undefined4 *)(DAT_1039d74c + 0x29a8),
                         *(undefined4 *)(DAT_1039d74c + 0x29a0),param_3,param_4);
    sVar2 = *(size_t *)(iVar1 + 0x29a8);
    *param_1 = sVar2;
    if (param_2 == (int *)0x0) {
      return;
    }
    pcVar4 = (char *)(sVar2 + iVar3);
  }
  *param_2 = (int)pcVar4;
  return;
}

