/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14002c596 */

void Unwind_14002c596(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  if ((*(char *)(*(longlong *)(param_2 + 0x48) + 0xe8) == '\x01') &&
     (plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x48) + 0xe0), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != *(longlong **)(param_2 + 0x30));
    *(undefined8 *)(*(longlong *)(param_2 + 0x48) + 0xe0) = 0;
  }
  return;
}

