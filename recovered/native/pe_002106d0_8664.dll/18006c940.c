/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18006c940 */

void FUN_18006c940(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if ((lVar1 != 0) && (plVar2 = *(longlong **)(lVar1 + 0x48), plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != (longlong *)(lVar1 + 0x10));
    *(undefined8 *)(lVar1 + 0x48) = 0;
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    thunk_FUN_1802464a0(*(longlong *)(param_1 + 8),0x50);
    return;
  }
  return;
}

