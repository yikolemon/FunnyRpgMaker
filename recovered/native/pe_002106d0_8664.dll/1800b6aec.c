/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800b6aec */

void FUN_1800b6aec(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FUN_1800b6a83(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  lVar1 = *(longlong *)(param_1 + 8);
  uVar4 = *(longlong *)(param_1 + 0x10) * 0x20;
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
  thunk_FUN_1802464a0(lVar3,uVar4);
  return;
}

