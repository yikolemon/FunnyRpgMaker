/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402150c2 */

longlong * FUN_1402150c2(longlong *param_1,undefined1 param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  code *pcVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  plVar1 = (longlong *)param_1[2];
  if (plVar1 < (longlong *)param_1[3]) {
    param_1[2] = (longlong)plVar1 + 1;
    if ((longlong *)0xf < (longlong *)param_1[3]) {
      param_1 = (longlong *)*param_1;
    }
    *(undefined1 *)((longlong)param_1 + (longlong)plVar1) = param_2;
    *(undefined1 *)((longlong)param_1 + 1 + (longlong)plVar1) = 0;
    return plVar1;
  }
  lVar8 = param_1[2];
  if (lVar8 == 0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_140212875();
  }
  uVar7 = lVar8 + 1;
  uVar2 = param_1[3];
  uVar5 = 0x7fffffffffffffff;
  if ((-1 < (longlong)uVar7) && (uVar2 <= (uVar2 >> 1 ^ 0x7fffffffffffffff))) {
    uVar5 = (uVar2 >> 1) + uVar2;
    if (uVar5 < (uVar7 | 0xf)) {
      uVar5 = uVar7 | 0xf;
    }
  }
  lVar6 = FUN_1402128b0(uVar5 + 1);
  param_1[2] = uVar7;
  param_1[3] = uVar5;
  if (uVar2 < 0x10) {
    FUN_1404b97c0(lVar6,param_1,lVar8);
    *(undefined1 *)(lVar6 + lVar8) = param_2;
    *(undefined1 *)(lVar6 + 1 + lVar8) = 0;
  }
  else {
    lVar3 = *param_1;
    FUN_1404b97c0(lVar6,lVar3,lVar8);
    *(undefined1 *)(lVar6 + lVar8) = param_2;
    *(undefined1 *)(lVar6 + 1 + lVar8) = 0;
    uVar5 = uVar2 + 1;
    lVar8 = lVar3;
    if (0xfff < uVar5) {
      lVar8 = *(longlong *)(lVar3 + -8);
      if (0x1f < (ulonglong)((lVar3 + -8) - lVar8)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      uVar5 = uVar2 + 0x28;
    }
    thunk_FUN_1404a2310(lVar8,uVar5);
  }
  *param_1 = lVar6;
  return param_1;
}

