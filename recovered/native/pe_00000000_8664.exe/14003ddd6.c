/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14003ddd6 */

void Unwind_14003ddd6(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)
            (**(longlong **)(param_2 + 0x20) +
            (longlong)*(int *)(*(longlong *)**(longlong **)(param_2 + 0x20) + 4) + 0x48);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

