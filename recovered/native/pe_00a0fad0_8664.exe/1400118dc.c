/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400118dc */

void Unwind_1400118dc(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x30);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1,1);
  }
  return;
}

