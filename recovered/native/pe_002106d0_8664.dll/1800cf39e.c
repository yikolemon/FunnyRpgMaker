/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800cf39e */

void FUN_1800cf39e(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  lVar1 = *param_1;
  FUN_180044980();
  plVar2 = *(longlong **)(lVar1 + 0xf8);
  plVar3 = plVar2;
  while (plVar3 = (longlong *)*plVar3, plVar3 != plVar2) {
    (**(code **)(*(longlong *)plVar3[6] + 0x18))();
  }
  FUN_18023d6e0(lVar1);
  return;
}

