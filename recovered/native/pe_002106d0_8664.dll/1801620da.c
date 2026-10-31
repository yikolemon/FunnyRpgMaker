/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801620da */

void Unwind_1801620da(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x1f8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_2 + 0x1c0));
    *(undefined8 *)(param_2 + 0x1f8) = 0;
  }
  return;
}

