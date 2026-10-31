/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140078d08 */

void Unwind_140078d08(undefined8 param_1,longlong param_2)

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

