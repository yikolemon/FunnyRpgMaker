/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14003ae04 */

void Unwind_14003ae04(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x2088);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_2 + 0x2050));
  }
  return;
}

