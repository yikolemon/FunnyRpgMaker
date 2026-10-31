/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400bae52 */

void FUN_1400bae52(char *param_1,int *param_2)

{
  ulonglong uVar1;
  char *pcVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  
  uVar1 = (ulonglong)(*param_1 == '-');
  pcVar2 = param_1 + (param_1[uVar1] == '+') + uVar1;
  cVar4 = param_1[(param_1[uVar1] == '+') + uVar1];
  iVar3 = 0;
  if ((byte)(cVar4 - 0x30U) < 10) {
    iVar3 = 0;
    do {
      iVar3 = (uint)(byte)(cVar4 - 0x30) + iVar3 * 10;
      cVar4 = pcVar2[1];
      pcVar2 = pcVar2 + 1;
    } while ((byte)(cVar4 - 0x30U) < 10);
  }
  iVar5 = -iVar3;
  if (*param_1 != '-') {
    iVar5 = iVar3;
  }
  *param_2 = iVar5;
  return;
}

