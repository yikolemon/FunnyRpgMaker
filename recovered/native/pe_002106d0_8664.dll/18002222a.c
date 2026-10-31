/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18002222a */

void Unwind_18002222a(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0xb8) + 0x1b8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != *(longlong **)(param_2 + 0xa0));
    *(undefined8 *)(*(longlong *)(param_2 + 0xb8) + 0x1b8) = 0;
  }
  return;
}

