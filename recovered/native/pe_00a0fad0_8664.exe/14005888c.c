/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14005888c */

void FUN_14005888c(longlong *param_1,ulonglong param_2)

{
  code *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if ((longlong)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_14000a2c6();
  }
  lVar2 = *param_1;
  uVar4 = param_1[2] - lVar2;
  if (lVar2 != 0) {
    uVar3 = uVar4;
    if (0xfff < uVar4) {
      if (0x1f < (ulonglong)((lVar2 + -8) - *(longlong *)(lVar2 + -8))) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      lVar2 = *(longlong *)(lVar2 + -8);
      uVar3 = uVar4 + 0x27;
    }
    thunk_FUN_1400ddcd0(lVar2,uVar3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  uVar3 = (uVar4 >> 1) + uVar4;
  if (uVar3 <= param_2) {
    uVar3 = param_2;
  }
  if ((uVar4 >> 1 ^ 0x7fffffffffffffff) < uVar4) {
    uVar3 = 0x7fffffffffffffff;
  }
  lVar2 = FUN_140006280(uVar3);
  *param_1 = lVar2;
  param_1[1] = lVar2;
  param_1[2] = uVar3 + lVar2;
  return;
}

