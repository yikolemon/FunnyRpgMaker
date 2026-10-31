/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b667e */

void __thiscall FUN_100b667e(int param_1,uint param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar5 = *(uint *)(param_1 + 8);
  uVar7 = uVar5 + (uVar5 == 0);
  if (uVar5 < 8 || uVar7 - uVar5 < param_2) {
    do {
      if (0xfffffff - uVar7 < uVar7) {
        FUN_100185c0();
        goto LAB_100b67b8;
      }
      uVar7 = uVar7 * 2;
    } while (uVar7 < 8 || uVar7 - uVar5 < param_2);
  }
  if (uVar7 < 0x40000000) {
    uVar8 = *(uint *)(param_1 + 0xc) >> 2;
    iVar2 = FUN_10001426(uVar7 * 4);
    uVar5 = uVar7;
    do {
      uVar9 = uVar5;
      uVar5 = uVar9 * 2;
    } while (uVar9 <= uVar7 >> 1);
    uVar9 = uVar9 - *(int *)(param_1 + 8);
    uVar3 = thunk_FUN_100185ef(*(int *)(param_1 + 4) + uVar8 * 4,
                               *(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 4,iVar2 + uVar8 * 4);
    iVar4 = *(int *)(param_1 + 4);
    if (uVar9 < uVar8) {
      thunk_FUN_100185ef(iVar4,iVar4 + uVar9 * 4,uVar3);
      iVar4 = thunk_FUN_100185ef(*(int *)(param_1 + 4) + uVar9 * 4,*(int *)(param_1 + 4) + uVar8 * 4
                                 ,iVar2);
      uVar8 = uVar9;
    }
    else {
      uVar3 = thunk_FUN_100185ef(iVar4,iVar4 + uVar8 * 4,uVar3);
      FUN_100185cf(uVar3,uVar9 - uVar8);
      iVar4 = iVar2;
    }
    FUN_100185cf(iVar4,uVar8);
    iVar4 = *(int *)(param_1 + 4);
    if (iVar4 != 0) {
      uVar5 = *(int *)(param_1 + 8) * 4;
      iVar6 = iVar4;
      if (0xfff < uVar5) {
        iVar6 = *(int *)(iVar4 + -4);
        if (0x1f < (uint)((iVar4 + -4) - iVar6)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        uVar5 = uVar5 + 0x23;
      }
      FUN_102283a0(iVar6,uVar5);
    }
    *(int *)(param_1 + 4) = iVar2;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + uVar9;
    return;
  }
LAB_100b67b8:
                    /* WARNING: Subroutine does not return */
  FUN_1000146d();
}

