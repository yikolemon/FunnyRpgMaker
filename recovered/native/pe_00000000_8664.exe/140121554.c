/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140121554 */

void Unwind_140121554(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (((*(char *)(param_2 + 0x211) == '\x01') && (*(char *)(param_2 + 0x1a0) != '\0')) &&
     (plVar1 = *(longlong **)(param_2 + 0x198), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_2 + 0x160));
  }
  return;
}

