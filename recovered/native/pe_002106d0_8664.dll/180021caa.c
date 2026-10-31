/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180021caa */

void FUN_180021caa(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar3 = *(ulonglong *)(param_1 + 0x18);
  uVar5 = *(longlong *)(param_1 + 0x10) - 1U & uVar3;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 8) + uVar5 * 8);
  plVar2 = (longlong *)plVar1[7];
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2,CONCAT71((int7)(uVar5 >> 8),plVar2 != plVar1));
    plVar1[7] = 0;
    uVar3 = *(ulonglong *)(param_1 + 0x18);
  }
  plVar1 = (longlong *)(param_1 + 0x20);
  *plVar1 = *plVar1 + -1;
  lVar4 = 0;
  if (*plVar1 != 0) {
    lVar4 = uVar3 + 1;
  }
  *(longlong *)(param_1 + 0x18) = lVar4;
  return;
}

