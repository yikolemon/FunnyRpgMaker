/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402b4510 */

void FUN_1402b4510(longlong *param_1,ulonglong param_2)

{
  code *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (param_2 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402276da();
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
    thunk_FUN_1404a2310(lVar2,uVar3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  uVar4 = (longlong)uVar4 >> 2;
  uVar3 = (uVar4 >> 1) + uVar4;
  if (uVar3 <= param_2) {
    uVar3 = param_2;
  }
  if (0x3fffffffffffffff - (uVar4 >> 1) < uVar4) {
    uVar3 = 0x3fffffffffffffff;
  }
  FUN_140276d58(param_1,uVar3);
  return;
}

