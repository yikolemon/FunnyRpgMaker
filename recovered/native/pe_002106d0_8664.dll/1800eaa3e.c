/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800eaa3e */

void FUN_1800eaa3e(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar9;
  longlong lVar8;
  
  if (0x333333333333333 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_18001620a();
  }
  lVar1 = *param_1;
  lVar2 = param_1[2];
  if (lVar1 != 0) {
    lVar5 = param_1[1];
    lVar9 = lVar1;
    lVar8 = lVar2;
    if (lVar1 != lVar5) {
      do {
        FUN_1800ad5b5(lVar9);
        lVar9 = lVar9 + 0x50;
      } while (lVar9 != lVar5);
      lVar9 = *param_1;
      lVar8 = param_1[2];
    }
    uVar7 = lVar8 - lVar9;
    lVar5 = lVar9;
    if (0xfff < uVar7) {
      lVar5 = *(longlong *)(lVar9 + -8);
      if (0x1f < (ulonglong)((lVar9 + -8) - lVar5)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar7 = uVar7 + 0x27;
    }
    thunk_FUN_1802464a0(lVar5,uVar7);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  uVar4 = (lVar2 - lVar1 >> 4) * -0x3333333333333333;
  uVar6 = 0x333333333333333 - (uVar4 >> 1);
  uVar7 = (uVar4 >> 1) + uVar4;
  if (uVar7 <= param_2) {
    uVar7 = param_2;
  }
  if (uVar6 <= uVar4 && uVar4 - uVar6 != 0) {
    uVar7 = 0x333333333333333;
  }
  FUN_1800b04b8(param_1,uVar7);
  return;
}

