/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402898f2 */

void FUN_1402898f2(longlong *param_1,longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  lVar1 = *param_1;
  if ((ulonglong)(param_1[2] - lVar1) < param_3) {
    FUN_14028998a(param_1,param_3);
    lVar1 = *param_1;
    thunk_FUN_140218075(param_2,param_3,lVar1);
    lVar1 = lVar1 + param_3;
  }
  else {
    uVar2 = param_1[1] - lVar1;
    lVar3 = param_3 - uVar2;
    if (param_3 < uVar2 || lVar3 == 0) {
      lVar1 = lVar1 + param_3;
      thunk_FUN_140218075(param_2,param_3);
    }
    else {
      thunk_FUN_140218075(param_2,uVar2);
      lVar1 = param_1[1];
      thunk_FUN_140218075(param_2 + uVar2,lVar3,lVar1);
      lVar1 = lVar1 + lVar3;
    }
  }
  param_1[1] = lVar1;
  return;
}

