/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800bf4ae */

void FUN_1800bf4ae(longlong param_1,longlong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *(longlong *)(param_1 + 8);
  if ((ulonglong)(*(longlong *)(param_1 + 0x18) - lVar3 >> 2) < param_3) {
    FUN_1800bf552(param_1,param_3);
    lVar3 = *(longlong *)(param_1 + 8);
    thunk_FUN_1800a30e8(param_2,param_3,lVar3);
    lVar3 = lVar3 + param_3 * 4;
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x10) - lVar3;
    uVar1 = lVar4 >> 2;
    lVar2 = param_3 - uVar1;
    if (param_3 < uVar1 || lVar2 == 0) {
      lVar3 = lVar3 + param_3 * 4;
      thunk_FUN_1800a30e8(param_2,param_3);
    }
    else {
      thunk_FUN_1800a30e8(param_2);
      lVar3 = *(longlong *)(param_1 + 0x10);
      thunk_FUN_1800a30e8(lVar4 + param_2,lVar2,lVar3);
      lVar3 = lVar3 + lVar2 * 4;
    }
  }
  *(longlong *)(param_1 + 0x10) = lVar3;
  return;
}

