/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14006e2ce */

void Unwind_14006e2ce(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x78);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_2 + 0x40));
    *(undefined8 *)(param_2 + 0x78) = 0;
  }
  return;
}

