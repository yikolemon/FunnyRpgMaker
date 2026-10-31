/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102632bc */

void __thiscall FUN_102632bc(int param_1,uint param_2)

{
  short *psVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x440);
  if (*(int *)(param_1 + 0x440) == 0) {
    iVar4 = param_1 + 0x3c;
  }
  iVar2 = FUN_10263784();
  psVar1 = (short *)(iVar4 + -2 + iVar2 * 2);
  *(short **)(param_1 + 0x30) = psVar1;
  psVar3 = psVar1;
  for (; (0 < *(int *)(param_1 + 0x24) || (param_2 != 0)); param_2 = param_2 >> 3) {
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
    *psVar3 = ((ushort)param_2 & 7) + 0x30;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -2;
    psVar3 = *(short **)(param_1 + 0x30);
  }
  *(int *)(param_1 + 0x34) = (int)psVar1 - (int)psVar3 >> 1;
  *(short **)(param_1 + 0x30) = psVar3 + 1;
  return;
}

