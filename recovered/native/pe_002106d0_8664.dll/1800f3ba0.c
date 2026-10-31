/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800f3ba0 */

void Unwind_1800f3ba0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x200);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_2 + 0x1c8));
    *(undefined8 *)(param_2 + 0x200) = 0;
  }
  return;
}

