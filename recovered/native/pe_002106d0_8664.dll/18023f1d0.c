/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18023f1d0 */

void FUN_18023f1d0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  if (((param_1[2] != param_2) && (0xf < (ulonglong)param_1[3])) && (DAT_18034e408 != '\0')) {
    lVar1 = *param_1;
    uVar5 = param_1[2] + 1 + lVar1;
    uVar3 = param_1[3] + 8U + lVar1 & 0xfffffffffffffff8;
    uVar2 = param_2 + 1 + lVar1;
    uVar4 = uVar3;
    if (uVar2 <= uVar3) {
      uVar4 = uVar2;
    }
    uVar2 = uVar3;
    if (uVar5 <= uVar3) {
      uVar2 = uVar5;
    }
    _guard_check_icall(lVar1,uVar3,uVar2,uVar4);
  }
  param_1[2] = param_2;
  if (0xf < (ulonglong)param_1[3]) {
    *(undefined1 *)(*param_1 + param_2) = 0;
    return;
  }
  *(undefined1 *)((longlong)param_1 + param_2) = 0;
  return;
}

