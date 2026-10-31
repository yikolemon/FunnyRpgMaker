/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100d968a */

void __thiscall FUN_100d968a(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar5;
  
  if (0xfffffff < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_10016590();
  }
  iVar1 = *param_1;
  iVar2 = param_1[2];
  if (iVar1 != 0) {
    iVar6 = param_1[1];
    iVar5 = iVar2;
    iVar8 = iVar1;
    if (iVar1 != iVar6) {
      do {
        FUN_10013efc();
        iVar8 = iVar8 + 0x10;
      } while (iVar8 != iVar6);
      iVar8 = *param_1;
      iVar5 = param_1[2];
    }
    uVar4 = iVar5 - iVar8;
    iVar6 = iVar8;
    if (0xfff < uVar4) {
      iVar6 = *(int *)(iVar8 + -4);
      if (0x1f < (uint)((iVar8 + -4) - iVar6)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar4 = uVar4 + 0x23;
    }
    FUN_102283a0(iVar6,uVar4);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  uVar7 = iVar2 - iVar1 >> 4;
  uVar4 = (uVar7 >> 1) + uVar7;
  if (uVar4 <= param_2) {
    uVar4 = param_2;
  }
  if (0xfffffff - (uVar7 >> 1) < uVar7) {
    uVar4 = 0xfffffff;
  }
  FUN_10044420(uVar4);
  return;
}

