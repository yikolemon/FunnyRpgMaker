/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400de2e0 */

void FUN_1400de2e0(longlong *param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  if (((param_1[2] != param_2) && (7 < (ulonglong)param_1[3])) && (DAT_140166098 != '\0')) {
    lVar2 = *param_1;
    uVar3 = param_1[3] * 2 + 9 + lVar2 & 0xfffffffffffffff8;
    uVar1 = lVar2 + (param_1[2] + 1) * 2;
    uVar4 = lVar2 + (param_2 + 1) * 2;
    uVar5 = uVar3;
    if (uVar4 <= uVar3) {
      uVar5 = uVar4;
    }
    uVar4 = uVar3;
    if (uVar1 <= uVar3) {
      uVar4 = uVar1;
    }
    _guard_check_icall(lVar2,uVar3,uVar4,uVar5);
  }
  param_1[2] = param_2;
  if (7 < (ulonglong)param_1[3]) {
    *(undefined2 *)(*param_1 + param_2 * 2) = 0;
    return;
  }
  *(undefined2 *)((longlong)param_1 + param_2 * 2) = 0;
  return;
}

