/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801706c6 */

void Unwind_1801706c6(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x30);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_2 + 0x40));
    *(undefined8 *)(param_2 + 0x78) = 0;
  }
  return;
}

