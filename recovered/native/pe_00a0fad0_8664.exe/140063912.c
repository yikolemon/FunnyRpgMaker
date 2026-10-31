/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140063912 */

void FUN_140063912(longlong *param_1)

{
  code *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  lVar4 = *param_1;
  if (lVar4 != 0) {
    lVar2 = param_1[1];
    for (; lVar4 != lVar2; lVar4 = lVar4 + 0x30) {
      FUN_1400578a6(lVar4 + 0x20);
      FUN_1400017de(lVar4);
    }
    lVar4 = *param_1;
    uVar3 = param_1[2] - lVar4;
    lVar2 = lVar4;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar4 + -8);
      if (0x1f < (ulonglong)((lVar4 + -8) - lVar2)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      uVar3 = uVar3 + 0x27;
    }
    thunk_FUN_1400ddcd0(lVar2,uVar3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}

