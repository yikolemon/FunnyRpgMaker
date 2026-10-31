/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100779fe */

void __thiscall FUN_100779fe(int *param_1,uint param_2)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_10016590();
  }
  iVar2 = *param_1;
  uVar3 = param_1[2] - iVar2;
  if (iVar2 != 0) {
    uVar4 = uVar3;
    if (0xfff < uVar3) {
      if (0x1f < (uint)((iVar2 + -4) - *(int *)(iVar2 + -4))) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      iVar2 = *(int *)(iVar2 + -4);
      uVar4 = uVar3 + 0x23;
    }
    FUN_102283a0(iVar2,uVar4);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  uVar4 = (uVar3 >> 1) + uVar3;
  if (uVar4 <= param_2) {
    uVar4 = param_2;
  }
  if ((uVar3 >> 1 ^ 0x7fffffff) < uVar3) {
    uVar4 = 0x7fffffff;
  }
  iVar2 = FUN_10001426(uVar4);
  *param_1 = iVar2;
  param_1[1] = iVar2;
  param_1[2] = uVar4 + iVar2;
  return;
}

