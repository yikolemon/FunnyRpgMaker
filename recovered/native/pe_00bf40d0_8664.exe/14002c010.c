/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14002c010 */

void Unwind_14002c010(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (((*(char *)(param_2 + 0x211) == '\x01') && (*(char *)(param_2 + 0x1a0) != '\0')) &&
     (plVar1 = *(longlong **)(param_2 + 0x198), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_2 + 0x160));
  }
  return;
}

