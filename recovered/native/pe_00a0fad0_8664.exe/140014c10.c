/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140014c10 */

void Unwind_140014c10(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x160);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_2 + 0x128));
    *(undefined8 *)(param_2 + 0x160) = 0;
  }
  return;
}

