/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180042c9c */

void Unwind_180042c9c(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x40) + 0x80);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != *(longlong **)(param_2 + 0x30));
    *(undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x80) = 0;
  }
  return;
}

