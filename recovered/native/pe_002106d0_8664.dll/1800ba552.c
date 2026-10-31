/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800ba552 */

void Unwind_1800ba552(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)
            ((longlong)*(longlong **)(param_2 + 0x28) +
            (longlong)*(int *)(**(longlong **)(param_2 + 0x28) + 4) + 0x48);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

