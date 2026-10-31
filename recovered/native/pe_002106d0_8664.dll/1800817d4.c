/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800817d4 */

void Unwind_1800817d4(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0xb0);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_2 + 0x78));
  }
  return;
}

