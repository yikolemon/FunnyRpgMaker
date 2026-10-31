/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800dd566 */

void FUN_1800dd566(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar6;
  
  if (param_2 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_18001620a();
  }
  lVar1 = *param_1;
  lVar2 = param_1[2];
  if (lVar1 != 0) {
    lVar4 = param_1[1];
    lVar7 = lVar1;
    lVar6 = lVar2;
    if (lVar1 != lVar4) {
      do {
        FUN_1800137c6(lVar7);
        lVar7 = lVar7 + 0x10;
      } while (lVar7 != lVar4);
      lVar7 = *param_1;
      lVar6 = param_1[2];
    }
    uVar5 = lVar6 - lVar7;
    lVar4 = lVar7;
    if (0xfff < uVar5) {
      lVar4 = *(longlong *)(lVar7 + -8);
      if (0x1f < (ulonglong)((lVar7 + -8) - lVar4)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar5 = uVar5 + 0x27;
    }
    thunk_FUN_1802464a0(lVar4,uVar5);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  uVar8 = lVar2 - lVar1 >> 4;
  uVar5 = (uVar8 >> 1) + uVar8;
  if (uVar5 <= param_2) {
    uVar5 = param_2;
  }
  if (0xfffffffffffffff - (uVar8 >> 1) < uVar8) {
    uVar5 = 0xfffffffffffffff;
  }
  FUN_1800428f6(param_1,uVar5);
  return;
}

