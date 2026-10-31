/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140229170 */

longlong * FUN_140229170(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  
  if (param_3 <= (ulonglong)param_1[3]) {
    plVar6 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      plVar6 = (longlong *)*param_1;
    }
    param_1[2] = param_3;
    FUN_1404b97c0(plVar6,param_2,param_3);
    *(undefined1 *)((longlong)plVar6 + param_3) = 0;
    return param_1;
  }
  if (-1 < (longlong)param_3) {
    uVar1 = param_1[3];
    uVar7 = (uVar1 >> 1) + uVar1;
    if (uVar7 < (param_3 | 0xf)) {
      uVar7 = param_3 | 0xf;
    }
    if ((uVar1 >> 1 ^ 0x7fffffffffffffff) < uVar1) {
      uVar7 = 0x7fffffffffffffff;
    }
    lVar4 = FUN_1402128b0(uVar7 + 1);
    param_1[2] = param_3;
    param_1[3] = uVar7;
    FUN_1404b97c0(lVar4,param_2,param_3);
    *(undefined1 *)(lVar4 + param_3) = 0;
    if (0xf < uVar1) {
      lVar2 = *param_1;
      uVar7 = uVar1 + 1;
      lVar5 = lVar2;
      if (0xfff < uVar7) {
        lVar5 = *(longlong *)(lVar2 + -8);
        if (0x1f < (ulonglong)((lVar2 + -8) - lVar5)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        uVar7 = uVar1 + 0x28;
      }
      thunk_FUN_1404a2310(lVar5,uVar7);
    }
    *param_1 = lVar4;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140212875();
}

