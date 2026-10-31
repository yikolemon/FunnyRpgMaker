/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140005210 */

void Unwind_140005210(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x138);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_2 + 0x100));
  }
  return;
}

