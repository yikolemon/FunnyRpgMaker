/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14002aae0 */

void Unwind_14002aae0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  *(undefined1 *)(param_2 + 0x214) = 1;
  *(undefined1 *)(param_2 + 0x215) = 1;
  plVar1 = *(longlong **)(param_2 + 0x158);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_2 + 0x120));
    *(undefined8 *)(param_2 + 0x158) = 0;
  }
  *(undefined1 *)(param_2 + 0x214) = 1;
  *(undefined1 *)(param_2 + 0x215) = 1;
  return;
}

