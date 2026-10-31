/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800cf712 */

void Unwind_1800cf712(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x28) + 0x40);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = *(longlong *)(param_2 + 0x28);
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(lVar2 + 8));
    *(undefined8 *)(lVar2 + 0x40) = 0;
  }
  return;
}

