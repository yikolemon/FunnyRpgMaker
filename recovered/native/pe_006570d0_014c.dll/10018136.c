/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10018136 */

int * __thiscall FUN_10018136(int *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_100013fb();
  }
  uVar1 = param_1[5];
  uVar6 = (uVar1 >> 1) + uVar1;
  if (uVar6 < (param_2 | 0xf)) {
    uVar6 = param_2 | 0xf;
  }
  if ((uVar1 >> 1 ^ 0x7fffffff) < uVar1) {
    uVar6 = 0x7fffffff;
  }
  iVar4 = FUN_10001426(uVar6 + 1);
  param_1[4] = param_2;
  param_1[5] = uVar6;
  FUN_1025b2d0(iVar4,param_4,param_2);
  *(undefined1 *)(iVar4 + param_2) = 0;
  if (0xf < uVar1) {
    iVar2 = *param_1;
    uVar6 = uVar1 + 1;
    iVar5 = iVar2;
    if (0xfff < uVar6) {
      iVar5 = *(int *)(iVar2 + -4);
      if (0x1f < (uint)((iVar2 + -4) - iVar5)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar6 = uVar1 + 0x24;
    }
    FUN_102283a0(iVar5,uVar6);
  }
  *param_1 = iVar4;
  return param_1;
}

