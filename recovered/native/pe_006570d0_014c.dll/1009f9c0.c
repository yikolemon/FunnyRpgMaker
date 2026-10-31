/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1009f9c0 */

void __thiscall FUN_1009f9c0(int *param_1,uint param_2)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (0x3fffffff < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_10016590();
  }
  iVar2 = *param_1;
  uVar4 = param_1[2] - iVar2;
  if (iVar2 != 0) {
    uVar3 = uVar4;
    if (0xfff < uVar4) {
      if (0x1f < (uint)((iVar2 + -4) - *(int *)(iVar2 + -4))) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      iVar2 = *(int *)(iVar2 + -4);
      uVar3 = uVar4 + 0x23;
    }
    FUN_102283a0(iVar2,uVar3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  uVar4 = (int)uVar4 >> 2;
  uVar3 = (uVar4 >> 1) + uVar4;
  if (uVar3 <= param_2) {
    uVar3 = param_2;
  }
  if (0x3fffffff - (uVar4 >> 1) < uVar4) {
    uVar3 = 0x3fffffff;
  }
  FUN_10061bba(uVar3);
  return;
}

