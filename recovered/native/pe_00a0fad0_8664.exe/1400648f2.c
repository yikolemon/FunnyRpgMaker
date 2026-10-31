/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400648f2 */

void Unwind_1400648f2(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x70) + 0x38);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != *(longlong **)(param_2 + 0x70));
  }
  return;
}

