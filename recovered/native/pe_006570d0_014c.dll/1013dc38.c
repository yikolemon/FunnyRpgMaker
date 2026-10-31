/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1013dc38 */

void __fastcall FUN_1013dc38(char *param_1,int *param_2)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = (uint)(*param_1 == '-');
  pcVar3 = param_1 + (param_1[uVar2] == '+') + uVar2;
  cVar1 = param_1[(param_1[uVar2] == '+') + uVar2];
  iVar4 = 0;
  if ((byte)(cVar1 - 0x30U) < 10) {
    iVar4 = 0;
    do {
      iVar4 = (uint)(byte)(cVar1 - 0x30) + iVar4 * 10;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 1;
    } while ((byte)(cVar1 - 0x30U) < 10);
  }
  iVar5 = -iVar4;
  if (*param_1 != '-') {
    iVar5 = iVar4;
  }
  *param_2 = iVar5;
  return;
}

