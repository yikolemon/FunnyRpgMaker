/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026323c */

void __thiscall FUN_1026323c(int param_1,uint param_2,uint param_3)

{
  short *psVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  
  iVar4 = *(int *)(param_1 + 0x440);
  if (*(int *)(param_1 + 0x440) == 0) {
    iVar4 = param_1 + 0x3c;
  }
  iVar3 = FUN_10263784();
  psVar1 = (short *)(iVar4 + -2 + iVar3 * 2);
  *(short **)(param_1 + 0x30) = psVar1;
  psVar5 = psVar1;
  do {
    iVar4 = *(int *)(param_1 + 0x24);
    if (iVar4 < 1) {
      if (param_2 == 0 && param_3 == 0) {
        *(int *)(param_1 + 0x34) = (int)psVar1 - (int)psVar5 >> 1;
        *(short **)(param_1 + 0x30) = psVar5 + 1;
        return;
      }
      iVar4 = *(int *)(param_1 + 0x24);
    }
    *(int *)(param_1 + 0x24) = iVar4 + -1;
    uVar2 = (ushort)param_2;
    param_2 = param_2 >> 3 | param_3 << 0x1d;
    *psVar5 = (uVar2 & 7) + 0x30;
    param_3 = param_3 >> 3;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -2;
    psVar5 = *(short **)(param_1 + 0x30);
  } while( true );
}

