/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180018006 */

void FUN_180018006(longlong param_1,ulonglong param_2)

{
  code *pcVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar7 = *(ulonglong *)(param_1 + 0x10);
  uVar9 = uVar7 + (uVar7 == 0);
  if (uVar7 < 8 || uVar9 - uVar7 < param_2) {
    do {
      if (0x3ffffffffffffff - uVar9 < uVar9) {
        FUN_18001816e();
        goto LAB_180018166;
      }
      uVar9 = uVar9 * 2;
    } while (uVar9 < 8 || uVar9 - uVar7 < param_2);
  }
  if (uVar9 >> 0x3d == 0) {
    uVar7 = *(ulonglong *)(param_1 + 0x18);
    lVar3 = FUN_1800013e0(uVar9 * 8);
    uVar2 = uVar9;
    do {
      uVar8 = uVar2;
      uVar2 = uVar8 * 2;
    } while (uVar8 <= uVar9 >> 1);
    uVar8 = uVar8 - *(longlong *)(param_1 + 0x10);
    uVar4 = thunk_FUN_180018197(*(longlong *)(param_1 + 8) + uVar7 * 8,
                                *(longlong *)(param_1 + 8) + *(longlong *)(param_1 + 0x10) * 8,
                                lVar3 + uVar7 * 8);
    lVar5 = *(longlong *)(param_1 + 8);
    if (uVar8 < uVar7) {
      thunk_FUN_180018197(lVar5,lVar5 + uVar8 * 8,uVar4);
      lVar5 = thunk_FUN_180018197(*(longlong *)(param_1 + 8) + uVar8 * 8,
                                  *(longlong *)(param_1 + 8) + uVar7 * 8,lVar3);
      uVar7 = uVar8;
    }
    else {
      uVar4 = thunk_FUN_180018197(lVar5,lVar5 + uVar7 * 8,uVar4);
      FUN_180018184(uVar4,uVar8 - uVar7);
      lVar5 = lVar3;
    }
    FUN_180018184(lVar5,uVar7);
    lVar5 = *(longlong *)(param_1 + 8);
    if (lVar5 != 0) {
      uVar7 = *(longlong *)(param_1 + 0x10) * 8;
      lVar6 = lVar5;
      if (0xfff < uVar7) {
        lVar6 = *(longlong *)(lVar5 + -8);
        if (0x1f < (ulonglong)((lVar5 + -8) - lVar6)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        uVar7 = uVar7 + 0x27;
      }
      thunk_FUN_1802464a0(lVar6,uVar7);
    }
    *(longlong *)(param_1 + 8) = lVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + uVar8;
    return;
  }
LAB_180018166:
                    /* WARNING: Subroutine does not return */
  FUN_180001427();
}

