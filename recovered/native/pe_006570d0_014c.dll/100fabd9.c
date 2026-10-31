/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100fabd9 */

int FUN_100fabd9(char *param_1,char *param_2)

{
  size_t sVar1;
  void *pvVar2;
  int iVar3;
  
  if (param_2 == (char *)0x0) {
    sVar1 = _strlen(param_1);
    param_2 = param_1 + sVar1;
  }
  iVar3 = 0;
  if (param_1 < param_2) {
    iVar3 = 0;
    do {
      pvVar2 = _memchr(param_1,10,(int)param_2 - (int)param_1);
      param_1 = (char *)((int)pvVar2 + 1);
      if (pvVar2 == (void *)0x0) {
        param_1 = param_2;
      }
      iVar3 = iVar3 + 1;
    } while (param_1 < param_2);
  }
  return iVar3;
}

