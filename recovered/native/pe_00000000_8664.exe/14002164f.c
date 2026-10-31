/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14002164f */

ulonglong FUN_14002164f(undefined8 *param_1,char *param_2,uint param_3)

{
  char *pcVar1;
  char *pcVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  char *pcVar5;
  char cVar6;
  char *pcVar7;
  
  pcVar1 = (char *)*param_1;
  cVar6 = *pcVar1;
  uVar4 = 0;
  pcVar7 = pcVar1;
  do {
    pcVar2 = pcVar7;
    uVar3 = uVar4;
    pcVar7 = pcVar2 + 1;
    uVar4 = (ulonglong)(((int)cVar6 + (int)uVar3 * 10) - 0x30);
    pcVar5 = param_2;
    if (pcVar7 == param_2) break;
    cVar6 = *pcVar7;
    pcVar5 = pcVar7;
  } while ((byte)(cVar6 - 0x30U) < 10);
  *param_1 = pcVar5;
  if ((9 < (longlong)pcVar5 - (longlong)pcVar1) &&
     (((longlong)pcVar5 - (longlong)pcVar1 != 10 ||
      (((ulonglong)((int)*pcVar2 - 0x30U & 0xfffffffe) + uVar3 * 10 & 0xffffffff80000000) != 0)))) {
    uVar4 = (ulonglong)param_3;
  }
  return uVar4;
}

