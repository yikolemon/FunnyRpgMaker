/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400022f6 */

void FUN_1400022f6(longlong *param_1)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar4 = param_1[2] - lVar1;
    lVar3 = lVar1;
    if (0xfff < uVar4) {
      lVar3 = *(longlong *)(lVar1 + -8);
      if (0x1f < (ulonglong)((lVar1 + -8) - lVar3)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      uVar4 = uVar4 + 0x27;
    }
    thunk_FUN_14018e090(lVar3,uVar4);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}

