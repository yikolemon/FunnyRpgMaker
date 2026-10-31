/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180185818 */

void FUN_180185818(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

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
        FUN_18017fc5e(param_1,lVar3);
        lVar3 = lVar3 + 0x40;
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
    thunk_FUN_1802464a0(lVar4,uVar2);
  }
  *param_1 = param_2;
  param_1[1] = param_3 * 0x40 + param_2;
  param_1[2] = param_4 * 0x40 + param_2;
  return;
}

