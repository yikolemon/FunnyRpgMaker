/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140008160 */

void Unwind_140008160(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x88) + 0xa8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != *(longlong **)(param_2 + 0x60));
    *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0xa8) = 0;
  }
  return;
}

