/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140017258 */

longlong * FUN_140017258(longlong *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  if ((longlong)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_14000626f();
  }
  uVar1 = param_1[3];
  uVar6 = (uVar1 >> 1) + uVar1;
  if (uVar6 < (param_2 | 0xf)) {
    uVar6 = param_2 | 0xf;
  }
  if ((uVar1 >> 1 ^ 0x7fffffffffffffff) < uVar1) {
    uVar6 = 0x7fffffffffffffff;
  }
  lVar4 = FUN_140006280(uVar6 + 1);
  param_1[2] = param_2;
  param_1[3] = uVar6;
  FUN_140135ff0(lVar4,param_4,param_2);
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
    thunk_FUN_1400ddcd0(lVar5,uVar6);
  }
  *param_1 = lVar4;
  return param_1;
}

