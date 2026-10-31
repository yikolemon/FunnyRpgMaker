/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14004436a */

void Unwind_14004436a(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x68) + 0x78);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != *(longlong **)(param_2 + 0x48));
    *(undefined8 *)(*(longlong *)(param_2 + 0x68) + 0x78) = 0;
  }
  return;
}

