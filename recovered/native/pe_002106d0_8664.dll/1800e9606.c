/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800e9606 */

void Unwind_1800e9606(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x28) + 0x2050);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != *(longlong **)(param_2 + 0x20));
    *(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x2050) = 0;
  }
  return;
}

