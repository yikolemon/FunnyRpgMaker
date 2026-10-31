/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14002b9a8 */

void Unwind_14002b9a8(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0xe8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_2 + 0xb0));
    *(undefined8 *)(param_2 + 0xe8) = 0;
  }
  return;
}

