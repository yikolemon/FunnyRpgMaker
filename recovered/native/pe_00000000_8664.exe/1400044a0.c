/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400044a0 */

void Unwind_1400044a0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x180) + 0x38);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != *(longlong **)(param_2 + 0x180));
  }
  return;
}

