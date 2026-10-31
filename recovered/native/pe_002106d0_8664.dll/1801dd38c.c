/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801dd38c */

void Unwind_1801dd38c(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x1f0);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_2 + 0x120));
    *(undefined8 *)(param_2 + 0x158) = 0;
  }
  *(undefined1 *)(param_2 + 0x214) = 1;
  *(undefined1 *)(param_2 + 0x215) = 1;
  return;
}

