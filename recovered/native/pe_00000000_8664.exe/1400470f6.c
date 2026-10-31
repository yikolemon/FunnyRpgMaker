/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400470f6 */

void Unwind_1400470f6(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0xb8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_2 + 0x80));
    *(undefined8 *)(param_2 + 0xb8) = 0;
  }
  return;
}

