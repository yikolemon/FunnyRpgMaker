/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801d7064 */

void Unwind_1801d7064(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (((*(char *)(param_2 + 0x211) == '\x01') && (*(char *)(param_2 + 0x90) != '\0')) &&
     (plVar1 = *(longlong **)(param_2 + 0x88), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_2 + 0x50));
  }
  return;
}

