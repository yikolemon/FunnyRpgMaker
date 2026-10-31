/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100ab322 */

void __thiscall FUN_100ab322(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar6;
  
  if (0xaaaaaaa < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_10016590();
  }
  iVar1 = *param_1;
  iVar2 = param_1[2];
  if (iVar1 != 0) {
    iVar3 = param_1[1];
    iVar6 = iVar2;
    iVar8 = iVar1;
    if (iVar1 != iVar3) {
      do {
        FUN_10001fee();
        iVar8 = iVar8 + 0x18;
      } while (iVar8 != iVar3);
      iVar8 = *param_1;
      iVar6 = param_1[2];
    }
    uVar5 = iVar6 - iVar8;
    if (0xfff < uVar5) {
      if (0x1f < (uint)((iVar8 + -4) - *(int *)(iVar8 + -4))) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      uVar5 = uVar5 + 0x23;
      iVar8 = *(int *)(iVar8 + -4);
    }
    FUN_102283a0(iVar8,uVar5);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  uVar7 = (iVar2 - iVar1 >> 3) * -0x55555555;
  uVar9 = 0xaaaaaaa - (uVar7 >> 1);
  uVar5 = (uVar7 >> 1) + uVar7;
  if (uVar5 <= param_2) {
    uVar5 = param_2;
  }
  if (uVar9 <= uVar7 && uVar7 - uVar9 != 0) {
    uVar5 = 0xaaaaaaa;
  }
  FUN_1006de1e(uVar5);
  return;
}

