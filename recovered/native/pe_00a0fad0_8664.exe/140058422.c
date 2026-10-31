/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140058422 */

void FUN_140058422(longlong *param_1,ulonglong param_2)

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
    FUN_14000a2c6();
  }
  lVar1 = *param_1;
  lVar2 = param_1[2];
  if (lVar1 != 0) {
    lVar5 = param_1[1];
    lVar9 = lVar1;
    lVar8 = lVar2;
    if (lVar1 != lVar5) {
      do {
        FUN_14005893a(lVar9);
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
    thunk_FUN_1400ddcd0(lVar5,uVar7);
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
  FUN_140058636(param_1,uVar7);
  return;
}

