/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400c6e42 */

void FUN_1400c6e42(longlong *param_1)

{
  code *pcVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar4 = param_1[1];
    if (lVar3 != lVar4) {
      do {
        FUN_1400c6eba(lVar3);
        lVar3 = lVar3 + 0x80;
      } while (lVar3 != lVar4);
      lVar3 = *param_1;
    }
    uVar2 = param_1[2] - lVar3;
    lVar4 = lVar3;
    if (0xfff < uVar2) {
      lVar4 = *(longlong *)(lVar3 + -8);
      if (0x1f < (ulonglong)((lVar3 + -8) - lVar4)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      uVar2 = uVar2 | 0x27;
    }
    thunk_FUN_1400ddcd0(lVar4,uVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}

