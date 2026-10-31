/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140004dcc */

void Unwind_140004dcc(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)
            (**(longlong **)(param_2 + 0x28) +
            (longlong)*(int *)(*(longlong *)**(longlong **)(param_2 + 0x28) + 4) + 0x48);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

