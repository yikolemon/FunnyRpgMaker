/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140010fc0 */

void Unwind_140010fc0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x160) + 0x208);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != *(longlong **)(param_2 + 0xd0));
    *(undefined8 *)(*(longlong *)(param_2 + 0x160) + 0x208) = 0;
  }
  return;
}

