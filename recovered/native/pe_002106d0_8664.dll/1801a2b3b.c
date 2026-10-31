/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801a2b3b */

void Unwind_1801a2b3b(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x58);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_2 + 0x20));
  }
  return;
}

