/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18017fb46 */

void FUN_18017fb46(longlong *param_1)

{
  code *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  lVar4 = *param_1;
  if (lVar4 != 0) {
    lVar2 = param_1[1];
    for (; lVar4 != lVar2; lVar4 = lVar4 + 0x40) {
      FUN_18017fb46(lVar4 + 0x28);
      FUN_180001ef2(lVar4 + 8);
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
      uVar3 = uVar3 | 0x27;
    }
    thunk_FUN_1802464a0(lVar2,uVar3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}

