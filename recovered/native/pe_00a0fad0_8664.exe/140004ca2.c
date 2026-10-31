/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140004ca2 */

void Unwind_140004ca2(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x60);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_2 + 0x28));
    *(undefined8 *)(param_2 + 0x60) = 0;
  }
  return;
}

