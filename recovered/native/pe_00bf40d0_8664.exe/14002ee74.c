/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14002ee74 */

void Unwind_14002ee74(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  if ((*(char *)(*(longlong *)(param_2 + 0x68) + 0xe8) == '\x01') &&
     (plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x68) + 0xe0), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != *(longlong **)(param_2 + 0x38));
    *(undefined8 *)(*(longlong *)(param_2 + 0x68) + 0xe0) = 0;
  }
  return;
}

