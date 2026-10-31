/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14002f090 */

void Unwind_14002f090(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  if ((*(char *)(*(longlong *)(param_2 + 0xd0) + 0x40) == '\x01') &&
     (plVar1 = *(longlong **)(*(longlong *)(param_2 + 0xd0) + 0x38), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != *(longlong **)(param_2 + 0xd0));
  }
  return;
}

