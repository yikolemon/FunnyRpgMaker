/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800e05b8 */

longlong FUN_1800e05b8(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar2 = FUN_1800dbb7b(param_2 + 2);
  lVar1 = *(longlong *)(param_1 + 0x18);
  lVar3 = (uVar2 & *(ulonglong *)(param_1 + 0x30)) * 0x10;
  if (*(longlong **)(lVar1 + 8 + lVar3) == param_2) {
    if (*(longlong **)(lVar1 + lVar3) == param_2) {
      lVar4 = *(longlong *)(param_1 + 8);
      *(longlong *)(lVar1 + lVar3) = lVar4;
    }
    else {
      lVar4 = param_2[1];
    }
    *(longlong *)(lVar1 + 8 + lVar3) = lVar4;
  }
  else if (*(longlong **)(lVar1 + lVar3) == param_2) {
    *(longlong *)(lVar1 + lVar3) = *param_2;
  }
  lVar1 = *param_2;
  *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
  *(longlong *)param_2[1] = lVar1;
  *(longlong *)(lVar1 + 8) = param_2[1];
  thunk_FUN_1802464a0(param_2,0x18);
  return lVar1;
}

