/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801da19e */

void Unwind_1801da19e(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (((*(char *)(param_2 + 0x211) == '\x01') && (*(char *)(param_2 + 0x1a0) != '\0')) &&
     (plVar1 = *(longlong **)(param_2 + 0x198), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_2 + 0x160));
  }
  return;
}

