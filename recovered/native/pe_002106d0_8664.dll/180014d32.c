/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180014d32 */

void FUN_180014d32(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x10);
  if (0 < lVar3) {
    uVar4 = lVar3 + 1;
    do {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + -0x10 + uVar4 * 8);
      if (lVar3 != 0) {
        thunk_FUN_1802464a0(lVar3,0x40);
      }
      uVar4 = uVar4 - 1;
    } while (1 < uVar4);
    lVar3 = *(longlong *)(param_1 + 0x10);
  }
  lVar1 = *(longlong *)(param_1 + 8);
  uVar4 = lVar3 * 8;
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
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}

