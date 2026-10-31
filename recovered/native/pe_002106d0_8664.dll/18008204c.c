/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18008204c */

void Unwind_18008204c(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x80) + 0x38);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != *(longlong **)(param_2 + 0x80));
  }
  return;
}

