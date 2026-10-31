/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140038c6e */

void FUN_140038c6e(longlong *param_1,ulonglong param_2)

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
  
  if (0xaaaaaaaaaaaaaa < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1400066bc();
  }
  lVar1 = *param_1;
  lVar2 = param_1[2];
  if (lVar1 != 0) {
    lVar5 = param_1[1];
    lVar9 = lVar1;
    lVar8 = lVar2;
    if (lVar1 != lVar5) {
      do {
        FUN_1400386c0(lVar9);
        lVar9 = lVar9 + 0x180;
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
      uVar7 = uVar7 | 0x27;
    }
    thunk_FUN_14018e090(lVar5,uVar7);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  uVar4 = (lVar2 - lVar1 >> 7) * -0x5555555555555555;
  uVar6 = 0xaaaaaaaaaaaaaa - (uVar4 >> 1);
  uVar7 = (uVar4 >> 1) + uVar4;
  if (uVar7 <= param_2) {
    uVar7 = param_2;
  }
  if (uVar6 <= uVar4 && uVar4 - uVar6 != 0) {
    uVar7 = 0xaaaaaaaaaaaaaa;
  }
  FUN_140038e80(param_1,uVar7);
  return;
}

