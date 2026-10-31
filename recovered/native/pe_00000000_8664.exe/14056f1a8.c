/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14056f1a8 */

/* WARNING: Control flow encountered bad instruction data */

void switchD_1404b97eb::caseD_0(undefined8 param_1,char param_2)

{
  char cVar1;
  uint in_EAX;
  uint uVar2;
  char *pcVar3;
  
  uVar2 = in_EAX ^ 0x35dd8000;
  pcVar3 = (char *)((longlong)(ulonglong)uVar2 + 2);
  *pcVar3 = *pcVar3 + (char)(uVar2 >> 8);
  cVar1 = DAT_2b02e0002b02;
  pcVar3 = (char *)(ulonglong)
                   CONCAT31((int3)(uVar2 - *(int *)(ulonglong)uVar2 >> 8),DAT_2b02e0002b02);
  *pcVar3 = *pcVar3 + DAT_2b02e0002b02;
  *pcVar3 = *pcVar3 + cVar1;
  *pcVar3 = *pcVar3 + cVar1;
  *pcVar3 = *pcVar3 + cVar1;
  *pcVar3 = *pcVar3 + cVar1;
  *pcVar3 = *pcVar3 + cVar1;
  *pcVar3 = *pcVar3 + cVar1;
  *pcVar3 = *pcVar3 + cVar1;
  *pcVar3 = *pcVar3 + cVar1;
  *pcVar3 = *pcVar3 + cVar1;
  *pcVar3 = *pcVar3 + cVar1;
  *pcVar3 = *pcVar3 + cVar1;
  *pcVar3 = *pcVar3 + cVar1;
  pcVar3[0x4004171] = pcVar3[0x4004171] + param_2;
  *pcVar3 = *pcVar3 + cVar1;
  *pcVar3 = *pcVar3 + cVar1;
  *pcVar3 = *pcVar3 + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

