/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14002b916 */

void Unwind_14002b916(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x168);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_2 + 0x130));
    *(undefined8 *)(param_2 + 0x168) = 0;
  }
  return;
}

