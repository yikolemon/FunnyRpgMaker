/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140057766 */

void Unwind_140057766(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x150);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_2 + 0x118));
    *(undefined8 *)(param_2 + 0x150) = 0;
  }
  return;
}

