/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140001f36 */

void FUN_140001f36(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  uVar1 = param_1[3];
  if (0xf < uVar1) {
    lVar2 = *param_1;
    uVar4 = uVar1 + 1;
    lVar5 = lVar2;
    if (0xfff < uVar4) {
      lVar5 = *(longlong *)(lVar2 + -8);
      if (0x1f < (ulonglong)((lVar2 + -8) - lVar5)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar4 = uVar1 + 0x28;
    }
    thunk_FUN_14018e090(lVar5,uVar4);
  }
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  return;
}

