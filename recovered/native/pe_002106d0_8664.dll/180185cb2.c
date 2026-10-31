/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180185cb2 */

void FUN_180185cb2(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  lVar4 = param_1[1];
  if (lVar4 == 0) {
    return;
  }
  lVar6 = param_1[3];
  lVar1 = param_1[4];
  if (lVar6 != lVar1) {
    uVar2 = *param_1;
    do {
      FUN_18017fc5e(uVar2,lVar6);
      lVar6 = lVar6 + 0x40;
    } while (lVar6 != lVar1);
    lVar4 = param_1[1];
  }
  uVar5 = param_1[2] << 6;
  lVar6 = lVar4;
  if (0xfff < uVar5) {
    lVar6 = *(longlong *)(lVar4 + -8);
    if (0x1f < (ulonglong)((lVar4 + -8) - lVar6)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    uVar5 = uVar5 | 0x27;
  }
  thunk_FUN_1802464a0(lVar6,uVar5);
  return;
}

