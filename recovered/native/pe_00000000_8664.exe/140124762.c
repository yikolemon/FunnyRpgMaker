/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140124762 */

void Unwind_140124762(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  if ((*(char *)(*(longlong *)(param_2 + 0x48) + 0x1a0) == '\x01') &&
     (plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x48) + 0x198), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != *(longlong **)(param_2 + 0x40));
    *(undefined8 *)(*(longlong *)(param_2 + 0x48) + 0x198) = 0;
  }
  return;
}

