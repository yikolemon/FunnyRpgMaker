/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400111a4 */

void Unwind_1400111a4(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x160) + 0x88);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != *(longlong **)(param_2 + 0x98));
    *(undefined8 *)(*(longlong *)(param_2 + 0x160) + 0x88) = 0;
  }
  return;
}

