/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18003404a */

longlong * FUN_18003404a(longlong *param_1,undefined1 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (param_1[1] != 0) {
    plVar1 = (longlong *)*param_1;
    lVar2 = plVar1[1];
    uVar3 = lVar2 + 1;
    if ((ulonglong)plVar1[2] < uVar3) {
      (*(code *)plVar1[3])(plVar1);
      lVar2 = plVar1[1];
      uVar3 = lVar2 + 1;
    }
    plVar1[1] = uVar3;
    *(undefined1 *)(*plVar1 + lVar2) = param_2;
    param_1[1] = param_1[1] + -1;
  }
  return param_1;
}

