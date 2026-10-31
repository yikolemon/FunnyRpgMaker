/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140004cc4 */

void Unwind_140004cc4(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x70);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_2 + 0x38));
    *(undefined8 *)(param_2 + 0x70) = 0;
  }
  return;
}

