/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800e4c6d */

void Unwind_1800e4c6d(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x50e8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_2 + 0x50b0));
  }
  return;
}

