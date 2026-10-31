/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14029d892 */

void FUN_14029d892(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

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
        FUN_1402125bc(lVar3);
        lVar3 = lVar3 + 0x20;
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
      uVar2 = uVar2 + 0x27;
    }
    thunk_FUN_1404a2310(lVar4,uVar2);
  }
  *param_1 = param_2;
  param_1[1] = param_3 * 0x20 + param_2;
  param_1[2] = param_4 * 0x20 + param_2;
  return;
}

