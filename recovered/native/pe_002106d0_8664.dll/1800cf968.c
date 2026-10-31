/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800cf968 */

void Unwind_1800cf968(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x28);
  plVar2 = *(longlong **)(lVar1 + 0x40);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != *(longlong **)(param_2 + 0x20));
    *(undefined8 *)(lVar1 + 0x40) = 0;
  }
  return;
}

