/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400254ee */

longlong *
FUN_1400254ee(longlong *param_1,ulonglong param_2,undefined8 param_3,longlong param_4,
             undefined1 param_5)

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 unaff_RBP;
  ulonglong uVar6;
  longlong lVar7;
  
  lVar7 = param_1[2];
  if (0x7fffffffffffffffU - lVar7 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_14000626f();
  }
  param_2 = param_2 + lVar7;
  uVar1 = param_1[3];
  uVar4 = 0x7fffffffffffffff;
  if ((-1 < (longlong)param_2) && (uVar1 <= (uVar1 >> 1 ^ 0x7fffffffffffffff))) {
    uVar4 = (uVar1 >> 1) + uVar1;
    if (uVar4 < (param_2 | 0xf)) {
      uVar4 = param_2 | 0xf;
    }
  }
  uVar6 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_5);
  lVar5 = FUN_140006280(uVar4 + 1);
  param_1[2] = param_2;
  param_1[3] = uVar4;
  if (uVar1 < 0x10) {
    FUN_140135ff0(lVar5,param_1,lVar7);
    FUN_1401366a0(lVar5 + lVar7,uVar6 & 0xffffffff,param_4);
    *(undefined1 *)(param_4 + lVar5 + lVar7) = 0;
  }
  else {
    lVar2 = *param_1;
    FUN_140135ff0(lVar5,lVar2,lVar7);
    FUN_1401366a0(lVar5 + lVar7,uVar6 & 0xffffffff,param_4);
    *(undefined1 *)(param_4 + lVar5 + lVar7) = 0;
    uVar4 = uVar1 + 1;
    lVar7 = lVar2;
    if (0xfff < uVar4) {
      lVar7 = *(longlong *)(lVar2 + -8);
      if (0x1f < (ulonglong)((lVar2 + -8) - lVar7)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar4 = uVar1 + 0x28;
    }
    thunk_FUN_1400ddcd0(lVar7,uVar4);
  }
  *param_1 = lVar5;
  return param_1;
}

