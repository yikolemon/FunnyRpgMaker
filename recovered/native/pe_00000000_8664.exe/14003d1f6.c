/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14003d1f6 */

void Unwind_14003d1f6(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x28) + 0x2050);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != *(longlong **)(param_2 + 0x20));
    *(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x2050) = 0;
  }
  return;
}

