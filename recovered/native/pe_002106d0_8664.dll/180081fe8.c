/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180081fe8 */

void Unwind_180081fe8(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x70);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_2 + 0x38));
    *(undefined8 *)(param_2 + 0x70) = 0;
  }
  return;
}

