/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101da7f0 */

void __fastcall FUN_101da7f0(uint param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (1 < param_1) {
    uVar3 = 1;
    uVar4 = uVar3;
LAB_101da7fd:
    do {
      iVar1 = *(int *)(param_2 + -4 + uVar3 * 4);
      iVar2 = *(int *)(param_2 + uVar3 * 4);
      if (iVar2 < iVar1) {
        *(int *)(param_2 + uVar3 * 4) = iVar1;
        *(int *)(param_2 + -4 + uVar3 * 4) = iVar2;
        uVar3 = uVar3 - 1;
        if (uVar3 != 0) goto LAB_101da7fd;
      }
      uVar3 = uVar4 + 1;
      uVar4 = uVar3;
    } while (uVar3 != param_1);
  }
  return;
}

