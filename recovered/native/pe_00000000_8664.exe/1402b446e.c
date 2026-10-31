/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402b446e */

void FUN_1402b446e(longlong *param_1,longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  if ((ulonglong)(param_1[2] - lVar1 >> 2) < param_3) {
    FUN_1402b4510(param_1,param_3);
    lVar5 = *param_1;
    thunk_FUN_1402b45b8(param_2,param_3,lVar5);
    lVar5 = lVar5 + param_3 * 4;
  }
  else {
    lVar2 = param_1[1];
    uVar3 = lVar2 - lVar1 >> 2;
    lVar4 = param_3 - uVar3;
    if (param_3 < uVar3 || lVar4 == 0) {
      lVar5 = lVar1 + param_3 * 4;
      thunk_FUN_1402b45b8(param_2,param_3);
    }
    else {
      thunk_FUN_1402b45b8(param_2);
      lVar5 = param_1[1];
      thunk_FUN_1402b45b8((lVar2 - lVar1) + param_2,lVar4,lVar5);
      lVar5 = lVar5 + lVar4 * 4;
    }
  }
  param_1[1] = lVar5;
  return;
}

