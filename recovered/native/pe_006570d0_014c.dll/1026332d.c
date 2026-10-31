/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026332d */

void __thiscall FUN_1026332d(int param_1,undefined4 param_2,undefined4 param_3,byte param_4)

{
  int iVar1;
  short *psVar2;
  int extraout_ECX;
  uint uVar3;
  int iVar4;
  short *psVar5;
  longlong lVar6;
  
  lVar6 = CONCAT44(param_3,param_2);
  iVar4 = *(int *)(param_1 + 0x440);
  if (*(int *)(param_1 + 0x440) == 0) {
    iVar4 = param_1 + 0x3c;
  }
  iVar1 = FUN_10263784();
  psVar5 = (short *)(iVar4 + iVar1 * 2 + -2);
  *(short **)(param_1 + 0x30) = psVar5;
  psVar2 = psVar5;
  while ((0 < *(int *)(param_1 + 0x24) || (lVar6 != 0))) {
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
    lVar6 = __aulldvrm(lVar6,10,0);
    uVar3 = extraout_ECX + 0x30U & 0xffff;
    if (0x39 < uVar3) {
      uVar3 = (uint)(ushort)(short)(char)((param_4 ^ 1) * ' ' + '\a' + (char)uVar3);
    }
    *psVar2 = (short)(char)uVar3;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -2;
    psVar2 = *(short **)(param_1 + 0x30);
  }
  *(int *)(param_1 + 0x34) = (int)psVar5 - (int)psVar2 >> 1;
  *(short **)(param_1 + 0x30) = psVar2 + 1;
  return;
}

