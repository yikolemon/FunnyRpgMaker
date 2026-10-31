/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14002de44 */

void Unwind_14002de44(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x160) + 0x160);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != *(longlong **)(param_2 + 0x100));
    *(undefined8 *)(*(longlong *)(param_2 + 0x160) + 0x160) = 0;
  }
  return;
}

