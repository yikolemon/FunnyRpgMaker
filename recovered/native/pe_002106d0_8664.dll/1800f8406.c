/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800f8406 */

void Unwind_1800f8406(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x158);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_2 + 0x120));
    *(undefined8 *)(param_2 + 0x158) = 0;
  }
  return;
}

