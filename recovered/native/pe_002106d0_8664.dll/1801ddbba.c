/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801ddbba */

void Unwind_1801ddbba(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x48) + 0x58);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != *(longlong **)(param_2 + 0x20));
    *(undefined8 *)(*(longlong *)(param_2 + 0x48) + 0x58) = 0;
  }
  return;
}

