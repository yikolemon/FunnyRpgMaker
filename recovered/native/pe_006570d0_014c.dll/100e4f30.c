/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100e4f30 */

void __thiscall FUN_100e4f30(int param_1,uint param_2)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  uVar6 = *(uint *)(param_1 + 8);
  uVar8 = uVar6 + (uVar6 == 0);
  if (uVar6 < 8 || uVar8 - uVar6 < param_2) {
    do {
      if (0x54e42 - uVar8 < uVar8) {
        FUN_100185c0();
        goto LAB_100e5067;
      }
      uVar8 = uVar8 * 2;
    } while (uVar8 < 8 || uVar8 - uVar6 < param_2);
  }
  if (uVar8 < 0x40000000) {
    uVar6 = *(uint *)(param_1 + 0xc);
    iVar3 = FUN_10001426(uVar8 * 4);
    uVar2 = uVar8;
    do {
      uVar9 = uVar2;
      uVar2 = uVar9 * 2;
    } while (uVar9 <= uVar8 >> 1);
    uVar9 = uVar9 - *(int *)(param_1 + 8);
    uVar4 = thunk_FUN_100185ef(*(int *)(param_1 + 4) + uVar6 * 4,
                               *(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 4,iVar3 + uVar6 * 4);
    iVar5 = *(int *)(param_1 + 4);
    if (uVar9 < uVar6) {
      thunk_FUN_100185ef(iVar5,iVar5 + uVar9 * 4,uVar4);
      iVar5 = thunk_FUN_100185ef(*(int *)(param_1 + 4) + uVar9 * 4,*(int *)(param_1 + 4) + uVar6 * 4
                                 ,iVar3);
      uVar6 = uVar9;
    }
    else {
      uVar4 = thunk_FUN_100185ef(iVar5,iVar5 + uVar6 * 4,uVar4);
      FUN_100185cf(uVar4,uVar9 - uVar6);
      iVar5 = iVar3;
    }
    FUN_100185cf(iVar5,uVar6);
    iVar5 = *(int *)(param_1 + 4);
    if (iVar5 != 0) {
      uVar6 = *(int *)(param_1 + 8) * 4;
      iVar7 = iVar5;
      if (0xfff < uVar6) {
        iVar7 = *(int *)(iVar5 + -4);
        if (0x1f < (uint)((iVar5 + -4) - iVar7)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        uVar6 = uVar6 + 0x23;
      }
      FUN_102283a0(iVar7,uVar6);
    }
    *(int *)(param_1 + 4) = iVar3;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + uVar9;
    return;
  }
LAB_100e5067:
                    /* WARNING: Subroutine does not return */
  FUN_1000146d();
}

