/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801e061c */

void Unwind_1801e061c(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  if ((*(char *)(*(longlong *)(param_2 + 0xd0) + 0x40) == '\x01') &&
     (plVar1 = *(longlong **)(*(longlong *)(param_2 + 0xd0) + 0x38), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != *(longlong **)(param_2 + 0xd0));
  }
  return;
}

