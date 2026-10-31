/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140122db2 */

void Unwind_140122db2(undefined8 param_1,longlong param_2)

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

