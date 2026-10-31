/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140004d04 */

void Unwind_140004d04(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x78) + 0x38);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != *(longlong **)(param_2 + 0x78));
  }
  return;
}

