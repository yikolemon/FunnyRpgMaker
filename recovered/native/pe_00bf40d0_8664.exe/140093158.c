/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140093158 */

void FUN_140093158(longlong param_1,uint param_2,byte param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  char *pcVar3;
  char *pcVar4;
  char cVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x458);
  if (lVar2 == 0) {
    uVar1 = 0x200;
    lVar2 = param_1 + 0x50;
  }
  else {
    uVar1 = *(ulonglong *)(param_1 + 0x450) >> 1;
  }
  pcVar3 = (char *)(lVar2 + -1 + uVar1);
  *(char **)(param_1 + 0x40) = pcVar3;
  pcVar4 = pcVar3;
  while ((0 < *(int *)(param_1 + 0x30) || (param_2 != 0))) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
    cVar5 = (char)param_2 + (char)((ulonglong)param_2 / 10) * -10 + '0';
    param_2 = (uint)((ulonglong)param_2 / 10);
    if ('9' < cVar5) {
      cVar5 = (param_3 ^ 1) * ' ' + '\a' + cVar5;
    }
    *pcVar4 = cVar5;
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -1;
    pcVar4 = *(char **)(param_1 + 0x40);
  }
  *(int *)(param_1 + 0x48) = (int)pcVar3 - *(int *)(param_1 + 0x40);
  *(char **)(param_1 + 0x40) = pcVar4 + 1;
  return;
}

