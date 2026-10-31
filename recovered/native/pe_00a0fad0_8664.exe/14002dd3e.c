/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14002dd3e */

void Unwind_14002dd3e(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x160) + 0x230);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != *(longlong **)(param_2 + 0x128));
    *(undefined8 *)(*(longlong *)(param_2 + 0x160) + 0x230) = 0;
  }
  return;
}

