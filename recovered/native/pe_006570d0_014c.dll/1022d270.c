/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1022d270 */

void __thiscall FUN_1022d270(int *param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (((param_2 != param_3) && (0xf < (uint)param_1[5])) && (iVar1 = *param_1, DAT_103235d4 != '\0')
     ) {
    uVar5 = param_3 + 1 + iVar1;
    uVar3 = param_2 + 1 + iVar1;
    uVar4 = param_1[5] + 8U + iVar1 & 0xfffffff8;
    uVar2 = uVar4;
    if (uVar3 <= uVar4) {
      uVar2 = uVar3;
    }
    if (uVar4 < uVar5) {
      uVar5 = uVar4;
    }
    guard_check_icall(iVar1,uVar4,uVar2,uVar5);
  }
  return;
}

