/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140077ef6 */

void FUN_140077ef6(longlong *param_1,longlong *param_2,char *param_3,longlong *param_4)

{
  int iVar1;
  size_t sVar2;
  char *pcVar3;
  longlong lVar4;
  
  lVar4 = DAT_140f2a910;
  if (*param_3 == '%') {
    if (param_3[1] != '.') {
      if ((param_3[1] == 's') && (param_3[2] == '\0')) {
        pcVar3 = "(null)";
        if ((char *)*param_4 != (char *)0x0) {
          pcVar3 = (char *)*param_4;
        }
        *param_1 = (longlong)pcVar3;
        if (param_2 == (longlong *)0x0) {
          return;
        }
        sVar2 = strlen(pcVar3);
        pcVar3 = pcVar3 + sVar2;
        goto LAB_140077f8b;
      }
      goto LAB_140077f61;
    }
    if (((param_3[2] != '*') || (param_3[3] != 's')) || (param_3[4] != '\0')) goto LAB_140077f61;
    iVar1 = (int)*param_4;
    pcVar3 = (char *)param_4[1];
    if (pcVar3 == (char *)0x0) {
      iVar1 = FUN_140077fbc(iVar1,6);
      pcVar3 = "(null)";
    }
    *param_1 = (longlong)pcVar3;
    lVar4 = (longlong)iVar1;
  }
  else {
LAB_140077f61:
    iVar1 = FUN_140077e3b(*(undefined8 *)(DAT_140f2a910 + 0x2ce0),
                          (longlong)*(int *)(DAT_140f2a910 + 0x2cd8));
    lVar4 = *(longlong *)(lVar4 + 0x2ce0);
    *param_1 = lVar4;
    if (param_2 == (longlong *)0x0) {
      return;
    }
    pcVar3 = (char *)(longlong)iVar1;
  }
  pcVar3 = pcVar3 + lVar4;
LAB_140077f8b:
  *param_2 = (longlong)pcVar3;
  return;
}

