/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18002e678 */

longlong * FUN_18002e678(longlong *param_1,ulonglong param_2,undefined8 param_3,undefined4 param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  if ((longlong)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1800013a5();
  }
  uVar1 = param_1[3];
  uVar6 = (uVar1 >> 1) + uVar1;
  if (uVar6 < (param_2 | 0xf)) {
    uVar6 = param_2 | 0xf;
  }
  if ((uVar1 >> 1 ^ 0x7fffffffffffffff) < uVar1) {
    uVar6 = 0x7fffffffffffffff;
  }
  lVar4 = FUN_1800013e0(uVar6 + 1);
  param_1[2] = param_2;
  param_1[3] = uVar6;
  FUN_1802a89a0(lVar4,param_4,param_2);
  *(undefined1 *)(lVar4 + param_2) = 0;
  if (0xf < uVar1) {
    lVar2 = *param_1;
    uVar6 = uVar1 + 1;
    lVar5 = lVar2;
    if (0xfff < uVar6) {
      lVar5 = *(longlong *)(lVar2 + -8);
      if (0x1f < (ulonglong)((lVar2 + -8) - lVar5)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar6 = uVar1 + 0x28;
    }
    thunk_FUN_1802464a0(lVar5,uVar6);
  }
  *param_1 = lVar4;
  return param_1;
}

