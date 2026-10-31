/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14002c552 */

void Unwind_14002c552(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x450);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_2 + 0x418));
    *(undefined8 *)(param_2 + 0x450) = 0;
  }
  return;
}

