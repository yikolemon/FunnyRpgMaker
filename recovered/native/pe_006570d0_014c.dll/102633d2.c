/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102633d2 */

void __thiscall FUN_102633d2(int param_1,uint param_2,byte param_3)

{
  uint uVar1;
  int iVar2;
  short *psVar3;
  char cVar4;
  int iVar5;
  short *psVar6;
  
  iVar5 = *(int *)(param_1 + 0x440);
  if (*(int *)(param_1 + 0x440) == 0) {
    iVar5 = param_1 + 0x3c;
  }
  iVar2 = FUN_10263784();
  psVar6 = (short *)(iVar5 + iVar2 * 2 + -2);
  *(short **)(param_1 + 0x30) = psVar6;
  psVar3 = psVar6;
  while ((0 < *(int *)(param_1 + 0x24) || (param_2 != 0))) {
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
    uVar1 = param_2 % 10 + 0x30;
    cVar4 = (char)uVar1;
    if (0x39 < uVar1) {
      cVar4 = (param_3 ^ 1) * ' ' + '\a' + cVar4;
    }
    *psVar3 = (short)cVar4;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -2;
    psVar3 = *(short **)(param_1 + 0x30);
    param_2 = param_2 / 10;
  }
  *(int *)(param_1 + 0x34) = (int)psVar6 - (int)psVar3 >> 1;
  *(short **)(param_1 + 0x30) = psVar3 + 1;
  return;
}

