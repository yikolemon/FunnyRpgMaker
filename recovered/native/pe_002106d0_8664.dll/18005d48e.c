/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18005d48e */

void Unwind_18005d48e(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x278);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_2 + 0x2b8));
    *(undefined8 *)(param_2 + 0x2f0) = 0;
  }
  return;
}

