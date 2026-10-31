/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1002b53c */

uint FUN_1002b53c(undefined4 *param_1,char *param_2,uint param_3)

{
  char *pcVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  char *pcVar6;
  char *pcVar7;
  
  pcVar1 = (char *)*param_1;
  cVar5 = *pcVar1;
  uVar4 = 0;
  pcVar6 = pcVar1;
  do {
    uVar3 = uVar4;
    pcVar6 = pcVar6 + 1;
    uVar4 = ((int)cVar5 + uVar3 * 10) - 0x30;
    pcVar7 = param_2;
    if (pcVar6 == param_2) break;
    cVar5 = *pcVar6;
    pcVar7 = pcVar6;
  } while ((byte)(cVar5 - 0x30U) < 10);
  *param_1 = pcVar7;
  if ((9 < (int)pcVar7 - (int)pcVar1) &&
     (((int)pcVar7 - (int)pcVar1 != 10 ||
      (lVar2 = (ulonglong)uVar3 * 10 + (ulonglong)((int)pcVar7[-1] - 0x30),
      (int)((ulonglong)lVar2 >> 0x20) != 0 || (int)lVar2 < 0)))) {
    uVar4 = param_3;
  }
  return uVar4;
}

