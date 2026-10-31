/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18002253c */

void Unwind_18002253c(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x28) + 0x1b8);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = *(longlong *)(param_2 + 0x28);
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(lVar2 + 0x180));
    *(undefined8 *)(lVar2 + 0x1b8) = 0;
  }
  return;
}

