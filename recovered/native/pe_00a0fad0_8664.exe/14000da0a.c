/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14000da0a */

void Unwind_14000da0a(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x38) + 0x78);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != *(longlong **)(param_2 + 0x20));
    *(undefined8 *)(*(longlong *)(param_2 + 0x38) + 0x78) = 0;
  }
  return;
}

