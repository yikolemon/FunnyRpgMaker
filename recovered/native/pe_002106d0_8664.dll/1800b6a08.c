/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800b6a08 */

void FUN_1800b6a08(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if (*param_1 != 0) {
    FUN_1800b6a83(*param_1,param_1[1]);
    lVar1 = *param_1;
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
    thunk_FUN_1802464a0(lVar3,uVar4);
  }
  *param_1 = param_2;
  param_1[1] = param_3 * 0x20 + param_2;
  param_1[2] = param_4 * 0x20 + param_2;
  return;
}

