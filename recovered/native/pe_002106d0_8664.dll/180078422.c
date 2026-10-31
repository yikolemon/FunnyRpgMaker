/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180078422 */

void FUN_180078422(longlong *param_1,longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  lVar1 = *param_1;
  if ((ulonglong)(param_1[2] - lVar1) < param_3) {
    FUN_1800784ba(param_1,param_3);
    lVar1 = *param_1;
    thunk_FUN_180006ba5(param_2,param_3,lVar1);
    lVar1 = lVar1 + param_3;
  }
  else {
    uVar2 = param_1[1] - lVar1;
    lVar3 = param_3 - uVar2;
    if (param_3 < uVar2 || lVar3 == 0) {
      lVar1 = lVar1 + param_3;
      thunk_FUN_180006ba5(param_2,param_3);
    }
    else {
      thunk_FUN_180006ba5(param_2,uVar2);
      lVar1 = param_1[1];
      thunk_FUN_180006ba5(param_2 + uVar2,lVar3,lVar1);
      lVar1 = lVar1 + lVar3;
    }
  }
  param_1[1] = lVar1;
  return;
}

