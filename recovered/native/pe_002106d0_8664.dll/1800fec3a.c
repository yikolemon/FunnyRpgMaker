/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800fec3a */

void FUN_1800fec3a(longlong *param_1,longlong *param_2,char *param_3,longlong *param_4)

{
  int iVar1;
  size_t sVar2;
  char *pcVar3;
  longlong lVar4;
  
  lVar4 = DAT_180419160;
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
        goto LAB_1800feccf;
      }
      goto LAB_1800feca5;
    }
    if (((param_3[2] != '*') || (param_3[3] != 's')) || (param_3[4] != '\0')) goto LAB_1800feca5;
    iVar1 = (int)*param_4;
    pcVar3 = (char *)param_4[1];
    if (pcVar3 == (char *)0x0) {
      iVar1 = FUN_1800fed00(iVar1,6);
      pcVar3 = "(null)";
    }
    *param_1 = (longlong)pcVar3;
    lVar4 = (longlong)iVar1;
  }
  else {
LAB_1800feca5:
    iVar1 = FUN_1800feb7f(*(undefined8 *)(DAT_180419160 + 0x2ce0),
                          (longlong)*(int *)(DAT_180419160 + 0x2cd8));
    lVar4 = *(longlong *)(lVar4 + 0x2ce0);
    *param_1 = lVar4;
    if (param_2 == (longlong *)0x0) {
      return;
    }
    pcVar3 = (char *)(longlong)iVar1;
  }
  pcVar3 = pcVar3 + lVar4;
LAB_1800feccf:
  *param_2 = (longlong)pcVar3;
  return;
}

