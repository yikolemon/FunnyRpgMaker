/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180061b30 */

void FUN_180061b30(undefined8 param_1,longlong param_2,longlong param_3)

{
  code *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar3 = param_3 * 4 + 4;
  lVar2 = param_2;
  if (0xfff < uVar3) {
    lVar2 = *(longlong *)(param_2 + -8);
    if (0x1f < (ulonglong)((param_2 + -8) - lVar2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    uVar3 = param_3 * 4 + 0x2b;
  }
  thunk_FUN_1802464a0(lVar2,uVar3);
  return;
}

