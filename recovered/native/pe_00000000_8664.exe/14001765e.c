/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14001765e */

void Unwind_14001765e(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0xb8) + 0x1b8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != *(longlong **)(param_2 + 0xa0));
    *(undefined8 *)(*(longlong *)(param_2 + 0xb8) + 0x1b8) = 0;
  }
  return;
}

