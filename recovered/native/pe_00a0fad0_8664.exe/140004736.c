/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140004736 */

void Unwind_140004736(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x68);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_2 + 0x30));
    *(undefined8 *)(param_2 + 0x68) = 0;
  }
  return;
}

