/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800135d2 */

void Unwind_1800135d2(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x160);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_2 + 0x128));
    *(undefined8 *)(param_2 + 0x160) = 0;
  }
  return;
}

