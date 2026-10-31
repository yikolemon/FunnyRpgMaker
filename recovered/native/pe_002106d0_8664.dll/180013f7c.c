/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180013f7c */

void Unwind_180013f7c(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x88);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_2 + 0x28));
    *(undefined8 *)(param_2 + 0x60) = 0;
  }
  return;
}

